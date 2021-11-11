#include <QMainWindow>
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include <QEvent>
#include <QFile>

#include "ui_main.h"
#include "modules/settings.h"
#include "widgets/custom_grips/customgrip.h"

class MainWindow: public QMainWindow
{
    Q_OBJECT
    enum Direction{
        left,
        right
    };
  
    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
        void setThemeHack();
    
    protected:
        Settings settings;
        Ui::MainWindow *ui;

        //UI functions

            //global settings for UI functions
            bool GLOBAL_STATE = false;
            bool GLOBAL_TITLE_BAR = true;

             // CUSTOM GRIPS
                CustomGrip left_grip; //= CustomGrip(this,Qt::LeftEdge, true);
                CustomGrip right_grip; //= CustomGrip(self, Qt.RightEdge, True)
                CustomGrip top_grip; //= CustomGrip(self, Qt.TopEdge, True)
                CustomGrip bottom_grip; //= CustomGrip(self, Qt.BottomEdge, True)

            void maximize_restore();
            bool returStatus();
            void setStatus(bool state);

            void openMenu(bool enable); //openX <=>toggleX python
            void openLeftBox(bool enable);
            void openRightBox(bool enable);

            void start_box_animation(int left_box_width,int right_box_width,Direction dir);
            QString selectMenu(QString getStyle);
            QString deselectMenu(QString getStyle);
            void selectStandardMenu(QWidget *widget);
            void resetStyle(QWidget *widget);
            void theme(QFile &file,bool useCustomTheme);

            void resize_grips();

            void dobleClickMaximizeRestore(QEvent *event);
            void moveWindow(QEvent *event);

        // MainWindow event handling
    protected slots:
        void buttonClick(void);
        void resizeEvent(QResizeEvent *event);
        void mousePressEvent(QMouseEvent *event);
            
};

#endif
