#ifndef CUSTOMGRIP_H
#define CUSTOMGRIP_H

#include <QWidget>
#include <QSizeGrip>
#include <QFrame>
#include <QHBoxLayout>
#include <QMouseEvent>
#include <QDebug>

class CustomGrip : public QWidget
{
    Q_OBJECT

public:
    CustomGrip(QWidget *parent = nullptr, Qt::Edge position=Qt::TopEdge, bool disable_color = true);
    ~CustomGrip();

protected:

    Qt::Edge gripos;
    QPoint mousePos;
    QFrame framegrip;
    QFrame *left_frame,*right_frame,*topbot_frame;
    QHBoxLayout *framegrip_layout;
    QSizeGrip *grip_left, *grip_right;

    void resize_top(QMouseEvent *event);
    void resize_bottom(QMouseEvent *event);
    void resize_left(QMouseEvent *event);
    void resize_right(QMouseEvent *event);

    bool eventFilter(QObject *obj, QEvent *ev) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    //void mouseMoveEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

};
/*
class Grip : public QWidget
{
    Q_OBJECT

public:
    Grip(QWidget *parent = nullptr, Qt::Edge position=Qt::TopEdge, bool disable_color = true);
    ~Grip();

protected:

    Qt::Edge gripos;
    QPoint mousePos;
    QFrame framegrip;
    QFrame left_frame,right_frame,topbot_frame;
    QHBoxLayout framegrip_layout;

    void resize_top(QMouseEvent *event);
    void resize_bottom(QMouseEvent *event);
    void resize_left(QMouseEvent *event);
    void resize_right(QMouseEvent *event);

    bool eventFilter(QObject *obj, QEvent *ev) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    //void mouseMoveEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

};

*/
#endif // CUSTOMGRIP_H
