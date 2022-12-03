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

from PySide6.QtWidgets import QHeaderView

from modules.app_settings import Settings
from modules.ui_main import Ui_MainWindow
from modules.ui_beautify import UiBeautify
from modules.ui_functions import UIFunctions
from modules.app_functions import AppFunctions


class App(UiBeautify):

    def __init__(self):
        super().__init__()

    def launch(self):
        self.setupUi(self)

        # USE CUSTOM TITLE BAR | USE AS "False" FOR MAC OR LINUX
        # ///////////////////////////////////////////////////////////////
        Settings.ENABLE_CUSTOM_TITLE_BAR = True

        # APP NAME
        # ///////////////////////////////////////////////////////////////
        title = "PyDracula - Modern GUI"
        description = "PyDracula APP - Theme with colors based on Dracula for Python."

        # APPLY TEXTS
        self.setWindowTitle(title)
        self.titleRightInfo.setText(description)
        self.tableWidget.horizontalHeader().setSectionResizeMode(QHeaderView.ResizeMode.Stretch)
        self.connect_event()

        # show app ui
        self.show()

        # SET CUSTOM THEME
        # ///////////////////////////////////////////////////////////////
        useCustomTheme = False
        themeFile = "themes/py_dracula_light.qss"

        # SET THEME AND HACKS
        if useCustomTheme:
            # LOAD AND APPLY STYLE
            UIFunctions.theme(self, themeFile, True)

            # SET HACKS
            AppFunctions.setThemeHack(self)

        # SET HOME PAGE AND SELECT MENU
        # ///////////////////////////////////////////////////////////////
        self.stackedWidget.setCurrentWidget(self.home)
        self.btn_home.setStyleSheet(UIFunctions.selectMenu(self.btn_home.styleSheet()))

    def connect_event(self):
        # TOGGLE MENU
        # ///////////////////////////////////////////////////////////////
        self.toggleButton.clicked.connect(lambda: UIFunctions.ex_toggleMenu(self, True))

        # SET UI DEFINITIONS
        # ///////////////////////////////////////////////////////////////
        UIFunctions.uiDefinitions(self)

        # LEFT MENUS
        self.btn_home.clicked.connect(self.buttonClick)
        self.btn_widgets.clicked.connect(self.buttonClick)
        self.btn_new.clicked.connect(self.buttonClick)
        self.btn_save.clicked.connect(self.buttonClick)

        # EXTRA LEFT BOX
        def openCloseLeftBox():
            UIFunctions.ex_toggleLeftBox(self, True)

        self.toggleLeftBox.clicked.connect(openCloseLeftBox)
        self.extraCloseColumnBtn.clicked.connect(openCloseLeftBox)

        # EXTRA RIGHT BOX
        def openCloseRightBox():
            UIFunctions.ex_toggleRightBox(self, True)

        self.settingsTopBtn.clicked.connect(openCloseRightBox)

    # RESIZE EVENTS
    # ///////////////////////////////////////////////////////////////
    def resizeEvent(self, event):
        # Update Size Grips
        UIFunctions.resize_grips(self)

    # BUTTONS CLICK
    # Post here your functions for clicked buttons
    # ///////////////////////////////////////////////////////////////
    def buttonClick(self):
        # GET BUTTON CLICKED
        btn = self.sender()
        btnName = btn.objectName()

        # SHOW HOME PAGE
        if btnName == "btn_home":
            self.stackedWidget.setCurrentWidget(self.home)
            UIFunctions.resetStyle(self, btnName)
            btn.setStyleSheet(UIFunctions.selectMenu(btn.styleSheet()))

        # SHOW WIDGETS PAGE
        if btnName == "btn_widgets":
            self.stackedWidget.setCurrentWidget(self.widgets)
            UIFunctions.resetStyle(self, btnName)
            btn.setStyleSheet(UIFunctions.selectMenu(btn.styleSheet()))

        # SHOW NEW PAGE
        if btnName == "btn_new":
            self.stackedWidget.setCurrentWidget(self.new_page)  # SET PAGE
            UIFunctions.resetStyle(self, btnName)  # RESET ANOTHERS BUTTONS SELECTED
            btn.setStyleSheet(UIFunctions.selectMenu(btn.styleSheet()))  # SELECT MENU

        if btnName == "btn_save":
            print("Save BTN clicked!")

        # PRINT BTN NAME
        print(f'Button "{btnName}" pressed!')
