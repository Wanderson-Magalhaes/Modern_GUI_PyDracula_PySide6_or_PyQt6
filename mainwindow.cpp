#include "mainwindow.h"

MainWindow::~MainWindow(){
    delete ui;
}

MainWindow::MainWindow(QWidget *parent):
QMainWindow(parent){


        // SET AS GLOBAL WIDGETS
        ui->setupUi(this);
        //auto widgets = ui;

        // USE CUSTOM TITLE BAR | USE AS "False" FOR MAC OR LINUX
        settings.ENABLE_CUSTOM_TITLE_BAR = true;

        // APP NAME
        QString title = "PyDracula - Modern GUI";
        QString description = "PyDracula APP - Theme with colors based on Dracula for Python.";

        // APPLY TEXTS
        setWindowTitle(title);
        ui->titleRightInfo->setText(description);

        // TOGGLE MENU
        //ui->toggleButton-clicked.connect(lambda: UIFunctions.toggleMenu(self, True));
        connect(ui->toggleButton,&QPushButton::clicked,this,&MainWindow::openMenu);

        // SET UI DEFINITIONS
        //UIFunctions.uiDefinitions(self)
            // a redefinir ici

        // QTableWidget PARAMETERS
        # ///////////////////////////////////////////////////////////////
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        // BUTTONS CLICK

        // LEFT MENUS

        connect(ui->btn_home,&QPushButton::clicked,this,&MainWindow::buttonClick);
        connect(ui->btn_widgets,&QPushButton::clicked,this,&MainWindow::buttonClick);
        connect(ui->btn_new,&QPushButton::clicked,this,&MainWindow::buttonClick);
        connect(ui->btn_save,&QPushButton::clicked,this,&MainWindow::buttonClick);


        // EXTRA LEFT BOX
        connect(ui->toggleLeftBox,&QPushButton::clicked,this,&MainWindow::openLeftBox);
        connect(ui->extraCloseColumnBtn,&QPushButton::clicked,this,&MainWindow::openLeftBox);

        // EXTRA RIGHT BOX
        connect(ui->settingsTopBtn,&QPushButton::clicked,this,&MainWindow::openRightBox);

        // SET CUSTOM THEME
        bool useCustomTheme = false;
        QFile themeFile ("themes\\py_dracula_light.qss");

        // SET THEME AND HACKS
        if (useCustomTheme){
           theme(themeFile, true); // LOAD AND APPLY STYLE
           setThemeHack(); // SET HACKS
        }
        // SET HOME PAGE AND SELECT MENU
        # ///////////////////////////////////////////////////////////////
        ui->stackedWidget->setCurrentWidget(ui->home);
        ui->btn_home->setStyleSheet(selectMenu(ui->btn_home->styleSheet()));
}

void MainWindow::setThemeHack(){
        settings.BTN_LEFT_BOX_COLOR = "background-color: //495474;";
        settings.BTN_RIGHT_BOX_COLOR = "background-color: //495474;";
        settings.MENU_SELECTED_STYLESHEET = R"(
        border-left: 22px solid qlineargradient(spread:pad, x1:0.034, y1:0, x2:0.216, y2:0, stop:0.499 rgba(255, 121, 198, 255), stop:0.5 rgba(85, 170, 255, 0));
        background-color: //566388;)";

        // SET MANUAL STYLES
        ui->lineEdit->setStyleSheet("background-color: //6272a4;");
        ui->pushButton->setStyleSheet("background-color: //6272a4;");
        ui->plainTextEdit->setStyleSheet("background-color: //6272a4;");
        ui->tableWidget->setStyleSheet("QScrollBar:vertical { background: //6272a4; } QScrollBar:horizontal { background: //6272a4; }");
        ui->scrollArea->setStyleSheet("QScrollBar:vertical { background: //6272a4; } QScrollBar:horizontal { background: //6272a4; }");
        ui->comboBox->setStyleSheet("background-color: //6272a4;");
        ui->horizontalScrollBar->setStyleSheet("background-color: //6272a4;");
        ui->verticalScrollBar->setStyleSheet("background-color: //6272a4;");
        ui->commandLinkButton->setStyleSheet("color: //ff79c6;");
}

void MainWindow::maximize_restore(){
    if (GLOBAL_STATE == false){
        showMaximized();
        GLOBAL_STATE = true;
        ui->appMargins->setContentsMargins(0, 0, 0, 0);
        ui->maximizeRestoreAppBtn->setToolTip("Restore");
        ui->maximizeRestoreAppBtn->setIcon(QIcon(":/icons/images/icons/icon_restore.png"));
        ui->frame_size_grip->hide();
        left_grip.hide();
        right_grip.hide();
        top_grip.hide();
        bottom_grip.hide();
    }
    else{
        GLOBAL_STATE = false;
        showNormal();
        resize(width()+1, height()+1);
        ui->appMargins->setContentsMargins(10, 10, 10, 10);
        ui->maximizeRestoreAppBtn->setToolTip("Maximize");
        ui->maximizeRestoreAppBtn->setIcon(QIcon(":/icons/images/icons/icon_maximize->png"));
        ui->frame_size_grip->show();
        left_grip.show();
        right_grip.show();
        top_grip.show();
        bottom_grip.show();
    }
}

class UIFunctions(MainWindow):
    // MAXIMIZE/RESTORE
    // ///////////////////////////////////////////////////////////////
    def maximize_restore(self):
        global GLOBAL_STATE
        status = GLOBAL_STATE
        if status == False:
            self.showMaximized()
            GLOBAL_STATE = True
            self.ui.appMargins.setContentsMargins(0, 0, 0, 0)
            self.ui.maximizeRestoreAppBtn.setToolTip("Restore")
            self.ui.maximizeRestoreAppBtn.setIcon(QIcon(u":/icons/images/icons/icon_restore.png"))
            self.ui.frame_size_grip.hide()
            self.left_grip.hide()
            self.right_grip.hide()
            self.top_grip.hide()
            self.bottom_grip.hide()
        else:
            GLOBAL_STATE = False
            self.showNormal()
            self.resize(self.width()+1, self.height()+1)
            self.ui.appMargins.setContentsMargins(10, 10, 10, 10)
            self.ui.maximizeRestoreAppBtn.setToolTip("Maximize")
            self.ui.maximizeRestoreAppBtn.setIcon(QIcon(u":/icons/images/icons/icon_maximize.png"))
            self.ui.frame_size_grip.show()
            self.left_grip.show()
            self.right_grip.show()
            self.top_grip.show()
            self.bottom_grip.show()

    // RETURN STATUS
    // ///////////////////////////////////////////////////////////////
    def returStatus(self):
        return GLOBAL_STATE

    // SET STATUS
    // ///////////////////////////////////////////////////////////////
    def setStatus(self, status):
        global GLOBAL_STATE
        GLOBAL_STATE = status

    // TOGGLE MENU
    // ///////////////////////////////////////////////////////////////
    def toggleMenu(self, enable):
        if enable:
            // GET WIDTH
            width = self.ui.leftMenuBg.width()
            maxExtend = Settings.MENU_WIDTH
            standard = 60

            // SET MAX WIDTH
            if width == 60:
                widthExtended = maxExtend
            else:
                widthExtended = standard

            // ANIMATION
            self.animation = QPropertyAnimation(self.ui.leftMenuBg, b"minimumWidth")
            self.animation.setDuration(Settings.TIME_ANIMATION)
            self.animation.setStartValue(width)
            self.animation.setEndValue(widthExtended)
            self.animation.setEasingCurve(QEasingCurve.InOutQuart)
            self.animation.start()

    // TOGGLE LEFT BOX
    // ///////////////////////////////////////////////////////////////
    def toggleLeftBox(self, enable):
        if enable:
            // GET WIDTH
            width = self.ui.extraLeftBox.width()
            widthRightBox = self.ui.extraRightBox.width()
            maxExtend = Settings.LEFT_BOX_WIDTH
            color = Settings.BTN_LEFT_BOX_COLOR
            standard = 0

            // GET BTN STYLE
            style = self.ui.toggleLeftBox.styleSheet()

            // SET MAX WIDTH
            if width == 0:
                widthExtended = maxExtend
                // SELECT BTN
                self.ui.toggleLeftBox.setStyleSheet(style + color)
                if widthRightBox != 0:
                    style = self.ui.settingsTopBtn.styleSheet()
                    self.ui.settingsTopBtn.setStyleSheet(style.replace(Settings.BTN_RIGHT_BOX_COLOR, ''))
            else:
                widthExtended = standard
                // RESET BTN
                self.ui.toggleLeftBox.setStyleSheet(style.replace(color, ''))

        UIFunctions.start_box_animation(self, width, widthRightBox, "left")

    // TOGGLE RIGHT BOX
    // ///////////////////////////////////////////////////////////////
    def toggleRightBox(self, enable):
        if enable:
            // GET WIDTH
            width = self.ui.extraRightBox.width()
            widthLeftBox = self.ui.extraLeftBox.width()
            maxExtend = Settings.RIGHT_BOX_WIDTH
            color = Settings.BTN_RIGHT_BOX_COLOR
            standard = 0

            // GET BTN STYLE
            style = self.ui.settingsTopBtn.styleSheet()

            // SET MAX WIDTH
            if width == 0:
                widthExtended = maxExtend
                // SELECT BTN
                self.ui.settingsTopBtn.setStyleSheet(style + color)
                if widthLeftBox != 0:
                    style = self.ui.toggleLeftBox.styleSheet()
                    self.ui.toggleLeftBox.setStyleSheet(style.replace(Settings.BTN_LEFT_BOX_COLOR, ''))
            else:
                widthExtended = standard
                // RESET BTN
                self.ui.settingsTopBtn.setStyleSheet(style.replace(color, ''))

            UIFunctions.start_box_animation(self, widthLeftBox, width, "right")

    def start_box_animation(self, left_box_width, right_box_width, direction):
        right_width = 0
        left_width = 0

        // Check values
        if left_box_width == 0 and direction == "left":
            left_width = 240
        else:
            left_width = 0
        // Check values
        if right_box_width == 0 and direction == "right":
            right_width = 240
        else:
            right_width = 0

        // ANIMATION LEFT BOX
        self.left_box = QPropertyAnimation(self.ui.extraLeftBox, b"minimumWidth")
        self.left_box.setDuration(Settings.TIME_ANIMATION)
        self.left_box.setStartValue(left_box_width)
        self.left_box.setEndValue(left_width)
        self.left_box.setEasingCurve(QEasingCurve.InOutQuart)

        // ANIMATION RIGHT BOX
        self.right_box = QPropertyAnimation(self.ui.extraRightBox, b"minimumWidth")
        self.right_box.setDuration(Settings.TIME_ANIMATION)
        self.right_box.setStartValue(right_box_width)
        self.right_box.setEndValue(right_width)
        self.right_box.setEasingCurve(QEasingCurve.InOutQuart)

        // GROUP ANIMATION
        self.group = QParallelAnimationGroup()
        self.group.addAnimation(self.left_box)
        self.group.addAnimation(self.right_box)
        self.group.start()

    // SELECT/DESELECT MENU
    // ///////////////////////////////////////////////////////////////
    // SELECT
    def selectMenu(getStyle):
        select = getStyle + Settings.MENU_SELECTED_STYLESHEET
        return select

    // DESELECT
    def deselectMenu(getStyle):
        deselect = getStyle.replace(Settings.MENU_SELECTED_STYLESHEET, "")
        return deselect

    // START SELECTION
    def selectStandardMenu(self, widget):
        for w in self.ui.topMenu.findChildren(QPushButton):
            if w.objectName() == widget:
                w.setStyleSheet(UIFunctions.selectMenu(w.styleSheet()))

    // RESET SELECTION
    def resetStyle(self, widget):
        for w in self.ui.topMenu.findChildren(QPushButton):
            if w.objectName() != widget:
                w.setStyleSheet(UIFunctions.deselectMenu(w.styleSheet()))

    // IMPORT THEMES FILES QSS/CSS
    // ///////////////////////////////////////////////////////////////
    def theme(self, file, useCustomTheme):
        if useCustomTheme:
            str = open(file, 'r').read()
            self.ui.styleSheet.setStyleSheet(str)

    // START - GUI DEFINITIONS
    // ///////////////////////////////////////////////////////////////
    def uiDefinitions(self):
        def dobleClickMaximizeRestore(event):
            // IF DOUBLE CLICK CHANGE STATUS
            if event.type() == QEvent.MouseButtonDblClick:
                QTimer.singleShot(250, lambda: UIFunctions.maximize_restore(self))
        self.ui.titleRightInfo.mouseDoubleClickEvent = dobleClickMaximizeRestore

        if Settings.ENABLE_CUSTOM_TITLE_BAR:
            //STANDARD TITLE BAR
            self.setWindowFlags(Qt.FramelessWindowHint)
            self.setAttribute(Qt.WA_TranslucentBackground)

            // MOVE WINDOW / MAXIMIZE / RESTORE
            def moveWindow(event):
                // IF MAXIMIZED CHANGE TO NORMAL
                if UIFunctions.returStatus(self):
                    UIFunctions.maximize_restore(self)
                // MOVE WINDOW
                if event.buttons() == Qt.LeftButton:
                    self.move(self.pos() + event.globalPos() - self.dragPos)
                    self.dragPos = event.globalPos()
                    event.accept()
            self.ui.titleRightInfo.mouseMoveEvent = moveWindow

            // CUSTOM GRIPS
            self.left_grip = CustomGrip(self, Qt.LeftEdge, True)
            self.right_grip = CustomGrip(self, Qt.RightEdge, True)
            self.top_grip = CustomGrip(self, Qt.TopEdge, True)
            self.bottom_grip = CustomGrip(self, Qt.BottomEdge, True)

        else:
            self.ui.appMargins.setContentsMargins(0, 0, 0, 0)
            self.ui.minimizeAppBtn.hide()
            self.ui.maximizeRestoreAppBtn.hide()
            self.ui.closeAppBtn.hide()
            self.ui.frame_size_grip.hide()

        // DROP SHADOW
        self.shadow = QGraphicsDropShadowEffect(self)
        self.shadow.setBlurRadius(17)
        self.shadow.setXOffset(0)
        self.shadow.setYOffset(0)
        self.shadow.setColor(QColor(0, 0, 0, 150))
        self.ui.bgApp.setGraphicsEffect(self.shadow)

        // RESIZE WINDOW
        self.sizegrip = QSizeGrip(self.ui.frame_size_grip)
        self.sizegrip.setStyleSheet("width: 20px; height: 20px; margin 0px; padding: 0px;")

        // MINIMIZE
        self.ui.minimizeAppBtn.clicked.connect(lambda: self.showMinimized())

        // MAXIMIZE/RESTORE
        self.ui.maximizeRestoreAppBtn.clicked.connect(lambda: UIFunctions.maximize_restore(self))

        // CLOSE APPLICATION
        self.ui.closeAppBtn.clicked.connect(lambda: self.close())

    def resize_grips(self):
        if Settings.ENABLE_CUSTOM_TITLE_BAR:
            self.left_grip.setGeometry(0, 10, 10, self.height())
            self.right_grip.setGeometry(self.width() - 10, 10, 10, self.height())
            self.top_grip.setGeometry(0, 0, self.width(), 10)
            self.bottom_grip.setGeometry(0, self.height() - 10, self.width(), 10)

    // ///////////////////////////////////////////////////////////////
    // END - GUI DEFINITIONS
