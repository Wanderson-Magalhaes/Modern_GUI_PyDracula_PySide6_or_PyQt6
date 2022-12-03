from abc import abstractmethod

from PySide6.QtCore import (
    Qt
)
from PySide6.QtWidgets import (
    QMainWindow,
)

from modules import (
    Ui_MainWindow,
)


class UiBeautify(Ui_MainWindow, QMainWindow):

    def __init__(self):
        super().__init__()

    @abstractmethod
    def launch(self):
        pass

    @abstractmethod
    def connect_event(self):
        pass

    def mousePressEvent(self, event):
        # SET DRAG POS WINDOW
        self.dragPos = event.globalPos()

        # PRINT MOUSE EVENTS
        if event.buttons() == Qt.LeftButton:
            print('Mouse click: LEFT CLICK')
        if event.buttons() == Qt.RightButton:
            print('Mouse click: RIGHT CLICK')
