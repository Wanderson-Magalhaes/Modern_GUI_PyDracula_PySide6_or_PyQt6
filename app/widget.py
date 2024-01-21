# BY: WANDERSON M.PIMENTA
# PROJECT MADE WITH: Qt Designer and PySide6
# V: 1.0.0
#
# This project can be used freely for all uses, as long as they maintain the
# respective credits only in the Python scripts, any information in the visual
# interface (GUI) can be modified without any implication.
#
# There are limitations on Qt licenses if you want to use your products
# commercially, I recommend reading them on the official website:
# https://doc.qt.io/qtforpython/licenses.html

from abc import abstractmethod

from PySide6.QtCore import (
    QPropertyAnimation,
    QParallelAnimationGroup,
    QEvent,
    QTimer,
    Qt,
    QEasingCurve
)
from PySide6.QtWidgets import (
    QMainWindow,
    QPushButton,
    QGraphicsDropShadowEffect,
    QSizeGrip,
    QHeaderView
)
from PySide6.QtGui import (
    QIcon,
    QColor
)

from . import (
    Ui_MainWindow,
    CustomGrip
)


class AbstractMainUi(Ui_MainWindow, QMainWindow):
    ENABLE_CUSTOM_TITLE_BAR = True
    MENU_WIDTH = 240
    LEFT_BOX_WIDTH = 240
    RIGHT_BOX_WIDTH = 240
    TIME_ANIMATION = 500

    # BTNS LEFT AND RIGHT BOX COLORS
    BTN_LEFT_BOX_COLOR = "background-color: rgb(44, 49, 58);"
    BTN_RIGHT_BOX_COLOR = "background-color: #ff79c6;"

    # MENU SELECTED STYLESHEET
    MENU_SELECTED_STYLESHEET = """
        border-left: 22px solid qlineargradient(spread:pad, x1:0.034, y1:0, x2:0.216, y2:0, stop:0.499 rgba(255, 121, 198, 255), stop:0.5 rgba(85, 170, 255, 0));
        background-color: rgb(40, 44, 52);
        """
    
    def __init__(self):
        super().__init__()
        self.global_state = False
        
        self.drag_pos = None

        self.left_grip = None
        self.right_grip = None
        self.top_grip = None
        self.bottom_grip = None

    def launch(self):
        self.setupUi(self)
        self.retranslateUi(self)

        self.init_ui()
        self.init_view()
        self.connect_event()
        self.show()

    @abstractmethod
    def connect_event(self):
        pass

    @abstractmethod
    def init_view(self):
        pass

    def resizeEvent(self, event):
        if self.ENABLE_CUSTOM_TITLE_BAR:
            self.left_grip.setGeometry(0, 10, 10, self.height())
            self.right_grip.setGeometry(self.width() - 10, 10, 10, self.height())
            self.top_grip.setGeometry(0, 0, self.width(), 10)
            self.bottom_grip.setGeometry(0, self.height() - 10, self.width(), 10)

    def mousePressEvent(self, event):
        self.drag_pos = event.globalPos()

        # PRINT MOUSE EVENTS
        if event.buttons() == Qt.LeftButton:
            print('Mouse click: LEFT CLICK')
        if event.buttons() == Qt.RightButton:
            print('Mouse click: RIGHT CLICK')

    def double_click_maximize_restore(self, event):
        # IF DOUBLE CLICK CHANGE STATUS
        if event.type() == QEvent.MouseButtonDblClick:
            QTimer.singleShot(250, self.maximize_restore)

    # MOVE WINDOW / MAXIMIZE / RESTORE
    def move_window(self, event):
        # IF MAXIMIZED CHANGE TO NORMAL
        if self.global_state:
            self.maximize_restore()
        # MOVE WINDOW
        if event.buttons() == Qt.LeftButton:
            self.move(self.pos() + event.globalPos() - self.drag_pos)
            self.drag_pos = event.globalPos()

        event.accept()

    def init_ui(self):
        self.tableWidget.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)

        if self.ENABLE_CUSTOM_TITLE_BAR:
            #STANDARD TITLE BAR
            self.setWindowFlags(Qt.FramelessWindowHint)
            self.setAttribute(Qt.WA_TranslucentBackground)

            self.titleRightInfo.mouseMoveEvent = self.move_window

            # CUSTOM GRIPS
            self.left_grip = CustomGrip(self, Qt.LeftEdge, True)
            self.right_grip = CustomGrip(self, Qt.RightEdge, True)
            self.top_grip = CustomGrip(self, Qt.TopEdge, True)
            self.bottom_grip = CustomGrip(self, Qt.BottomEdge, True)

        else:
            self.appMargins.setContentsMargins(0, 0, 0, 0)
            self.minimizeAppBtn.hide()
            self.maximizeRestoreAppBtn.hide()
            self.closeAppBtn.hide()
            self.frame_size_grip.hide()

        # DROP SHADOW
        shadow = QGraphicsDropShadowEffect(self)
        shadow.setBlurRadius(17)
        shadow.setXOffset(0)
        shadow.setYOffset(0)
        shadow.setColor(QColor(0, 0, 0, 150))
        self.bgApp.setGraphicsEffect(shadow)

        # RESIZE WINDOW
        sizegrip = QSizeGrip(self.frame_size_grip)
        sizegrip.setStyleSheet('width: 20px; height: 20px; margin 0px; padding: 0px;')

    def maximize_restore(self):
        # reset global state
        self.global_state = not self.global_state

        if self.global_state:
            self.showNormal()
            self.resize(self.width() + 1, self.height() + 1)
            self.appMargins.setContentsMargins(10, 10, 10, 10)
            self.maximizeRestoreAppBtn.setToolTip('Maximize')
            self.maximizeRestoreAppBtn.setIcon(QIcon(':/icons/images/icons/icon_maximize.png'))
            self.frame_size_grip.show()
            self.left_grip.show()
            self.right_grip.show()
            self.top_grip.show()
            self.bottom_grip.show()
            return

        self.showMaximized()
        self.appMargins.setContentsMargins(0, 0, 0, 0)
        self.maximizeRestoreAppBtn.setToolTip('Restore')
        self.maximizeRestoreAppBtn.setIcon(QIcon(':/icons/images/icons/icon_restore.png'))
        self.frame_size_grip.hide()
        self.left_grip.hide()
        self.right_grip.hide()
        self.top_grip.hide()
        self.bottom_grip.hide()

    def toggle_menu(self):
        # GET WIDTH
        width = self.leftMenuBg.width()
        max_extend = self.MENU_WIDTH
        standard = 60

        # SET MAX WIDTH
        width_extended = max_extend if width == 60 else standard

        # ANIMATION
        animation = QPropertyAnimation(self.leftMenuBg, b'minimumWidth', self)
        animation.setDuration(self.TIME_ANIMATION)
        animation.setStartValue(width)
        animation.setEndValue(width_extended)
        animation.setEasingCurve(QEasingCurve.InOutQuart)
        animation.start()

    def toggle_left_box(self):
        # GET WIDTH
        width = self.extraLeftBox.width()
        width_right_box = self.extraRightBox.width()
        color = self.BTN_LEFT_BOX_COLOR

        # GET BTN STYLE
        left_box_style = self.toggleLeftBox.styleSheet()

        # SET MAX WIDTH
        if width == 0:
            # SELECT BTN
            self.toggleLeftBox.setStyleSheet(left_box_style + color)
            if width_right_box != 0:
                top_btn_style = self.settingsTopBtn.styleSheet()
                self.settingsTopBtn.setStyleSheet(top_btn_style.replace(self.BTN_RIGHT_BOX_COLOR, ''))
        else:
            # RESET BTN
            self.toggleLeftBox.setStyleSheet(left_box_style.replace(color, ''))
                
        self.start_box_animation(width, width_right_box, 'left')

    def toggle_right_box(self):
        # GET WIDTH
        width = self.extraRightBox.width()
        width_left_box = self.extraLeftBox.width()
        color = self.BTN_RIGHT_BOX_COLOR

        # GET BTN STYLE
        top_btn_style = self.settingsTopBtn.styleSheet()

        # SET MAX WIDTH
        if width == 0:
            # SELECT BTN
            self.settingsTopBtn.setStyleSheet(top_btn_style + color)
            if width_left_box != 0:
                left_box_style = self.toggleLeftBox.styleSheet()
                self.toggleLeftBox.setStyleSheet(left_box_style.replace(self.BTN_LEFT_BOX_COLOR, ''))
        else:
            # RESET BTN
            self.settingsTopBtn.setStyleSheet(top_btn_style.replace(color, ''))

        self.start_box_animation(width_left_box, width, 'right')

    def start_box_animation(self, left_box_width, right_box_width, direction):
        # Check values
        left_width = 240 if left_box_width == 0 and direction == 'left' else 0

        # Check values
        right_width = 240 if right_box_width == 0 and direction == 'right' else 0

        # ANIMATION LEFT BOX        
        left_box = QPropertyAnimation(self.extraLeftBox, b'minimumWidth')
        left_box.setDuration(self.TIME_ANIMATION)
        left_box.setStartValue(left_box_width)
        left_box.setEndValue(left_width)
        left_box.setEasingCurve(QEasingCurve.InOutQuart)

        # ANIMATION RIGHT BOX        
        right_box = QPropertyAnimation(self.extraRightBox, b'minimumWidth')
        right_box.setDuration(self.TIME_ANIMATION)
        right_box.setStartValue(right_box_width)
        right_box.setEndValue(right_width)
        right_box.setEasingCurve(QEasingCurve.InOutQuart)

        # GROUP ANIMATION
        group = QParallelAnimationGroup(self)
        group.addAnimation(left_box)
        group.addAnimation(right_box)
        group.start()

    def select_menu(self, get_style):
        select = get_style + self.MENU_SELECTED_STYLESHEET
        return select

    def reset_style(self, btn_name: str):
        for w in self.topMenu.findChildren(QPushButton):
            if w.objectName() == btn_name:
                continue
            deselect = w.styleSheet().replace(self.MENU_SELECTED_STYLESHEET, '')
            w.setStyleSheet(deselect)

    def theme(self, file, use_custom_theme):
        if not use_custom_theme:
            return
        with open(file, 'r') as style_file:
            style_string = style_file.read()
            self.styleSheet.setStyleSheet(style_string)
    
    def set_theme_hack(self):
        self.BTN_LEFT_BOX_COLOR = "background-color: #495474;"
        self.BTN_RIGHT_BOX_COLOR = "background-color: #495474;"
        self.MENU_SELECTED_STYLESHEET = MENU_SELECTED_STYLESHEET = """
        border-left: 22px solid qlineargradient(spread:pad, x1:0.034, y1:0, x2:0.216, y2:0, stop:0.499 rgba(255, 121, 198, 255), stop:0.5 rgba(85, 170, 255, 0));
        background-color: #566388;
        """

        # SET MANUAL STYLES
        self.lineEdit.setStyleSheet("background-color: #6272a4;")
        self.pushButton.setStyleSheet("background-color: #6272a4;")
        self.plainTextEdit.setStyleSheet("background-color: #6272a4;")
        self.tableWidget.setStyleSheet("QScrollBar:vertical { background: #6272a4; } QScrollBar:horizontal { background: #6272a4; }")
        self.scrollArea.setStyleSheet("QScrollBar:vertical { background: #6272a4; } QScrollBar:horizontal { background: #6272a4; }")
        self.comboBox.setStyleSheet("background-color: #6272a4;")
        self.horizontalScrollBar.setStyleSheet("background-color: #6272a4;")
        self.verticalScrollBar.setStyleSheet("background-color: #6272a4;")
        self.commandLinkButton.setStyleSheet("color: #ff79c6;")
