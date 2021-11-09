#include "customgrip.h"
#include <QHBoxLayout>
#include <QMouseEvent>

int max(int a,int b){
    return a > b ? a :b;
}

void CustomGrip::resize_top(QMouseEvent *event){
    QPoint delta(event->pos());
    int height = max(parentWidget()->minimumHeight(), parentWidget()->height() - delta.y());
    QRect geo = parentWidget()->geometry();
    geo.setTop(geo.bottom() - height);
    parentWidget()->setGeometry(geo);
    event->accept();
}

void CustomGrip::resize_bottom(QMouseEvent *event){
    QPoint delta=event->pos();
    int height = max(parentWidget()->minimumHeight(), parentWidget()->height() + delta.y());
    parentWidget()->resize(parentWidget()->width(), height);
    event->accept();
}
void CustomGrip::resize_left(QMouseEvent *event){
    QPoint delta(event->pos());
    int width = max(parentWidget()->minimumWidth(), parentWidget()->width() - delta.x());
    QRect geo = parentWidget()->geometry();
    geo.setTop(geo.right() - width);
    parentWidget()->setGeometry(geo);
    event->accept();
}
void CustomGrip::resize_right(QMouseEvent *event){
    QPoint delta(event->pos());
    int width = max(parentWidget()->minimumWidth(), parentWidget()->width() + delta.x());
    parentWidget()->resize(width,parentWidget()->height());
    event->accept();
}

void CustomGrip::resizeEvent(QResizeEvent *event){
        Q_UNUSED(event)
        switch (gripos) {
            case GripPos::top:
                framegrip.setGeometry(0, 0, width(), 10);
            break;

            case GripPos::bottom:
                framegrip.setGeometry(0, 0, width(), 10);
            break;

            case GripPos::left:
                framegrip.setGeometry(0, 0, 10, height() - 20);
            break;

            case GripPos::right:
                framegrip.setGeometry(0, 0, 10, height() - 20);
        }

}

void CustomGrip::mouseMoveEvent(QMouseEvent *event){
    switch (gripos) {
        case GripPos::top:
            resize_top(event);
        break;

        case GripPos::bottom:
            resize_bottom(event);
        break;

        case GripPos::left:
            resize_left(event);
        break;

        case GripPos::right:
            resize_right(event);
    }
}

void CustomGrip::mouseReleaseEvent(QMouseEvent *event){
    Q_UNUSED(event)
        mousePos = QPoint();
}

CustomGrip::CustomGrip(QWidget *parent, Qt::Edge position, bool disable_color) :
    QWidget(parent),
    framegrip(this)
{
    //setParent(parent);
    setObjectName("Form");

    framegrip.setGeometry(QRect(0, 0, 10, 500));
    framegrip.setMinimumSize(QSize(10, 0));
    framegrip.setFrameShape(QFrame::NoFrame);
    framegrip.setFrameShadow(QFrame::Raised);

    QHBoxLayout framegrip_layout;
    framegrip_layout.setSpacing(0);
    framegrip_layout.setContentsMargins(0, 0, 0, 0);

    QFrame left_frame,right_frame,topbot_frame;

    left_frame.setMinimumSize(QSize(10, 10));
    left_frame.setMaximumSize(QSize(10, 10));
    left_frame.setStyleSheet("background-color: rgb(33, 37, 43);");
    left_frame.setFrameShape(QFrame::NoFrame);
    left_frame.setFrameShadow(QFrame::Raised);

    right_frame.setMinimumSize(QSize(10, 10));
    right_frame.setMaximumSize(QSize(10, 10));
    right_frame.setStyleSheet("background-color: rgb(33, 37, 43);");
    right_frame.setFrameShape(QFrame::NoFrame);
    right_frame.setFrameShadow(QFrame::Raised);

    topbot_frame.setCursor(QCursor(Qt::SizeVerCursor));
    topbot_frame.setFrameShape(QFrame::NoFrame);
    topbot_frame.setFrameShadow(QFrame::Raised);

    // GRIPS
    QSizeGrip gleft_frame(&left_frame);
    QSizeGrip gtop_right(&right_frame);

    switch (position) {
        case Qt::TopEdge:
            framegrip.setObjectName("container_top");
            framegrip.setGeometry(QRect(0, 0, 500, 10));
            framegrip.setMinimumSize(QSize(0, 10));
            framegrip.setMaximumSize(QSize(16777215, 10));

            framegrip.setLayout(&framegrip_layout);
            framegrip_layout.setObjectName("top_layout");

            left_frame.setParent(&framegrip);
            left_frame.setObjectName("top_left");
            left_frame.setCursor(QCursor(Qt::SizeFDiagCursor));
            framegrip_layout.addWidget(&left_frame);

            topbot_frame.setParent(&framegrip);
            topbot_frame.setObjectName("top");
            topbot_frame.setStyleSheet("background-color: rgb(85, 255, 255);");
            framegrip_layout.addWidget(&topbot_frame);

            right_frame.setParent(&framegrip);
            right_frame.setObjectName("top_right");
            right_frame.setCursor(QCursor(Qt::SizeBDiagCursor));
            framegrip_layout.addWidget(&right_frame);

            // ENABLE COLOR
            if (disable_color){
                left_frame.setStyleSheet("background: transparent");
                right_frame.setStyleSheet("background: transparent");
                topbot_frame.setStyleSheet("background: transparent");
            }

            setGeometry(0, 0, parent->width(), 10);
            setMaximumHeight(10);

        break;

        case Qt::BottomEdge:
        framegrip.setObjectName("container_bottom");
        framegrip.setGeometry(QRect(0, 0, 500, 10));
        framegrip.setMinimumSize(QSize(0, 10));
        framegrip.setMaximumSize(QSize(16777215, 10));

        framegrip.setLayout(&framegrip_layout);
        framegrip_layout.setObjectName("bottom_layout");

        left_frame.setParent(&framegrip);
        left_frame.setObjectName("bottom_left");
        left_frame.setCursor(QCursor(Qt::SizeFDiagCursor));
        framegrip_layout.addWidget(&left_frame);

        topbot_frame.setParent(&framegrip);
        topbot_frame.setObjectName("bottom");
        topbot_frame.setStyleSheet("background-color: rgb(85, 255, 255);");
        framegrip_layout.addWidget(&topbot_frame);

        right_frame.setParent(&framegrip);
        right_frame.setObjectName("top_right");
        right_frame.setCursor(QCursor(Qt::SizeBDiagCursor));
        framegrip_layout.addWidget(&right_frame);

        // ENABLE COLOR
        if (disable_color){
            left_frame.setStyleSheet("background: transparent");
            right_frame.setStyleSheet("background: transparent");
            topbot_frame.setStyleSheet("background: transparent");
        }

        setGeometry(0, 0, parent->width(), 10);
        setMaximumHeight(10);
        break;

        case Qt::LeftEdge:
            framegrip.setObjectName("left");
            framegrip.setGeometry(QRect(0, 10, 10, 480));
            framegrip.setCursor(QCursor(Qt::SizeHorCursor));
            framegrip.setStyleSheet("background-color: rgb(255, 121, 198);");
            if (disable_color)
                    framegrip.setStyleSheet("background: transparent");
        break;

        case Qt::RightEdge:
            resize(500, 500);
            framegrip.setObjectName("right");
            framegrip.setCursor(QCursor(Qt::SizeHorCursor));
            framegrip.setStyleSheet("background-color: rgb(255, 0, 127);");
            if (disable_color)
                    framegrip.setStyleSheet("background: transparent");
        break;
    }

}

CustomGrip::~CustomGrip(){

}

