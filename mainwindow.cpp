#include "mainwindow.h"

MainWindow::~MainWindow(){
    delete ui;
}

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    settings(),
    ui(new Ui::MainWindow),
    dragPos(),

    animation(new QPropertyAnimation()),
    left_box(new QPropertyAnimation()),
    right_box(new QPropertyAnimation()),
    group(new QParallelAnimationGroup()),

    left_grip(new CustomGrip(this, Qt::LeftEdge, true)),
    right_grip(new CustomGrip(this, Qt::LeftEdge, true)),
    top_grip(new CustomGrip(this, Qt::LeftEdge, true)),
    bottom_grip(new CustomGrip(this, Qt::LeftEdge, true)),
    shadow(this)
{

        qDebug()<<"Window building";

        // SET AS GLOBAL WIDGETS
        ui->setupUi(this);
        qDebug()<<"Window UI setup";
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
        qDebug()<<"Window setting uiDefinitions";

        if (settings.ENABLE_CUSTOM_TITLE_BAR){
            //STANDARD TITLE BAR
            setWindowFlags(Qt::FramelessWindowHint);
            setAttribute(Qt::WA_TranslucentBackground);
            ui->titleRightInfo->installEventFilter(this);

            /*
            left_grip = new CustomGrip(this, Qt::LeftEdge, true);
            right_grip = new CustomGrip(this, Qt::RightEdge, true);
            top_grip = new CustomGrip(this, Qt::TopEdge, true);
            bottom_grip = new CustomGrip(this, Qt::BottomEdge, true);
            */
        }
        else{
                   ui->appMargins->setContentsMargins(0, 0, 0, 0);
                   ui->minimizeAppBtn->hide();
                   ui->maximizeRestoreAppBtn->hide();
                   ui->closeAppBtn->hide();
                   ui->frame_size_grip->hide();
        }
        // DROP SHADOW
        shadow.setBlurRadius(17);
        shadow.setXOffset(0);
        shadow.setYOffset(0);
        shadow.setColor(QColor(0, 0, 0, 150));
        ui->bgApp->setGraphicsEffect(&shadow);

        // RESIZE WINDOW
        sizegrip = new QSizeGrip(ui->frame_size_grip);
        sizegrip->setStyleSheet("width: 20px; height: 20px; margin 0px; padding: 0px;");

        // MINIMIZE
        connect(ui->minimizeAppBtn,&QPushButton::clicked,this,&QMainWindow::showMinimized);

        // MAXIMIZE/RESTORE
        connect(ui->maximizeRestoreAppBtn,&QPushButton::clicked,this,&MainWindow::maximize_restore);

        // CLOSE APPLICATION
        connect(ui->closeAppBtn,&QPushButton::clicked,this,&QMainWindow::close);

        // QTableWidget PARAMETERS
        # ///////////////////////////////////////////////////////////////
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        // BUTTONS CLICK

        // LEFT MENUS

        connect(ui->btn_home,&QPushButton::clicked,[=]{buttonClick(ui->btn_home);});
        connect(ui->btn_widgets,&QPushButton::clicked,[=]{buttonClick(ui->btn_widgets);});
        connect(ui->btn_new,&QPushButton::clicked,[=]{buttonClick(ui->btn_new);});
        connect(ui->btn_save,&QPushButton::clicked,[=]{buttonClick(ui->btn_save);});


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
        left_grip->hide();
        right_grip->hide();
        top_grip->hide();
        bottom_grip->hide();
    }
    else{
        GLOBAL_STATE = false;
        showNormal();
        resize(width()+1, height()+1);
        ui->appMargins->setContentsMargins(10, 10, 10, 10);
        ui->maximizeRestoreAppBtn->setToolTip("Maximize");
        ui->maximizeRestoreAppBtn->setIcon(QIcon(":/icons/images/icons/icon_maximize->png"));
        ui->frame_size_grip->show();
        left_grip->show();
        right_grip->show();
        top_grip->show();
        bottom_grip->show();
    }
}
bool MainWindow::Status(){
    return GLOBAL_STATE;
}
void MainWindow::setStatus(bool status){
    GLOBAL_STATE= status;
}

void MainWindow::openMenu(bool enable){
    if (!enable) return;

    // GET WIDTH
    int width = ui->leftMenuBg->width();
    int maxExtend = settings.MENU_WIDTH;
    int standard = 60;

    // SET MAX WIDTH
    int widthExtended = standard;
    if (width == 60)
        widthExtended = maxExtend;

    // ANIMATION
    delete animation;
    animation = new QPropertyAnimation(ui->leftMenuBg, "minimumWidth");
    animation->setDuration(settings.TIME_ANIMATION);
    animation->setStartValue(width);
    animation->setEndValue(widthExtended);
    animation->setEasingCurve(QEasingCurve::InOutQuart);
    animation->start();

}
void MainWindow::openLeftBox(bool enable){
    if (!enable)
        return;
    // GET WIDTH
    int width = ui->extraLeftBox->width();
    int widthRightBox = ui->extraRightBox->width();
    int maxExtend = settings.LEFT_BOX_WIDTH;
    QString color = settings.BTN_LEFT_BOX_COLOR;
    int standard = 0;

    // GET BTN STYLE
    QString style = ui->toggleLeftBox->styleSheet();

    // SET MAX WIDTH
    if (width == 0){
        int widthExtended = maxExtend;
        // SELECT BTN
        ui->toggleLeftBox->setStyleSheet(style + color);
        if (widthRightBox != 0){
            style = ui->settingsTopBtn->styleSheet();
            ui->settingsTopBtn->setStyleSheet(style.replace(settings.BTN_RIGHT_BOX_COLOR, ""));
        }
    }
    else{
        int widthExtended = standard;
        // RESET BTN
        ui->toggleLeftBox->setStyleSheet(style.replace(color, ""));
    }
    start_box_animation(width, widthRightBox, Direction::left);
}

void MainWindow::openRightBox(bool enable){
    if (!enable)
        return;

    // GET WIDTH
    int width = ui->extraRightBox->width();
    int widthLeftBox = ui->extraLeftBox->width();
    int maxExtend = settings.RIGHT_BOX_WIDTH;
    QString color = settings.BTN_RIGHT_BOX_COLOR;
    int standard = 0;

    // GET BTN STYLE
    QString style = ui->settingsTopBtn->styleSheet();

    // SET MAX WIDTH
    int widthExtended;
    if (width == 0){
        widthExtended = maxExtend;
        // SELECT BTN
        ui->settingsTopBtn->setStyleSheet(style + color);
        if (widthLeftBox != 0){
            style = ui->toggleLeftBox->styleSheet();
            ui->toggleLeftBox->setStyleSheet(style.replace(settings.BTN_LEFT_BOX_COLOR, ""));
        }
    }
    else{
        widthExtended = standard;
        // RESET BTN
        ui->settingsTopBtn->setStyleSheet(style.replace(color, ""));
    }
    start_box_animation(widthLeftBox, width, Direction::right);
}

void MainWindow::start_box_animation(int left_box_width,int right_box_width,Direction direction){
    int right_width = 0;
    int left_width = 0;

    // Check values
    if (left_box_width == 0 && direction == left)
        left_width = 240;
    else
        left_width = 0 ;
    // Check values
    if (right_box_width == 0 and direction == right)
        right_width = 240;
    else
        right_width = 0;

    // ANIMATION LEFT BOX
    delete left_box;
    left_box = new QPropertyAnimation(ui->extraLeftBox, "minimumWidth");
    left_box->setDuration(settings.TIME_ANIMATION);
    left_box->setStartValue(left_box_width);
    left_box->setEndValue(left_width);
    left_box->setEasingCurve(QEasingCurve::InOutQuart);

    // ANIMATION RIGHT BOX
    delete right_box;
    right_box = new QPropertyAnimation(ui->extraRightBox, "minimumWidth");
    right_box->setDuration(settings.TIME_ANIMATION);
    right_box->setStartValue(right_box_width);
    right_box->setEndValue(right_width);
    right_box->setEasingCurve(QEasingCurve::InOutQuart);

    // GROUP ANIMATION
    delete group;
    group = new QParallelAnimationGroup();
    group->addAnimation(left_box);
    group->addAnimation(right_box);
    group->start();
}

QString MainWindow::selectMenu(QString getStyle){
    return getStyle + settings.MENU_SELECTED_STYLESHEET;
}

QString MainWindow::deselectMenu(QString getStyle){
    return getStyle.replace(settings.MENU_SELECTED_STYLESHEET, "");
}

// START SELECTION
void MainWindow::selectStandardMenu(QString widget){
    QList<QPushButton *> widgets = ui->topMenu->findChildren<QPushButton *>(widget);
    for (int i = 0; i < widgets.size(); ++i) {
            widgets[i]->setStyleSheet(selectMenu(widgets[i]->styleSheet()));
    }
}
// RESET SELECTION
void MainWindow::resetStyle(QString widget){
    QList<QPushButton *> widgets = ui->topMenu->findChildren<QPushButton *>(widget);
    for (int i = 0; i < widgets.size(); ++i) {
            widgets[i]->setStyleSheet(deselectMenu(widgets[i]->styleSheet()));
    }
}

void MainWindow::theme(QFile &file,bool useCustomTheme){
    if (!useCustomTheme)
        return;
    if ( !file.exists() )
    {
       qWarning() << "Unable to set dark stylesheet, file not found";
    }
    else
    {
       file.open( QFile::ReadOnly | QFile::Text );
       QTextStream ts( &file );
       ui->styleSheet->setStyleSheet( ts.readAll() );
       qDebug() << "Theme  set";
    }

}

void MainWindow::dobleClickMaximizeRestore(QEvent *event){
    // IF DOUBLE CLICK CHANGE STATUS
    if (event->type() == QEvent::MouseButtonDblClick)
        QTimer::singleShot(250, this,&MainWindow::maximize_restore);
    event->accept();
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->titleRightInfo) {
        if (event->type() == QEvent::MouseButtonDblClick) {
            dobleClickMaximizeRestore(event);
            //qDebug() << "dobleClickMaximizeRestore";
            return true;
        }
        else if (event->type() == QEvent::MouseMove){
            moveWindow(static_cast<QMouseEvent*>(event));
            return true;
        }
        return false;
    }
    else {
        // pass the event on to the parent class
        return QMainWindow::eventFilter(obj, event);
    }
}

void MainWindow::moveWindow(QMouseEvent *event){
    // IF MAXIMIZED CHANGE TO NORMAL
    if (GLOBAL_STATE)
        maximize_restore();

    // MOVE WINDOW
    if (event->buttons() == Qt::LeftButton ){
        move(pos() + event->globalPos() - dragPos);
        dragPos = event->globalPos();
        event->accept();
    }
}

void MainWindow::resize_grips(){
        if (!settings.ENABLE_CUSTOM_TITLE_BAR)
            return;

        left_grip->setGeometry(0, 10, 10, height());
        right_grip->setGeometry(width() - 10, 10, 10, height());
        top_grip->setGeometry(0, 0, width(), 10);
        bottom_grip->setGeometry(0, height() - 10, width(), 10);
}

void MainWindow::buttonClick(QWidget *btn){
        // GET BUTTON CLICKED
        QString btnName = btn->objectName();

        // SHOW HOME PAGE
        if (btnName == "btn_home"){
            ui->stackedWidget->setCurrentWidget(ui->home);
            resetStyle(btnName);
            btn->setStyleSheet(selectMenu(btn->styleSheet()));
        }
        // SHOW WIDGETS PAGE
        else if (btnName == "btn_widgets"){
            ui->stackedWidget->setCurrentWidget(ui->widgets);
            resetStyle(btnName);
            btn->setStyleSheet(selectMenu(btn->styleSheet()));
        }
        // SHOW NEW PAGE
        else if (btnName == "btn_new"){
            ui->stackedWidget->setCurrentWidget(ui->new_page); // # SET PAGE
            resetStyle(btnName); // # RESET ANOTHERS BUTTONS SELECTED
            btn->setStyleSheet(selectMenu(btn->styleSheet())); // # SELECT MENU
        }
        else if (btnName == "btn_save")
            qDebug("Save BTN clicked!");

        //# PRINT BTN NAME
        qDebug()<<"Button"+btnName+"pressed!";

}

void MainWindow::resizeEvent(QResizeEvent *event){
        // Update Size Grips
        Q_UNUSED(event)
        resize_grips();
}

void MainWindow::mousePressEvent(QMouseEvent *event){
    // SET DRAG POS WINDOW
    dragPos = event->globalPos();

    // PRINT MOUSE EVENTS
    if (event->buttons() == Qt::LeftButton)
        qDebug("Mouse click: LEFT CLICK");
    if (event->buttons() == Qt::RightButton)
        qDebug("Mouse click: RIGHT CLICK");
}
