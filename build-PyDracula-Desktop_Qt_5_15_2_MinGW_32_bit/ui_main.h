/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *styleSheet;
    QVBoxLayout *appMargins;
    QFrame *bgApp;
    QHBoxLayout *appLayout;
    QFrame *leftMenuBg;
    QVBoxLayout *verticalLayout_3;
    QFrame *topLogoInfo;
    QFrame *topLogo;
    QLabel *titleLeftApp;
    QLabel *titleLeftDescription;
    QFrame *leftMenuFrame;
    QVBoxLayout *verticalMenuLayout;
    QFrame *toggleBox;
    QVBoxLayout *verticalLayout_4;
    QPushButton *toggleButton;
    QFrame *topMenu;
    QVBoxLayout *verticalLayout_8;
    QPushButton *btn_home;
    QPushButton *btn_widgets;
    QPushButton *btn_new;
    QPushButton *btn_save;
    QPushButton *btn_exit;
    QFrame *bottomMenu;
    QVBoxLayout *verticalLayout_9;
    QPushButton *toggleLeftBox;
    QFrame *extraLeftBox;
    QVBoxLayout *extraColumLayout;
    QFrame *extraTopBg;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *extraTopLayout;
    QFrame *extraIcon;
    QLabel *extraLabel;
    QPushButton *extraCloseColumnBtn;
    QFrame *extraContent;
    QVBoxLayout *verticalLayout_12;
    QFrame *extraTopMenu;
    QVBoxLayout *verticalLayout_11;
    QPushButton *btn_share;
    QPushButton *btn_adjustments;
    QPushButton *btn_more;
    QFrame *extraCenter;
    QVBoxLayout *verticalLayout_10;
    QTextEdit *textEdit;
    QFrame *extraBottom;
    QFrame *contentBox;
    QVBoxLayout *verticalLayout_2;
    QFrame *contentTopBg;
    QHBoxLayout *horizontalLayout;
    QFrame *leftBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *titleRightInfo;
    QFrame *rightButtons;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *settingsTopBtn;
    QPushButton *minimizeAppBtn;
    QPushButton *maximizeRestoreAppBtn;
    QPushButton *closeAppBtn;
    QFrame *contentBottom;
    QVBoxLayout *verticalLayout_6;
    QFrame *content;
    QHBoxLayout *horizontalLayout_4;
    QFrame *pagesContainer;
    QVBoxLayout *verticalLayout_15;
    QStackedWidget *stackedWidget;
    QWidget *home;
    QWidget *widgets;
    QVBoxLayout *verticalLayout;
    QFrame *row_1;
    QVBoxLayout *verticalLayout_16;
    QFrame *frame_div_content_1;
    QVBoxLayout *verticalLayout_17;
    QFrame *frame_title_wid_1;
    QVBoxLayout *verticalLayout_18;
    QLabel *labelBoxBlenderInstalation;
    QFrame *frame_content_wid_1;
    QHBoxLayout *horizontalLayout_9;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *labelVersion_3;
    QFrame *row_2;
    QVBoxLayout *verticalLayout_19;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox;
    QRadioButton *radioButton;
    QSlider *verticalSlider;
    QScrollBar *verticalScrollBar;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_11;
    QPlainTextEdit *plainTextEdit;
    QComboBox *comboBox;
    QScrollBar *horizontalScrollBar;
    QCommandLinkButton *commandLinkButton;
    QSlider *horizontalSlider;
    QFrame *row_3;
    QHBoxLayout *horizontalLayout_12;
    QTableWidget *tableWidget;
    QWidget *new_page;
    QVBoxLayout *verticalLayout_20;
    QLabel *label;
    QFrame *extraRightBox;
    QVBoxLayout *verticalLayout_7;
    QFrame *themeSettingsTopDetail;
    QFrame *contentSettings;
    QVBoxLayout *verticalLayout_13;
    QFrame *topMenus;
    QVBoxLayout *verticalLayout_14;
    QPushButton *btn_message;
    QPushButton *btn_print;
    QPushButton *btn_logout;
    QFrame *bottomBar;
    QHBoxLayout *horizontalLayout_5;
    QLabel *creditsLabel;
    QLabel *version;
    QFrame *frame_size_grip;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        MainWindow->setMinimumSize(QSize(940, 560));
        styleSheet = new QWidget(MainWindow);
        styleSheet->setObjectName(QString::fromUtf8("styleSheet"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        styleSheet->setFont(font);
        styleSheet->setStyleSheet(QString::fromUtf8("/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"\n"
"SET APP STYLESHEET - FULL STYLES HERE\n"
"DARK THEME - DRACULA COLOR BASED\n"
"\n"
"///////////////////////////////////////////////////////////////////////////////////////////////// */\n"
"\n"
"QWidget{\n"
"	color: rgb(221, 221, 221);\n"
"	font: 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"Tooltip */\n"
"QToolTip {\n"
"	color: #ffffff;\n"
"	background-color: rgba(33, 37, 43, 180);\n"
"	border: 1px solid rgb(44, 49, 58);\n"
"	background-image: none;\n"
"	background-position: left center;\n"
"    background-repeat: no-repeat;\n"
"	border: none;\n"
"	border-left: 2px solid rgb(255, 121, 198);\n"
"	text-align: left;\n"
"	padding-left: 8px;\n"
"	margin: 0px;\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"Bg App */\n"
"#bgApp {	\n"
"	background"
                        "-color: rgb(40, 44, 52);\n"
"	border: 1px solid rgb(44, 49, 58);\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"Left Menu */\n"
"#leftMenuBg {	\n"
"	background-color: rgb(33, 37, 43);\n"
"}\n"
"#topLogo {\n"
"	background-color: rgb(33, 37, 43);\n"
"	background-image: url(:/images/images/images/PyDracula.png);\n"
"	background-position: centered;\n"
"	background-repeat: no-repeat;\n"
"}\n"
"#titleLeftApp { font: 63 12pt \"Segoe UI Semibold\"; }\n"
"#titleLeftDescription { font: 8pt \"Segoe UI\"; color: rgb(189, 147, 249); }\n"
"\n"
"/* MENUS */\n"
"#topMenu .QPushButton {	\n"
"	background-position: left center;\n"
"    background-repeat: no-repeat;\n"
"	border: none;\n"
"	border-left: 22px solid transparent;\n"
"	background-color: transparent;\n"
"	text-align: left;\n"
"	padding-left: 44px;\n"
"}\n"
"#topMenu .QPushButton:hover {\n"
"	background-color: rgb(40, 44, 52);\n"
"}\n"
"#topMenu .QPushButton:pressed {	\n"
"	background-color: rgb(18"
                        "9, 147, 249);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"#bottomMenu .QPushButton {	\n"
"	background-position: left center;\n"
"    background-repeat: no-repeat;\n"
"	border: none;\n"
"	border-left: 20px solid transparent;\n"
"	background-color:transparent;\n"
"	text-align: left;\n"
"	padding-left: 44px;\n"
"}\n"
"#bottomMenu .QPushButton:hover {\n"
"	background-color: rgb(40, 44, 52);\n"
"}\n"
"#bottomMenu .QPushButton:pressed {	\n"
"	background-color: rgb(189, 147, 249);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"#leftMenuFrame{\n"
"	border-top: 3px solid rgb(44, 49, 58);\n"
"}\n"
"\n"
"/* Toggle Button */\n"
"#toggleButton {\n"
"	background-position: left center;\n"
"    background-repeat: no-repeat;\n"
"	border: none;\n"
"	border-left: 20px solid transparent;\n"
"	background-color: rgb(37, 41, 48);\n"
"	text-align: left;\n"
"	padding-left: 44px;\n"
"	color: rgb(113, 126, 149);\n"
"}\n"
"#toggleButton:hover {\n"
"	background-color: rgb(40, 44, 52);\n"
"}\n"
"#toggleButton:pressed {\n"
"	background-color: rgb("
                        "189, 147, 249);\n"
"}\n"
"\n"
"/* Title Menu */\n"
"#titleRightInfo { padding-left: 10px; }\n"
"\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"Extra Tab */\n"
"#extraLeftBox {	\n"
"	background-color: rgb(44, 49, 58);\n"
"}\n"
"#extraTopBg{	\n"
"	background-color: rgb(189, 147, 249)\n"
"}\n"
"\n"
"/* Icon */\n"
"#extraIcon {\n"
"	background-position: center;\n"
"	background-repeat: no-repeat;\n"
"	background-image: url(:/icons/images/icons/icon_settings.png);\n"
"}\n"
"\n"
"/* Label */\n"
"#extraLabel { color: rgb(255, 255, 255); }\n"
"\n"
"/* Btn Close */\n"
"#extraCloseColumnBtn { background-color: rgba(255, 255, 255, 0); border: none;  border-radius: 5px; }\n"
"#extraCloseColumnBtn:hover { background-color: rgb(196, 161, 249); border-style: solid; border-radius: 4px; }\n"
"#extraCloseColumnBtn:pressed { background-color: rgb(180, 141, 238); border-style: solid; border-radius: 4px; }\n"
"\n"
"/* Extra Content */\n"
"#extraContent{\n"
"	border"
                        "-top: 3px solid rgb(40, 44, 52);\n"
"}\n"
"\n"
"/* Extra Top Menus */\n"
"#extraTopMenu .QPushButton {\n"
"background-position: left center;\n"
"    background-repeat: no-repeat;\n"
"	border: none;\n"
"	border-left: 22px solid transparent;\n"
"	background-color:transparent;\n"
"	text-align: left;\n"
"	padding-left: 44px;\n"
"}\n"
"#extraTopMenu .QPushButton:hover {\n"
"	background-color: rgb(40, 44, 52);\n"
"}\n"
"#extraTopMenu .QPushButton:pressed {	\n"
"	background-color: rgb(189, 147, 249);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"Content App */\n"
"#contentTopBg{	\n"
"	background-color: rgb(33, 37, 43);\n"
"}\n"
"#contentBottom{\n"
"	border-top: 3px solid rgb(44, 49, 58);\n"
"}\n"
"\n"
"/* Top Buttons */\n"
"#rightButtons .QPushButton { background-color: rgba(255, 255, 255, 0); border: none;  border-radius: 5px; }\n"
"#rightButtons .QPushButton:hover { background-color: rgb(44, 49, 57); border-sty"
                        "le: solid; border-radius: 4px; }\n"
"#rightButtons .QPushButton:pressed { background-color: rgb(23, 26, 30); border-style: solid; border-radius: 4px; }\n"
"\n"
"/* Theme Settings */\n"
"#extraRightBox { background-color: rgb(44, 49, 58); }\n"
"#themeSettingsTopDetail { background-color: rgb(189, 147, 249); }\n"
"\n"
"/* Bottom Bar */\n"
"#bottomBar { background-color: rgb(44, 49, 58); }\n"
"#bottomBar QLabel { font-size: 11px; color: rgb(113, 126, 149); padding-left: 10px; padding-right: 10px; padding-bottom: 2px; }\n"
"\n"
"/* CONTENT SETTINGS */\n"
"/* MENUS */\n"
"#contentSettings .QPushButton {	\n"
"	background-position: left center;\n"
"    background-repeat: no-repeat;\n"
"	border: none;\n"
"	border-left: 22px solid transparent;\n"
"	background-color:transparent;\n"
"	text-align: left;\n"
"	padding-left: 44px;\n"
"}\n"
"#contentSettings .QPushButton:hover {\n"
"	background-color: rgb(40, 44, 52);\n"
"}\n"
"#contentSettings .QPushButton:pressed {	\n"
"	background-color: rgb(189, 147, 249);\n"
"	color: rgb"
                        "(255, 255, 255);\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"QTableWidget */\n"
"QTableWidget {	\n"
"	background-color: transparent;\n"
"	padding: 10px;\n"
"	border-radius: 5px;\n"
"	gridline-color: rgb(44, 49, 58);\n"
"	border-bottom: 1px solid rgb(44, 49, 60);\n"
"}\n"
"QTableWidget::item{\n"
"	border-color: rgb(44, 49, 60);\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	gridline-color: rgb(44, 49, 60);\n"
"}\n"
"QTableWidget::item:selected{\n"
"	background-color: rgb(189, 147, 249);\n"
"}\n"
"QHeaderView::section{\n"
"	background-color: rgb(33, 37, 43);\n"
"	max-width: 30px;\n"
"	border: 1px solid rgb(44, 49, 58);\n"
"	border-style: none;\n"
"    border-bottom: 1px solid rgb(44, 49, 60);\n"
"    border-right: 1px solid rgb(44, 49, 60);\n"
"}\n"
"QTableWidget::horizontalHeader {	\n"
"	background-color: rgb(33, 37, 43);\n"
"}\n"
"QHeaderView::section:horizontal\n"
"{\n"
"    border: 1px solid rgb(33, 37, 43);\n"
"	background-co"
                        "lor: rgb(33, 37, 43);\n"
"	padding: 3px;\n"
"	border-top-left-radius: 7px;\n"
"    border-top-right-radius: 7px;\n"
"}\n"
"QHeaderView::section:vertical\n"
"{\n"
"    border: 1px solid rgb(44, 49, 60);\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"LineEdit */\n"
"QLineEdit {\n"
"	background-color: rgb(33, 37, 43);\n"
"	border-radius: 5px;\n"
"	border: 2px solid rgb(33, 37, 43);\n"
"	padding-left: 10px;\n"
"	selection-color: rgb(255, 255, 255);\n"
"	selection-background-color: rgb(255, 121, 198);\n"
"}\n"
"QLineEdit:hover {\n"
"	border: 2px solid rgb(64, 71, 88);\n"
"}\n"
"QLineEdit:focus {\n"
"	border: 2px solid rgb(91, 101, 124);\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"PlainTextEdit */\n"
"QPlainTextEdit {\n"
"	background-color: rgb(27, 29, 35);\n"
"	border-radius: 5px;\n"
"	padding: 10px;\n"
"	selection-color: rgb(255, 255, 255);\n"
"	selection-background-c"
                        "olor: rgb(255, 121, 198);\n"
"}\n"
"QPlainTextEdit  QScrollBar:vertical {\n"
"    width: 8px;\n"
" }\n"
"QPlainTextEdit  QScrollBar:horizontal {\n"
"    height: 8px;\n"
" }\n"
"QPlainTextEdit:hover {\n"
"	border: 2px solid rgb(64, 71, 88);\n"
"}\n"
"QPlainTextEdit:focus {\n"
"	border: 2px solid rgb(91, 101, 124);\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"ScrollBars */\n"
"QScrollBar:horizontal {\n"
"    border: none;\n"
"    background: rgb(52, 59, 72);\n"
"    height: 8px;\n"
"    margin: 0px 21px 0 21px;\n"
"	border-radius: 0px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"    background: rgb(189, 147, 249);\n"
"    min-width: 25px;\n"
"	border-radius: 4px\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"    border: none;\n"
"    background: rgb(55, 63, 77);\n"
"    width: 20px;\n"
"	border-top-right-radius: 4px;\n"
"    border-bottom-right-radius: 4px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
""
                        "QScrollBar::sub-line:horizontal {\n"
"    border: none;\n"
"    background: rgb(55, 63, 77);\n"
"    width: 20px;\n"
"	border-top-left-radius: 4px;\n"
"    border-bottom-left-radius: 4px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::up-arrow:horizontal, QScrollBar::down-arrow:horizontal\n"
"{\n"
"     background: none;\n"
"}\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"     background: none;\n"
"}\n"
" QScrollBar:vertical {\n"
"	border: none;\n"
"    background: rgb(52, 59, 72);\n"
"    width: 8px;\n"
"    margin: 21px 0 21px 0;\n"
"	border-radius: 0px;\n"
" }\n"
" QScrollBar::handle:vertical {	\n"
"	background: rgb(189, 147, 249);\n"
"    min-height: 25px;\n"
"	border-radius: 4px\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     border: none;\n"
"    background: rgb(55, 63, 77);\n"
"     height: 20px;\n"
"	border-bottom-left-radius: 4px;\n"
"    border-bottom-right-radius: 4px;\n"
"     subcontrol-position: bottom;\n"
"     su"
                        "bcontrol-origin: margin;\n"
" }\n"
" QScrollBar::sub-line:vertical {\n"
"	border: none;\n"
"    background: rgb(55, 63, 77);\n"
"     height: 20px;\n"
"	border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"     subcontrol-position: top;\n"
"     subcontrol-origin: margin;\n"
" }\n"
" QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"     background: none;\n"
" }\n"
"\n"
" QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
" }\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"CheckBox */\n"
"QCheckBox::indicator {\n"
"    border: 3px solid rgb(52, 59, 72);\n"
"	width: 15px;\n"
"	height: 15px;\n"
"	border-radius: 10px;\n"
"    background: rgb(44, 49, 60);\n"
"}\n"
"QCheckBox::indicator:hover {\n"
"    border: 3px solid rgb(58, 66, 81);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"    background: 3px solid rgb(52, 59, 72);\n"
"	border: 3px solid rgb(52, 59, 72);	\n"
"	back"
                        "ground-image: url(:/icons/images/icons/cil-check-alt.png);\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"RadioButton */\n"
"QRadioButton::indicator {\n"
"    border: 3px solid rgb(52, 59, 72);\n"
"	width: 15px;\n"
"	height: 15px;\n"
"	border-radius: 10px;\n"
"    background: rgb(44, 49, 60);\n"
"}\n"
"QRadioButton::indicator:hover {\n"
"    border: 3px solid rgb(58, 66, 81);\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"    background: 3px solid rgb(94, 106, 130);\n"
"	border: 3px solid rgb(52, 59, 72);	\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"ComboBox */\n"
"QComboBox{\n"
"	background-color: rgb(27, 29, 35);\n"
"	border-radius: 5px;\n"
"	border: 2px solid rgb(33, 37, 43);\n"
"	padding: 5px;\n"
"	padding-left: 10px;\n"
"}\n"
"QComboBox:hover{\n"
"	border: 2px solid rgb(64, 71, 88);\n"
"}\n"
"QComboBox::drop-down {\n"
"	subcontrol-origin: padding;\n"
"	subco"
                        "ntrol-position: top right;\n"
"	width: 25px; \n"
"	border-left-width: 3px;\n"
"	border-left-color: rgba(39, 44, 54, 150);\n"
"	border-left-style: solid;\n"
"	border-top-right-radius: 3px;\n"
"	border-bottom-right-radius: 3px;	\n"
"	background-image: url(:/icons/images/icons/cil-arrow-bottom.png);\n"
"	background-position: center;\n"
"	background-repeat: no-reperat;\n"
" }\n"
"QComboBox QAbstractItemView {\n"
"	color: rgb(255, 121, 198);	\n"
"	background-color: rgb(33, 37, 43);\n"
"	padding: 10px;\n"
"	selection-background-color: rgb(39, 44, 54);\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"Sliders */\n"
"QSlider::groove:horizontal {\n"
"    border-radius: 5px;\n"
"    height: 10px;\n"
"	margin: 0px;\n"
"	background-color: rgb(52, 59, 72);\n"
"}\n"
"QSlider::groove:horizontal:hover {\n"
"	background-color: rgb(55, 62, 76);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background-color: rgb(189, 147, 249);\n"
"    border: none;\n"
"    h"
                        "eight: 10px;\n"
"    width: 10px;\n"
"    margin: 0px;\n"
"	border-radius: 5px;\n"
"}\n"
"QSlider::handle:horizontal:hover {\n"
"    background-color: rgb(195, 155, 255);\n"
"}\n"
"QSlider::handle:horizontal:pressed {\n"
"    background-color: rgb(255, 121, 198);\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border-radius: 5px;\n"
"    width: 10px;\n"
"    margin: 0px;\n"
"	background-color: rgb(52, 59, 72);\n"
"}\n"
"QSlider::groove:vertical:hover {\n"
"	background-color: rgb(55, 62, 76);\n"
"}\n"
"QSlider::handle:vertical {\n"
"    background-color: rgb(189, 147, 249);\n"
"	border: none;\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    margin: 0px;\n"
"	border-radius: 5px;\n"
"}\n"
"QSlider::handle:vertical:hover {\n"
"    background-color: rgb(195, 155, 255);\n"
"}\n"
"QSlider::handle:vertical:pressed {\n"
"    background-color: rgb(255, 121, 198);\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"CommandLinkButton */\n"
"QCommandLi"
                        "nkButton {	\n"
"	color: rgb(255, 121, 198);\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"	color: rgb(255, 170, 255);\n"
"}\n"
"QCommandLinkButton:hover {	\n"
"	color: rgb(255, 170, 255);\n"
"	background-color: rgb(44, 49, 60);\n"
"}\n"
"QCommandLinkButton:pressed {	\n"
"	color: rgb(189, 147, 249);\n"
"	background-color: rgb(52, 58, 71);\n"
"}\n"
"\n"
"/* /////////////////////////////////////////////////////////////////////////////////////////////////\n"
"Button */\n"
"#pagesContainer QPushButton {\n"
"	border: 2px solid rgb(52, 59, 72);\n"
"	border-radius: 5px;	\n"
"	background-color: rgb(52, 59, 72);\n"
"}\n"
"#pagesContainer QPushButton:hover {\n"
"	background-color: rgb(57, 65, 80);\n"
"	border: 2px solid rgb(61, 70, 86);\n"
"}\n"
"#pagesContainer QPushButton:pressed {	\n"
"	background-color: rgb(35, 40, 49);\n"
"	border: 2px solid rgb(43, 50, 61);\n"
"}\n"
"\n"
""));
        appMargins = new QVBoxLayout(styleSheet);
        appMargins->setSpacing(0);
        appMargins->setObjectName(QString::fromUtf8("appMargins"));
        appMargins->setContentsMargins(10, 10, 10, 10);
        bgApp = new QFrame(styleSheet);
        bgApp->setObjectName(QString::fromUtf8("bgApp"));
        bgApp->setStyleSheet(QString::fromUtf8(""));
        bgApp->setFrameShape(QFrame::NoFrame);
        bgApp->setFrameShadow(QFrame::Raised);
        appLayout = new QHBoxLayout(bgApp);
        appLayout->setSpacing(0);
        appLayout->setObjectName(QString::fromUtf8("appLayout"));
        appLayout->setContentsMargins(0, 0, 0, 0);
        leftMenuBg = new QFrame(bgApp);
        leftMenuBg->setObjectName(QString::fromUtf8("leftMenuBg"));
        leftMenuBg->setMinimumSize(QSize(60, 0));
        leftMenuBg->setMaximumSize(QSize(60, 16777215));
        leftMenuBg->setFrameShape(QFrame::NoFrame);
        leftMenuBg->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(leftMenuBg);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        topLogoInfo = new QFrame(leftMenuBg);
        topLogoInfo->setObjectName(QString::fromUtf8("topLogoInfo"));
        topLogoInfo->setMinimumSize(QSize(0, 50));
        topLogoInfo->setMaximumSize(QSize(16777215, 50));
        topLogoInfo->setFrameShape(QFrame::NoFrame);
        topLogoInfo->setFrameShadow(QFrame::Raised);
        topLogo = new QFrame(topLogoInfo);
        topLogo->setObjectName(QString::fromUtf8("topLogo"));
        topLogo->setGeometry(QRect(10, 5, 42, 42));
        topLogo->setMinimumSize(QSize(42, 42));
        topLogo->setMaximumSize(QSize(42, 42));
        topLogo->setFrameShape(QFrame::NoFrame);
        topLogo->setFrameShadow(QFrame::Raised);
        titleLeftApp = new QLabel(topLogoInfo);
        titleLeftApp->setObjectName(QString::fromUtf8("titleLeftApp"));
        titleLeftApp->setGeometry(QRect(70, 8, 160, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(7);
        titleLeftApp->setFont(font1);
        titleLeftApp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        titleLeftDescription = new QLabel(topLogoInfo);
        titleLeftDescription->setObjectName(QString::fromUtf8("titleLeftDescription"));
        titleLeftDescription->setGeometry(QRect(70, 27, 160, 16));
        titleLeftDescription->setMaximumSize(QSize(16777215, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        titleLeftDescription->setFont(font2);
        titleLeftDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3->addWidget(topLogoInfo);

        leftMenuFrame = new QFrame(leftMenuBg);
        leftMenuFrame->setObjectName(QString::fromUtf8("leftMenuFrame"));
        leftMenuFrame->setFrameShape(QFrame::NoFrame);
        leftMenuFrame->setFrameShadow(QFrame::Raised);
        verticalMenuLayout = new QVBoxLayout(leftMenuFrame);
        verticalMenuLayout->setSpacing(0);
        verticalMenuLayout->setObjectName(QString::fromUtf8("verticalMenuLayout"));
        verticalMenuLayout->setContentsMargins(0, 0, 0, 0);
        toggleBox = new QFrame(leftMenuFrame);
        toggleBox->setObjectName(QString::fromUtf8("toggleBox"));
        toggleBox->setMaximumSize(QSize(16777215, 45));
        toggleBox->setFrameShape(QFrame::NoFrame);
        toggleBox->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(toggleBox);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        toggleButton = new QPushButton(toggleBox);
        toggleButton->setObjectName(QString::fromUtf8("toggleButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toggleButton->sizePolicy().hasHeightForWidth());
        toggleButton->setSizePolicy(sizePolicy);
        toggleButton->setMinimumSize(QSize(0, 45));
        toggleButton->setFont(font);
        toggleButton->setCursor(QCursor(Qt::PointingHandCursor));
        toggleButton->setLayoutDirection(Qt::LeftToRight);
        toggleButton->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/icon_menu.png);"));

        verticalLayout_4->addWidget(toggleButton);


        verticalMenuLayout->addWidget(toggleBox);

        topMenu = new QFrame(leftMenuFrame);
        topMenu->setObjectName(QString::fromUtf8("topMenu"));
        topMenu->setFrameShape(QFrame::NoFrame);
        topMenu->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(topMenu);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        btn_home = new QPushButton(topMenu);
        btn_home->setObjectName(QString::fromUtf8("btn_home"));
        sizePolicy.setHeightForWidth(btn_home->sizePolicy().hasHeightForWidth());
        btn_home->setSizePolicy(sizePolicy);
        btn_home->setMinimumSize(QSize(0, 45));
        btn_home->setFont(font);
        btn_home->setCursor(QCursor(Qt::PointingHandCursor));
        btn_home->setLayoutDirection(Qt::LeftToRight);
        btn_home->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-home.png);"));
        btn_home->setCheckable(true);

        verticalLayout_8->addWidget(btn_home);

        btn_widgets = new QPushButton(topMenu);
        btn_widgets->setObjectName(QString::fromUtf8("btn_widgets"));
        sizePolicy.setHeightForWidth(btn_widgets->sizePolicy().hasHeightForWidth());
        btn_widgets->setSizePolicy(sizePolicy);
        btn_widgets->setMinimumSize(QSize(0, 45));
        btn_widgets->setFont(font);
        btn_widgets->setCursor(QCursor(Qt::PointingHandCursor));
        btn_widgets->setLayoutDirection(Qt::LeftToRight);
        btn_widgets->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-gamepad.png);"));
        btn_widgets->setCheckable(true);

        verticalLayout_8->addWidget(btn_widgets);

        btn_new = new QPushButton(topMenu);
        btn_new->setObjectName(QString::fromUtf8("btn_new"));
        sizePolicy.setHeightForWidth(btn_new->sizePolicy().hasHeightForWidth());
        btn_new->setSizePolicy(sizePolicy);
        btn_new->setMinimumSize(QSize(0, 45));
        btn_new->setFont(font);
        btn_new->setCursor(QCursor(Qt::PointingHandCursor));
        btn_new->setLayoutDirection(Qt::LeftToRight);
        btn_new->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-file.png);"));
        btn_new->setCheckable(true);

        verticalLayout_8->addWidget(btn_new);

        btn_save = new QPushButton(topMenu);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        sizePolicy.setHeightForWidth(btn_save->sizePolicy().hasHeightForWidth());
        btn_save->setSizePolicy(sizePolicy);
        btn_save->setMinimumSize(QSize(0, 45));
        btn_save->setFont(font);
        btn_save->setCursor(QCursor(Qt::PointingHandCursor));
        btn_save->setLayoutDirection(Qt::LeftToRight);
        btn_save->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-save.png)"));
        btn_save->setCheckable(true);

        verticalLayout_8->addWidget(btn_save);

        btn_exit = new QPushButton(topMenu);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        sizePolicy.setHeightForWidth(btn_exit->sizePolicy().hasHeightForWidth());
        btn_exit->setSizePolicy(sizePolicy);
        btn_exit->setMinimumSize(QSize(0, 45));
        btn_exit->setFont(font);
        btn_exit->setCursor(QCursor(Qt::PointingHandCursor));
        btn_exit->setLayoutDirection(Qt::LeftToRight);
        btn_exit->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-x.png);"));

        verticalLayout_8->addWidget(btn_exit);


        verticalMenuLayout->addWidget(topMenu, 0, Qt::AlignTop);

        bottomMenu = new QFrame(leftMenuFrame);
        bottomMenu->setObjectName(QString::fromUtf8("bottomMenu"));
        bottomMenu->setFrameShape(QFrame::NoFrame);
        bottomMenu->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(bottomMenu);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        toggleLeftBox = new QPushButton(bottomMenu);
        toggleLeftBox->setObjectName(QString::fromUtf8("toggleLeftBox"));
        sizePolicy.setHeightForWidth(toggleLeftBox->sizePolicy().hasHeightForWidth());
        toggleLeftBox->setSizePolicy(sizePolicy);
        toggleLeftBox->setMinimumSize(QSize(0, 45));
        toggleLeftBox->setFont(font);
        toggleLeftBox->setCursor(QCursor(Qt::PointingHandCursor));
        toggleLeftBox->setLayoutDirection(Qt::LeftToRight);
        toggleLeftBox->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/icon_settings.png);"));

        verticalLayout_9->addWidget(toggleLeftBox);


        verticalMenuLayout->addWidget(bottomMenu, 0, Qt::AlignBottom);


        verticalLayout_3->addWidget(leftMenuFrame);


        appLayout->addWidget(leftMenuBg);

        extraLeftBox = new QFrame(bgApp);
        extraLeftBox->setObjectName(QString::fromUtf8("extraLeftBox"));
        extraLeftBox->setMinimumSize(QSize(0, 0));
        extraLeftBox->setMaximumSize(QSize(0, 16777215));
        extraLeftBox->setFrameShape(QFrame::NoFrame);
        extraLeftBox->setFrameShadow(QFrame::Raised);
        extraColumLayout = new QVBoxLayout(extraLeftBox);
        extraColumLayout->setSpacing(0);
        extraColumLayout->setObjectName(QString::fromUtf8("extraColumLayout"));
        extraColumLayout->setContentsMargins(0, 0, 0, 0);
        extraTopBg = new QFrame(extraLeftBox);
        extraTopBg->setObjectName(QString::fromUtf8("extraTopBg"));
        extraTopBg->setMinimumSize(QSize(0, 50));
        extraTopBg->setMaximumSize(QSize(16777215, 50));
        extraTopBg->setFrameShape(QFrame::NoFrame);
        extraTopBg->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(extraTopBg);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        extraTopLayout = new QGridLayout();
        extraTopLayout->setObjectName(QString::fromUtf8("extraTopLayout"));
        extraTopLayout->setHorizontalSpacing(10);
        extraTopLayout->setVerticalSpacing(0);
        extraTopLayout->setContentsMargins(10, -1, 10, -1);
        extraIcon = new QFrame(extraTopBg);
        extraIcon->setObjectName(QString::fromUtf8("extraIcon"));
        extraIcon->setMinimumSize(QSize(20, 0));
        extraIcon->setMaximumSize(QSize(20, 20));
        extraIcon->setFrameShape(QFrame::NoFrame);
        extraIcon->setFrameShadow(QFrame::Raised);

        extraTopLayout->addWidget(extraIcon, 0, 0, 1, 1);

        extraLabel = new QLabel(extraTopBg);
        extraLabel->setObjectName(QString::fromUtf8("extraLabel"));
        extraLabel->setMinimumSize(QSize(150, 0));

        extraTopLayout->addWidget(extraLabel, 0, 1, 1, 1);

        extraCloseColumnBtn = new QPushButton(extraTopBg);
        extraCloseColumnBtn->setObjectName(QString::fromUtf8("extraCloseColumnBtn"));
        extraCloseColumnBtn->setMinimumSize(QSize(28, 28));
        extraCloseColumnBtn->setMaximumSize(QSize(28, 28));
        extraCloseColumnBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/icons/icon_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        extraCloseColumnBtn->setIcon(icon);
        extraCloseColumnBtn->setIconSize(QSize(20, 20));

        extraTopLayout->addWidget(extraCloseColumnBtn, 0, 2, 1, 1);


        verticalLayout_5->addLayout(extraTopLayout);


        extraColumLayout->addWidget(extraTopBg);

        extraContent = new QFrame(extraLeftBox);
        extraContent->setObjectName(QString::fromUtf8("extraContent"));
        extraContent->setFrameShape(QFrame::NoFrame);
        extraContent->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(extraContent);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        extraTopMenu = new QFrame(extraContent);
        extraTopMenu->setObjectName(QString::fromUtf8("extraTopMenu"));
        extraTopMenu->setFrameShape(QFrame::NoFrame);
        extraTopMenu->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(extraTopMenu);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        btn_share = new QPushButton(extraTopMenu);
        btn_share->setObjectName(QString::fromUtf8("btn_share"));
        sizePolicy.setHeightForWidth(btn_share->sizePolicy().hasHeightForWidth());
        btn_share->setSizePolicy(sizePolicy);
        btn_share->setMinimumSize(QSize(0, 45));
        btn_share->setFont(font);
        btn_share->setCursor(QCursor(Qt::PointingHandCursor));
        btn_share->setLayoutDirection(Qt::LeftToRight);
        btn_share->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-share-boxed.png);"));

        verticalLayout_11->addWidget(btn_share);

        btn_adjustments = new QPushButton(extraTopMenu);
        btn_adjustments->setObjectName(QString::fromUtf8("btn_adjustments"));
        sizePolicy.setHeightForWidth(btn_adjustments->sizePolicy().hasHeightForWidth());
        btn_adjustments->setSizePolicy(sizePolicy);
        btn_adjustments->setMinimumSize(QSize(0, 45));
        btn_adjustments->setFont(font);
        btn_adjustments->setCursor(QCursor(Qt::PointingHandCursor));
        btn_adjustments->setLayoutDirection(Qt::LeftToRight);
        btn_adjustments->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-equalizer.png);"));

        verticalLayout_11->addWidget(btn_adjustments);

        btn_more = new QPushButton(extraTopMenu);
        btn_more->setObjectName(QString::fromUtf8("btn_more"));
        sizePolicy.setHeightForWidth(btn_more->sizePolicy().hasHeightForWidth());
        btn_more->setSizePolicy(sizePolicy);
        btn_more->setMinimumSize(QSize(0, 45));
        btn_more->setFont(font);
        btn_more->setCursor(QCursor(Qt::PointingHandCursor));
        btn_more->setLayoutDirection(Qt::LeftToRight);
        btn_more->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-layers.png);"));

        verticalLayout_11->addWidget(btn_more);


        verticalLayout_12->addWidget(extraTopMenu, 0, Qt::AlignTop);

        extraCenter = new QFrame(extraContent);
        extraCenter->setObjectName(QString::fromUtf8("extraCenter"));
        extraCenter->setFrameShape(QFrame::NoFrame);
        extraCenter->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(extraCenter);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        textEdit = new QTextEdit(extraCenter);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(222, 0));
        textEdit->setStyleSheet(QString::fromUtf8("background: transparent;"));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setReadOnly(true);

        verticalLayout_10->addWidget(textEdit);


        verticalLayout_12->addWidget(extraCenter);

        extraBottom = new QFrame(extraContent);
        extraBottom->setObjectName(QString::fromUtf8("extraBottom"));
        extraBottom->setFrameShape(QFrame::NoFrame);
        extraBottom->setFrameShadow(QFrame::Raised);

        verticalLayout_12->addWidget(extraBottom);


        extraColumLayout->addWidget(extraContent);


        appLayout->addWidget(extraLeftBox);

        contentBox = new QFrame(bgApp);
        contentBox->setObjectName(QString::fromUtf8("contentBox"));
        contentBox->setFrameShape(QFrame::NoFrame);
        contentBox->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(contentBox);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        contentTopBg = new QFrame(contentBox);
        contentTopBg->setObjectName(QString::fromUtf8("contentTopBg"));
        contentTopBg->setMinimumSize(QSize(0, 50));
        contentTopBg->setMaximumSize(QSize(16777215, 50));
        contentTopBg->setFrameShape(QFrame::NoFrame);
        contentTopBg->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(contentTopBg);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 10, 0);
        leftBox = new QFrame(contentTopBg);
        leftBox->setObjectName(QString::fromUtf8("leftBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftBox->sizePolicy().hasHeightForWidth());
        leftBox->setSizePolicy(sizePolicy1);
        leftBox->setFrameShape(QFrame::NoFrame);
        leftBox->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(leftBox);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        titleRightInfo = new QLabel(leftBox);
        titleRightInfo->setObjectName(QString::fromUtf8("titleRightInfo"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(titleRightInfo->sizePolicy().hasHeightForWidth());
        titleRightInfo->setSizePolicy(sizePolicy2);
        titleRightInfo->setMaximumSize(QSize(16777215, 45));
        titleRightInfo->setFont(font);
        titleRightInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(titleRightInfo);


        horizontalLayout->addWidget(leftBox);

        rightButtons = new QFrame(contentTopBg);
        rightButtons->setObjectName(QString::fromUtf8("rightButtons"));
        rightButtons->setMinimumSize(QSize(0, 28));
        rightButtons->setFrameShape(QFrame::NoFrame);
        rightButtons->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(rightButtons);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        settingsTopBtn = new QPushButton(rightButtons);
        settingsTopBtn->setObjectName(QString::fromUtf8("settingsTopBtn"));
        settingsTopBtn->setMinimumSize(QSize(28, 28));
        settingsTopBtn->setMaximumSize(QSize(28, 28));
        settingsTopBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/icons/icon_settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingsTopBtn->setIcon(icon1);
        settingsTopBtn->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(settingsTopBtn);

        minimizeAppBtn = new QPushButton(rightButtons);
        minimizeAppBtn->setObjectName(QString::fromUtf8("minimizeAppBtn"));
        minimizeAppBtn->setMinimumSize(QSize(28, 28));
        minimizeAppBtn->setMaximumSize(QSize(28, 28));
        minimizeAppBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/icons/icon_minimize.png"), QSize(), QIcon::Normal, QIcon::Off);
        minimizeAppBtn->setIcon(icon2);
        minimizeAppBtn->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(minimizeAppBtn);

        maximizeRestoreAppBtn = new QPushButton(rightButtons);
        maximizeRestoreAppBtn->setObjectName(QString::fromUtf8("maximizeRestoreAppBtn"));
        maximizeRestoreAppBtn->setMinimumSize(QSize(28, 28));
        maximizeRestoreAppBtn->setMaximumSize(QSize(28, 28));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        font3.setStyleStrategy(QFont::PreferDefault);
        maximizeRestoreAppBtn->setFont(font3);
        maximizeRestoreAppBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/icons/icon_maximize.png"), QSize(), QIcon::Normal, QIcon::Off);
        maximizeRestoreAppBtn->setIcon(icon3);
        maximizeRestoreAppBtn->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(maximizeRestoreAppBtn);

        closeAppBtn = new QPushButton(rightButtons);
        closeAppBtn->setObjectName(QString::fromUtf8("closeAppBtn"));
        closeAppBtn->setMinimumSize(QSize(28, 28));
        closeAppBtn->setMaximumSize(QSize(28, 28));
        closeAppBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeAppBtn->setIcon(icon);
        closeAppBtn->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(closeAppBtn);


        horizontalLayout->addWidget(rightButtons, 0, Qt::AlignRight);


        verticalLayout_2->addWidget(contentTopBg);

        contentBottom = new QFrame(contentBox);
        contentBottom->setObjectName(QString::fromUtf8("contentBottom"));
        contentBottom->setFrameShape(QFrame::NoFrame);
        contentBottom->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(contentBottom);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        content = new QFrame(contentBottom);
        content->setObjectName(QString::fromUtf8("content"));
        content->setFrameShape(QFrame::NoFrame);
        content->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(content);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pagesContainer = new QFrame(content);
        pagesContainer->setObjectName(QString::fromUtf8("pagesContainer"));
        pagesContainer->setStyleSheet(QString::fromUtf8(""));
        pagesContainer->setFrameShape(QFrame::NoFrame);
        pagesContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(pagesContainer);
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(10, 10, 10, 10);
        stackedWidget = new QStackedWidget(pagesContainer);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background: transparent;"));
        home = new QWidget();
        home->setObjectName(QString::fromUtf8("home"));
        home->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/images/PyDracula_vertical.png);\n"
"background-position: center;\n"
"background-repeat: no-repeat;"));
        stackedWidget->addWidget(home);
        widgets = new QWidget();
        widgets->setObjectName(QString::fromUtf8("widgets"));
        widgets->setStyleSheet(QString::fromUtf8("b"));
        verticalLayout = new QVBoxLayout(widgets);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        row_1 = new QFrame(widgets);
        row_1->setObjectName(QString::fromUtf8("row_1"));
        row_1->setFrameShape(QFrame::StyledPanel);
        row_1->setFrameShadow(QFrame::Raised);
        verticalLayout_16 = new QVBoxLayout(row_1);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        frame_div_content_1 = new QFrame(row_1);
        frame_div_content_1->setObjectName(QString::fromUtf8("frame_div_content_1"));
        frame_div_content_1->setMinimumSize(QSize(0, 110));
        frame_div_content_1->setMaximumSize(QSize(16777215, 110));
        frame_div_content_1->setFrameShape(QFrame::NoFrame);
        frame_div_content_1->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(frame_div_content_1);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        frame_title_wid_1 = new QFrame(frame_div_content_1);
        frame_title_wid_1->setObjectName(QString::fromUtf8("frame_title_wid_1"));
        frame_title_wid_1->setMaximumSize(QSize(16777215, 35));
        frame_title_wid_1->setFrameShape(QFrame::StyledPanel);
        frame_title_wid_1->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(frame_title_wid_1);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        labelBoxBlenderInstalation = new QLabel(frame_title_wid_1);
        labelBoxBlenderInstalation->setObjectName(QString::fromUtf8("labelBoxBlenderInstalation"));
        labelBoxBlenderInstalation->setFont(font);
        labelBoxBlenderInstalation->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_18->addWidget(labelBoxBlenderInstalation);


        verticalLayout_17->addWidget(frame_title_wid_1);

        frame_content_wid_1 = new QFrame(frame_div_content_1);
        frame_content_wid_1->setObjectName(QString::fromUtf8("frame_content_wid_1"));
        frame_content_wid_1->setFrameShape(QFrame::NoFrame);
        frame_content_wid_1->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_content_wid_1);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        lineEdit = new QLineEdit(frame_content_wid_1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 37, 43);"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        pushButton = new QPushButton(frame_content_wid_1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(150, 30));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 59, 72);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/images/icons/cil-folder-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        labelVersion_3 = new QLabel(frame_content_wid_1);
        labelVersion_3->setObjectName(QString::fromUtf8("labelVersion_3"));
        labelVersion_3->setStyleSheet(QString::fromUtf8("color: rgb(113, 126, 149);"));
        labelVersion_3->setLineWidth(1);
        labelVersion_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelVersion_3, 1, 0, 1, 2);


        horizontalLayout_9->addLayout(gridLayout);


        verticalLayout_17->addWidget(frame_content_wid_1);


        verticalLayout_16->addWidget(frame_div_content_1);


        verticalLayout->addWidget(row_1);

        row_2 = new QFrame(widgets);
        row_2->setObjectName(QString::fromUtf8("row_2"));
        row_2->setMinimumSize(QSize(0, 150));
        row_2->setFrameShape(QFrame::StyledPanel);
        row_2->setFrameShadow(QFrame::Raised);
        verticalLayout_19 = new QVBoxLayout(row_2);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBox = new QCheckBox(row_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setAutoFillBackground(false);
        checkBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        radioButton = new QRadioButton(row_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(radioButton, 0, 1, 1, 1);

        verticalSlider = new QSlider(row_2);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setStyleSheet(QString::fromUtf8(""));
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider, 0, 2, 3, 1);

        verticalScrollBar = new QScrollBar(row_2);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical { background: rgb(52, 59, 72); }\n"
" QScrollBar:horizontal { background: rgb(52, 59, 72); }"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalScrollBar, 0, 4, 3, 1);

        scrollArea = new QScrollArea(row_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"    background: rgb(52, 59, 72);\n"
" }\n"
" QScrollBar:horizontal {\n"
"    background: rgb(52, 59, 72);\n"
" }"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 218, 218));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"	border: none;\n"
"    background: rgb(52, 59, 72);\n"
"    width: 14px;\n"
"    margin: 21px 0 21px 0;\n"
"	border-radius: 0px;\n"
" }"));
        horizontalLayout_11 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        plainTextEdit = new QPlainTextEdit(scrollAreaWidgetContents);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(200, 200));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 37, 43);"));

        horizontalLayout_11->addWidget(plainTextEdit);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 5, 3, 1);

        comboBox = new QComboBox(row_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 37, 43);"));
        comboBox->setIconSize(QSize(16, 16));
        comboBox->setFrame(true);

        gridLayout_2->addWidget(comboBox, 1, 0, 1, 2);

        horizontalScrollBar = new QScrollBar(row_2);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        sizePolicy.setHeightForWidth(horizontalScrollBar->sizePolicy().hasHeightForWidth());
        horizontalScrollBar->setSizePolicy(sizePolicy);
        horizontalScrollBar->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical { background: rgb(52, 59, 72); }\n"
" QScrollBar:horizontal { background: rgb(52, 59, 72); }"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalScrollBar, 1, 3, 1, 1);

        commandLinkButton = new QCommandLinkButton(row_2);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setCursor(QCursor(Qt::PointingHandCursor));
        commandLinkButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/images/icons/cil-link.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon5);

        gridLayout_2->addWidget(commandLinkButton, 1, 6, 1, 1);

        horizontalSlider = new QSlider(row_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 2, 0, 1, 2);


        verticalLayout_19->addLayout(gridLayout_2);


        verticalLayout->addWidget(row_2);

        row_3 = new QFrame(widgets);
        row_3->setObjectName(QString::fromUtf8("row_3"));
        row_3->setMinimumSize(QSize(0, 150));
        row_3->setFrameShape(QFrame::StyledPanel);
        row_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(row_3);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(row_3);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 16)
            tableWidget->setRowCount(16);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI"));
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font4);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem23);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy3);
        QPalette palette;
        QBrush brush(QColor(221, 221, 221, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        tableWidget->setPalette(palette);
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setStretchLastSection(true);

        horizontalLayout_12->addWidget(tableWidget);


        verticalLayout->addWidget(row_3);

        stackedWidget->addWidget(widgets);
        new_page = new QWidget();
        new_page->setObjectName(QString::fromUtf8("new_page"));
        verticalLayout_20 = new QVBoxLayout(new_page);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        label = new QLabel(new_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(label);

        stackedWidget->addWidget(new_page);

        verticalLayout_15->addWidget(stackedWidget);


        horizontalLayout_4->addWidget(pagesContainer);

        extraRightBox = new QFrame(content);
        extraRightBox->setObjectName(QString::fromUtf8("extraRightBox"));
        extraRightBox->setMinimumSize(QSize(0, 0));
        extraRightBox->setMaximumSize(QSize(0, 16777215));
        extraRightBox->setFrameShape(QFrame::NoFrame);
        extraRightBox->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(extraRightBox);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        themeSettingsTopDetail = new QFrame(extraRightBox);
        themeSettingsTopDetail->setObjectName(QString::fromUtf8("themeSettingsTopDetail"));
        themeSettingsTopDetail->setMaximumSize(QSize(16777215, 3));
        themeSettingsTopDetail->setFrameShape(QFrame::NoFrame);
        themeSettingsTopDetail->setFrameShadow(QFrame::Raised);

        verticalLayout_7->addWidget(themeSettingsTopDetail);

        contentSettings = new QFrame(extraRightBox);
        contentSettings->setObjectName(QString::fromUtf8("contentSettings"));
        contentSettings->setFrameShape(QFrame::NoFrame);
        contentSettings->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(contentSettings);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        topMenus = new QFrame(contentSettings);
        topMenus->setObjectName(QString::fromUtf8("topMenus"));
        topMenus->setFrameShape(QFrame::NoFrame);
        topMenus->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(topMenus);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        btn_message = new QPushButton(topMenus);
        btn_message->setObjectName(QString::fromUtf8("btn_message"));
        sizePolicy.setHeightForWidth(btn_message->sizePolicy().hasHeightForWidth());
        btn_message->setSizePolicy(sizePolicy);
        btn_message->setMinimumSize(QSize(0, 45));
        btn_message->setFont(font);
        btn_message->setCursor(QCursor(Qt::PointingHandCursor));
        btn_message->setLayoutDirection(Qt::LeftToRight);
        btn_message->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-envelope-open.png);"));

        verticalLayout_14->addWidget(btn_message);

        btn_print = new QPushButton(topMenus);
        btn_print->setObjectName(QString::fromUtf8("btn_print"));
        sizePolicy.setHeightForWidth(btn_print->sizePolicy().hasHeightForWidth());
        btn_print->setSizePolicy(sizePolicy);
        btn_print->setMinimumSize(QSize(0, 45));
        btn_print->setFont(font);
        btn_print->setCursor(QCursor(Qt::PointingHandCursor));
        btn_print->setLayoutDirection(Qt::LeftToRight);
        btn_print->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-print.png);"));

        verticalLayout_14->addWidget(btn_print);

        btn_logout = new QPushButton(topMenus);
        btn_logout->setObjectName(QString::fromUtf8("btn_logout"));
        sizePolicy.setHeightForWidth(btn_logout->sizePolicy().hasHeightForWidth());
        btn_logout->setSizePolicy(sizePolicy);
        btn_logout->setMinimumSize(QSize(0, 45));
        btn_logout->setFont(font);
        btn_logout->setCursor(QCursor(Qt::PointingHandCursor));
        btn_logout->setLayoutDirection(Qt::LeftToRight);
        btn_logout->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/icons/cil-account-logout.png);"));

        verticalLayout_14->addWidget(btn_logout);


        verticalLayout_13->addWidget(topMenus, 0, Qt::AlignTop);


        verticalLayout_7->addWidget(contentSettings);


        horizontalLayout_4->addWidget(extraRightBox);


        verticalLayout_6->addWidget(content);

        bottomBar = new QFrame(contentBottom);
        bottomBar->setObjectName(QString::fromUtf8("bottomBar"));
        bottomBar->setMinimumSize(QSize(0, 22));
        bottomBar->setMaximumSize(QSize(16777215, 22));
        bottomBar->setFrameShape(QFrame::NoFrame);
        bottomBar->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(bottomBar);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        creditsLabel = new QLabel(bottomBar);
        creditsLabel->setObjectName(QString::fromUtf8("creditsLabel"));
        creditsLabel->setMaximumSize(QSize(16777215, 16));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI"));
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        creditsLabel->setFont(font5);
        creditsLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(creditsLabel);

        version = new QLabel(bottomBar);
        version->setObjectName(QString::fromUtf8("version"));
        version->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(version);

        frame_size_grip = new QFrame(bottomBar);
        frame_size_grip->setObjectName(QString::fromUtf8("frame_size_grip"));
        frame_size_grip->setMinimumSize(QSize(20, 0));
        frame_size_grip->setMaximumSize(QSize(20, 16777215));
        frame_size_grip->setFrameShape(QFrame::NoFrame);
        frame_size_grip->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(frame_size_grip);


        verticalLayout_6->addWidget(bottomBar);


        verticalLayout_2->addWidget(contentBottom);


        appLayout->addWidget(contentBox);


        appMargins->addWidget(bgApp);

        MainWindow->setCentralWidget(styleSheet);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        titleLeftApp->setText(QCoreApplication::translate("MainWindow", "PyDracula", nullptr));
        titleLeftDescription->setText(QCoreApplication::translate("MainWindow", "Modern GUI / Flat Style", nullptr));
        toggleButton->setText(QCoreApplication::translate("MainWindow", "Hide", nullptr));
        btn_home->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        btn_widgets->setText(QCoreApplication::translate("MainWindow", "Widgets", nullptr));
        btn_new->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        btn_save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        btn_exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        toggleLeftBox->setText(QCoreApplication::translate("MainWindow", "Left Box", nullptr));
        extraLabel->setText(QCoreApplication::translate("MainWindow", "Left Box", nullptr));
#if QT_CONFIG(tooltip)
        extraCloseColumnBtn->setToolTip(QCoreApplication::translate("MainWindow", "Close left box", nullptr));
#endif // QT_CONFIG(tooltip)
        extraCloseColumnBtn->setText(QString());
        btn_share->setText(QCoreApplication::translate("MainWindow", "Share", nullptr));
        btn_adjustments->setText(QCoreApplication::translate("MainWindow", "Adjustments", nullptr));
        btn_more->setText(QCoreApplication::translate("MainWindow", "More", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ff79c6;\">PyDracula</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">An interface created using Python and PySide (support for PyQt), and with colors based on the Dracula theme created by Zeno Rocha.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><"
                        "span style=\" color:#ffffff;\">MIT License</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#bd93f9;\">Created by: Wanderson M. Pimenta</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ff79c6;\">Convert UI</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ffffff;\">pyside6-uic main.ui &gt; ui_main.py</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ff79c6;\">Convert QRC</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; "
                        "margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ffffff;\">pyside6-rcc resources.qrc -o resources_rc.py</span></p></body></html>", nullptr));
        titleRightInfo->setText(QCoreApplication::translate("MainWindow", "PyDracula APP - Theme with colors based on Dracula for Python.", nullptr));
#if QT_CONFIG(tooltip)
        settingsTopBtn->setToolTip(QCoreApplication::translate("MainWindow", "Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        settingsTopBtn->setText(QString());
#if QT_CONFIG(tooltip)
        minimizeAppBtn->setToolTip(QCoreApplication::translate("MainWindow", "Minimize", nullptr));
#endif // QT_CONFIG(tooltip)
        minimizeAppBtn->setText(QString());
#if QT_CONFIG(tooltip)
        maximizeRestoreAppBtn->setToolTip(QCoreApplication::translate("MainWindow", "Maximize", nullptr));
#endif // QT_CONFIG(tooltip)
        maximizeRestoreAppBtn->setText(QString());
#if QT_CONFIG(tooltip)
        closeAppBtn->setToolTip(QCoreApplication::translate("MainWindow", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
        closeAppBtn->setText(QString());
        labelBoxBlenderInstalation->setText(QCoreApplication::translate("MainWindow", "FILE BOX", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type here", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        labelVersion_3->setText(QCoreApplication::translate("MainWindow", "Label description", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Test 1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Test 2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Test 3", nullptr));

        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "Link Button", nullptr));
        commandLinkButton->setDescription(QCoreApplication::translate("MainWindow", "Link description", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(0, 0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(0, 1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(0, 2);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Cell", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(0, 3);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("MainWindow", "NEW PAGE TEST", nullptr));
        btn_message->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
        btn_print->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        btn_logout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        creditsLabel->setText(QCoreApplication::translate("MainWindow", "By: Wanderson M. Pimenta", nullptr));
        version->setText(QCoreApplication::translate("MainWindow", "v1.0.3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
