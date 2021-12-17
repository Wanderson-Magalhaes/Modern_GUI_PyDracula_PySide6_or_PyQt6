QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
TEMPLATE = app

FORMS += main.ui \
    splash_screen.ui

HEADERS += \
            mainwindow.h \
            modules/settings.h \
            ui_main.h \
            ui_splash_screen.h \
            widgets/custom_grips/customgrip.h \
            widgets/splah_screen/splash_screen.h

SOURCES += \
          main.cpp \
          mainwindow.cpp \
          widgets/custom_grips/customgrip.cpp \
          widgets/splah_screen/splash_screen.cpp

RESOURCES += \
    resources.qrc

TARGET = PyDracula
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
