#ifndef SPLASH_SCREEN_H
#define SPLASH_SCREEN_H

#include <QMainWindow>
#include "ui_splash_screen.h"

class Splash_screen : public QMainWindow
{
    Q_OBJECT
public:
    explicit Splash_screen(QWidget *parent = nullptr);

protected:

    Ui::Splashscreen *ui;
};

#endif // SPLASH_SCREEN_H
