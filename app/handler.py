from abc import abstractmethod

from PySide6.QtCore import Signal, QObject


class EventHandler(QObject):

    @abstractmethod
    def home(self):
        pass

    @abstractmethod
    def widgets(self):
        pass

    @abstractmethod
    def new(self):
        pass

    @abstractmethod
    def save(self):
        pass
