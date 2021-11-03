# IMPORT / GUI AND MODULES AND WIDGETS
# include "modules/header.h" 
# include "widgets/header.h" 

# SET AS GLOBAL WIDGETS
# ///////////////////////////////////////////////////////////////
     
 int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon("icon.ico"))
    MainWindow w;
    w.show();
    return app.exec();
}
