from . import resources_rc
from .handler import EventHandler
from .ui import Ui_MainWindow
from .custom_grips import CustomGrip
from .widget import AbstractMainUi


class Handler(EventHandler):

    def __init__(self, main_ui: AbstractMainUi):
        super().__init__()
        self.main_ui = main_ui

    def home(self):
        self.main_ui.stackedWidget.setCurrentWidget(self.main_ui.home)
        self.main_ui.reset_style('btn_home')
        self.main_ui.btn_home.setStyleSheet(self.main_ui.select_menu(self.main_ui.btn_home.styleSheet()))

    def widgets(self):
        self.main_ui.stackedWidget.setCurrentWidget(self.main_ui.widgets)
        self.main_ui.reset_style('btn_widgets')
        self.main_ui.btn_widgets.setStyleSheet(self.main_ui.select_menu(self.main_ui.btn_widgets.styleSheet()))

    def new(self):
        self.main_ui.stackedWidget.setCurrentWidget(self.main_ui.new_page)
        self.main_ui.reset_style('btn_new')
        self.main_ui.btn_new.setStyleSheet(self.main_ui.select_menu(self.main_ui.btn_new.styleSheet()))

    def save(self):
        print("Save BTN clicked!")


class App(AbstractMainUi):

    def __init__(self,
                 title: str = 'PyDracula - Modern GUI',
                 description: str = 'PyDracula APP - Theme with colors based on Dracula for Python.'):
        super().__init__()
        self.title = title
        self.description = description
        self.handler = Handler(self)

    def init_view(self):
        self.setWindowTitle(self.title)
        self.titleRightInfo.setText(self.description)

        self.stackedWidget.setCurrentWidget(self.home)
        self.btn_home.setStyleSheet(self.select_menu(self.btn_home.styleSheet()))

        useCustomTheme = False
        themeFile = "res/themes/py_dracula_light.qss"

        # SET THEME AND HACKS
        if useCustomTheme:
            # LOAD AND APPLY STYLE
            self.theme(themeFile, True)

            # SET HACKS
            self.set_theme_hack()

    def connect_event(self):
        self.toggleButton.clicked.connect(self.toggle_menu)
        self.toggleLeftBox.clicked.connect(self.toggle_left_box)
        self.extraCloseColumnBtn.clicked.connect(self.toggle_left_box)
        self.settingsTopBtn.clicked.connect(self.toggle_right_box)

        self.titleRightInfo.mouseDoubleClickEvent = self.double_click_maximize_restore
        # MINIMIZE
        self.minimizeAppBtn.clicked.connect(self.showMinimized)
        # MAXIMIZE/RESTORE
        self.maximizeRestoreAppBtn.clicked.connect(self.maximize_restore)
        # CLOSE APPLICATION
        self.closeAppBtn.clicked.connect(self.close)

        self.btn_home.clicked.connect(self.handler.home)
        self.btn_widgets.clicked.connect(self.handler.widgets)
        self.btn_new.clicked.connect(self.handler.new)
        self.btn_save.clicked.connect(self.handler.save)




