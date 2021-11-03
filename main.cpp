#include "modules/header.h" 
#include "widgets/header.h" 
#include "mainwindow.h"
     
 int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon("icon.ico"))
    MainWindow w;
    w.show();
    return app.exec();
}
