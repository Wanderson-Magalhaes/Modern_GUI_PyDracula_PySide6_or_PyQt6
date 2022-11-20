# ///////////////////////////////////////////////////////////////
#
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
#
# ///////////////////////////////////////////////////////////////

import sys
import os
import platform
import requests

# IMPORT / GUI AND MODULES AND WIDGETS
# ///////////////////////////////////////////////////////////////
from modules import *
from widgets import *
os.environ["QT_FONT_DPI"] = "96" # FIX Problem for High DPI and Scale above 100%

# SET AS GLOBAL WIDGETS
# ///////////////////////////////////////////////////////////////
widgets = None

class MainWindow(QMainWindow):
    def __init__(self):
        QMainWindow.__init__(self)

        # SET AS GLOBAL WIDGETS
        # ///////////////////////////////////////////////////////////////
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        global widgets
        widgets = self.ui
        self.frimestate = 0
        self.previous_run = []
        self.txSave = {}
        self.rxSave = {}
        self.targetSave = {}

        widgets.label.setPixmap(QPixmap("./images/images/picture.png"))

        # USE CUSTOM TITLE BAR | USE AS "False" FOR MAC OR LINUX
        # ///////////////////////////////////////////////////////////////
        Settings.ENABLE_CUSTOM_TITLE_BAR = True

        # APP NAME
        # ///////////////////////////////////////////////////////////////
        title = "PyQt GUI"
        description = "Sonobuoy MAP GUI"
        # APPLY TEXTS
        self.setWindowTitle(title)
        widgets.titleRightInfo.setText(description)

        # TOGGLE MENU
        # ///////////////////////////////////////////////////////////////
        # widgets.toggleButton.clicked.connect(lambda: UIFunctions.toggleMenu(self, True))

        # SET UI DEFINITIONS
        # ///////////////////////////////////////////////////////////////
        UIFunctions.uiDefinitions(self)

        # QTableWidget PARAMETERS
        # ///////////////////////////////////////////////////////////////
        # widgets.tableWidget.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)

        # BUTTONS CLICK
        # ///////////////////////////////////////////////////////////////

        # LEFT MENUS
        widgets.btn_setting.clicked.connect(self.buttonClick)
        widgets.btn_widgets.clicked.connect(self.buttonClick)
        widgets.btn_map.clicked.connect(self.buttonClick)
        widgets.btn_kill.clicked.connect(self.buttonClick)
        widgets.settingBtn.clicked.connect(self.buttonClick)

        # EXTRA LEFT BOX
        def openCloseLeftBox():
            UIFunctions.toggleLeftBox(self, True)
        widgets.toggleLeftBox.clicked.connect(openCloseLeftBox)
        widgets.extraCloseColumnBtn.clicked.connect(openCloseLeftBox)

        # EXTRA RIGHT BOX
        def openCloseRightBox():
            UIFunctions.toggleRightBox(self, True)

        # SHOW APP
        # ///////////////////////////////////////////////////////////////
        self.show()

        # SET CUSTOM THEME
        # ///////////////////////////////////////////////////////////////
        useCustomTheme = False
        themeFile = "themes\py_dracula_light.qss"

        # SET THEME AND HACKS
        if useCustomTheme:
            # LOAD AND APPLY STYLE
            UIFunctions.theme(self, themeFile, True)

            # SET HACKS
            AppFunctions.setThemeHack(self)

        # SET HOME PAGE AND SELECT MENU
        # ///////////////////////////////////////////////////////////////
        widgets.stackedWidget.setCurrentWidget(widgets.home)
        widgets.btn_map.setStyleSheet(UIFunctions.selectMenu(widgets.btn_map.styleSheet()))


    # BUTTONS CLICK
    # Post here your functions for clicked buttons
    # ///////////////////////////////////////////////////////////////
    def buttonClick(self):
        # GET BUTTON CLICKED
        btn = self.sender()
        btnName = btn.objectName()

        # 설정 페이지
        if btnName == "btn_setting":
            widgets.stackedWidget.setCurrentWidget(widgets.widgets)
            UIFunctions.resetStyle(self, btnName)
            btn.setStyleSheet(UIFunctions.selectMenu(btn.styleSheet()))

            self.frimestate = 0
            widgets.btn_widgets.setStyleSheet("background-image: url(:/icons/images/icons/cil-wifi-signal-off.png);")
            widgets.btn_widgets.setDisabled(True)
            if self.txSave:
                self.txSave['label'].setHidden(True)
            if self.rxSave:
                self.rxSave['label'].setHidden(True)
            if self.targetSave:
                self.targetSave['label'].setHidden(True)

        # 맵 페이지
        if btnName == "btn_map":
            widgets.stackedWidget.setCurrentWidget(widgets.new_page) # SET PAGE
            UIFunctions.resetStyle(self, btnName) # RESET ANOTHERS BUTTONS SELECTED
            btn.setStyleSheet(UIFunctions.selectMenu(btn.styleSheet())) # SELECT MENU
            widgets.btn_widgets.setEnabled(True)
            if self.txSave:
                self.txSave['label'].setHidden(False)
            if self.rxSave:
                self.rxSave['label'].setHidden(False)
            if self.targetSave:
                self.targetSave['label'].setHidden(False)

        # 맵 페이지에 아이콘라벨 입히기
        if btnName == "btn_widgets":
            if self.frimestate == 1:
                self.frimestate = 0
                widgets.btn_widgets.setStyleSheet("background-image: url(:/icons/images/icons/cil-wifi-signal-off.png);")
                
            else:
                self.frimestate = 1
                widgets.btn_widgets.setStyleSheet("background-image: url(:/icons/images/icons/cil-wifi-signal-0.png);")
                if self.txSave:
                    self.txSave['label'].setHidden(False)
                if self.rxSave:
                    self.rxSave['label'].setHidden(False)
                if self.targetSave:
                    self.targetSave['label'].setHidden(False)

        # 아이콘라벨 모두 죽이기
        if btnName == "btn_kill":
            self.txSave['label'].close()
            self.rxSave['label'].close()
            self.targetSave['label'].close()
            self.txSave.clear()
            self.rxSave.clear()
            self.targetSave.clear()

        # 맵 좌표 이동시키기
        if btnName == "settingBtn":

            BASE_URL = 'https://maps.googleapis.com/maps/api/staticmap?'
            API_KEY  = 'AIzaSyCHWLALETpUW1cVZhMG5Z_1LKS86DpcvI8'
            POS = widgets.areaEdit.text() + ',' + widgets.areaEdit_2.text()
            URL = (BASE_URL 
            + f'center={POS}'
            + f'&zoom=6'
            + f'&size={1200}x{800}&scale=2'
            + f'&maptype=satellite'
            + f'&key={API_KEY}')
            
            r = requests.get(URL)
            file = open("./images/images/picture2.png","wb")
            file.write(r.content)
            file.close()
            widgets.label.setPixmap(QPixmap("./images/images/picture2.png"))
            widgets.currentArea.setText('현재 좌표 : (' + widgets.areaEdit.text() + ',' + widgets.areaEdit_2.text() + ')')

        # PRINT BTN NAME
        print(f'Button "{btnName}" pressed!')

    def mouseMoveEvent(self, event):
        # MOVE WINDOW
        if Settings.ENABLE_CUSTOM_TITLE_BAR:
            if event.buttons() == Qt.LeftButton:
                self.move(self.pos() + event.globalPos() - self.dragPos)
                self.dragPos = event.globalPos()
                event.accept()     

    # RESIZE EVENTS
    # ///////////////////////////////////////////////////////////////
    def resizeEvent(self, event):
        # Update Size Grips
        UIFunctions.resize_grips(self)

    # MOUSE CLICK EVENTS
    # ///////////////////////////////////////////////////////////////
    def mousePressEvent(self, event):
        # SET DRAG POS WINDOW
        self.dragPos = event.globalPos()

        # 마우스 좌클릭시 TX 아이콘 띄우기
        if event.buttons() == Qt.LeftButton and self.frimestate == 1:
            if self.txSave:
                self.txSave['label'].close()
                self.txSave.clear()

            self.label = QLabel(self)
            self.label.setGeometry(event.pos().x(), event.pos().y(), 16, 16)
            pixmap = QPixmap("./images/icons/cil-cursor.png")
            self.label.setPixmap(pixmap)
            self.label.show()
            self.txSave = {'label':self.label, 'posX':event.pos().x(), 'posY':event.pos().y()}
            widgets.txXEdit.setText(str(event.pos().x()))
            widgets.txYEdit.setText(str(event.pos().y()))
        
        # 마우스 우클릭시 RX 아이콘 띄우기
        if event.buttons() == Qt.RightButton and self.frimestate == 1:
            if self.rxSave:
                self.rxSave['label'].close()
                self.rxSave.clear()

            self.label = QLabel(self)
            self.label.setGeometry(event.pos().x(), event.pos().y(), 16, 16)
            pixmap = QPixmap("./images/icons/cil-wifi-signal-4.png")
            self.label.setPixmap(pixmap)
            self.label.show()
            self.rxSave = {'label':self.label, 'posX':event.pos().x(), 'posY':event.pos().y()}
            widgets.rxXEdit.setText(str(event.pos().x()))
            widgets.rxYEdit.setText(str(event.pos().y()))

        
        
        # 마우스 중간클릭시 타겟 아이콘 띄우기
        if event.buttons() == Qt.MiddleButton and self.frimestate == 1:
            if self.targetSave:
                self.targetSave['label'].close()
                self.targetSave.clear()
            self.label = QLabel(self)
            self.label.setGeometry(event.pos().x(), event.pos().y(), 16, 16)
            pixmap = QPixmap("./images/icons/cil-wifi-signal-0.png")
            self.label.setPixmap(pixmap)
            self.label.show()
            self.targetSave = {'label':self.label, 'posX':event.pos().x(), 'posY':event.pos().y()}
            widgets.targetXEdit.setText(str(event.pos().x()))
            widgets.targetYEdit.setText(str(event.pos().y()))


if __name__ == "__main__":
    app = QApplication(sys.argv)
    app.setWindowIcon(QIcon("sono.ico"))
    window = MainWindow()
    sys.exit(app.exec_())
