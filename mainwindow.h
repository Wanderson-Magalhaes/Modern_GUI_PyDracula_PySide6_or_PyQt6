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
        QPoint dragPos;

        //UI functions

            //global settings for UI functions
            bool GLOBAL_STATE = false;
            bool GLOBAL_TITLE_BAR = true;
            QPropertyAnimation *animation,*left_box,*right_box;
            QParallelAnimationGroup *group;

             // CUSTOM GRIPS
            CustomGrip *left_grip; //= CustomGrip(this,Qt::LeftEdge, true);
            CustomGrip *right_grip; //= CustomGrip(self, Qt.RightEdge, True)
            CustomGrip *top_grip; //= CustomGrip(self, Qt.TopEdge, True)
            CustomGrip *bottom_grip; //= CustomGrip(self, Qt.BottomEdge, True)
            QSizeGrip *sizegrip;

            QGraphicsDropShadowEffect shadow;

            void maximize_restore();
            bool Status();
            void setStatus(bool state);

            // Animations
            void openMenu(bool enable); //openX <=>toggleX python
            void openLeftBox(bool enable);
            void openRightBox(bool enable);
            void start_box_animation(int left_box_width,int right_box_width,Direction dir);

            //Styling
            QString selectMenu(QString getStyle);
            QString deselectMenu(QString getStyle);
            void selectStandardMenu(QString widget);
            void resetStyle(QString widget);
            void theme(QFile &file,bool useCustomTheme);

            void resize_grips();

            void dobleClickMaximizeRestore(QEvent *event);
            void moveWindow(QMouseEvent *event);

        // MainWindow event handling

    protected :
        bool eventFilter(QObject *obj, QEvent *ev) override;
        void buttonClick(void);
        void resizeEvent(QResizeEvent *event) override;
        void mousePressEvent(QMouseEvent *event) override;
            
};

#endif
