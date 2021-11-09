#ifndef CUSTOMGRIP_H
#define CUSTOMGRIP_H

#include <QWidget>
#include <QSizeGrip>
#include <QFrame>

class CustomGrip : public QWidget
{
    Q_OBJECT

public:
    CustomGrip(QWidget *parent = nullptr, Qt::Edge position=Qt::TopEdge, bool disable_color = false);
    ~CustomGrip();

protected:
    enum GripPos{
        top,
        bottom,
        left,
        right
    };

    GripPos gripos;
    QPoint mousePos;
    QFrame framegrip;

    void resize_top(QMouseEvent *event);
    void resize_bottom(QMouseEvent *event);
    void resize_left(QMouseEvent *event);
    void resize_right(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void resizeEvent(QResizeEvent *event);

};


#endif // CUSTOMGRIP_H
