#include "customgrip.h"
/*** install event filter on the 4 grips ***/

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
} //ok

void CustomGrip::resize_bottom(QMouseEvent *event){
    QPoint delta=event->pos();
    int height = max(parentWidget()->minimumHeight(), parentWidget()->height() + delta.y());
    parentWidget()->resize(parentWidget()->width(), height);
    event->accept();
} //ok

void CustomGrip::resize_left(QMouseEvent *event){
    QPoint delta=event->pos();
    int width = max(parentWidget()->minimumWidth(), parentWidget()->width() - delta.x());
    QRect geo = parentWidget()->geometry();
    geo.setLeft(geo.right() - width);
    parentWidget()->setGeometry(geo);
    event->accept();
} //ok

void CustomGrip::resize_right(QMouseEvent *event){
    QPoint delta(event->pos());
    int width = max(parentWidget()->minimumWidth(), parentWidget()->width() + delta.x());
    parentWidget()->resize(width,parentWidget()->height());
    //event->accept();
} //ok

void CustomGrip::resizeEvent(QResizeEvent *event){
        Q_UNUSED(event)
        //qDebug()<<"CustomGrip::resizeEvent ";
        QString sender_name= framegrip.objectName();

        if (sender_name=="container_top") {
            framegrip.setGeometry(0, 0, width(), 10);
        }
        else if(sender_name=="container_bottom"){
            framegrip.setGeometry(0, 0, width(), 10);
        }
        else if(sender_name=="left"){
            framegrip.setGeometry(0, 0, 10, height() - 20);
        }
        else if(sender_name=="right"){
            framegrip.setGeometry(0, 0, 10, height() - 20);
        }
        /*
        switch (gripos) {
            case Qt::TopEdge:
                framegrip.setGeometry(0, 0, width(), 10);
            break;

            case Qt::BottomEdge:
                framegrip.setGeometry(0, 0, width(), 10);
            break;

            case Qt::LeftEdge:
                framegrip.setGeometry(0, 0, 10, height() - 20);
            break;

            case Qt::RightEdge:
                framegrip.setGeometry(0, 0, 10, height() - 20);
        }*/
} //ok

/*void CustomGrip::mouseMoveEvent(QMouseEvent *event){
    //qDebug()<<"CustomGrip::mouseMoveEvent "<< gripos;
    switch (gripos) {
        case Qt::TopEdge:
            resize_top(event);
        break;

        case Qt::BottomEdge:
            resize_bottom(event);
        break;

        case Qt::LeftEdge:
            resize_left(event);
        break;

        case Qt::RightEdge:
            resize_right(event);
    }
}*/

void CustomGrip::mouseReleaseEvent(QMouseEvent *event){
    //qDebug()<<"CustomGrip::mouseReleaseEvent "<< gripos;
    Q_UNUSED(event)
    //QCursor::setPos(QPoint());
    mousePos = QPoint();
}

bool CustomGrip::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseMove ){
        QString sender_name = obj->objectName();
        qDebug()<<"eventFilter "<<sender_name;
        QMouseEvent *e=static_cast<QMouseEvent*>(event);
        //qDebug() << "dobleClickMaximizeRestore";
        if (sender_name=="container_top") {
            resize_top(e);
        }
        else if(sender_name=="container_bottom"){
            resize_bottom(e);
        }
        else if(sender_name=="left"){
            resize_left(e);
            qDebug()<<"Resize left";
        }
        else if(sender_name=="right"){
            resize_right(e);
        }
        else{
            return false;
        }

        return true;
    }
    else {
        // pass the event on to the parent class
        return QWidget::eventFilter(obj, event);
    }
}

CustomGrip::CustomGrip(QWidget *parent, Qt::Edge position, bool disable_color) :
    QWidget(parent),
    gripos(position),
    framegrip(this)/*,
    left_frame(&framegrip),right_frame(&framegrip),topbot_frame(&framegrip),
    framegrip_layout()*/
{

    left_frame = nullptr, right_frame= nullptr,topbot_frame= nullptr;
    grip_left = nullptr, grip_right = nullptr;
    framegrip_layout = nullptr;
    setParent(parent);
    setObjectName("Form");

    framegrip.installEventFilter(this);
    framegrip.setGeometry(QRect(0, 0, 10, 500));
    framegrip.setMinimumSize(QSize(10, 0));
    framegrip.setFrameShape(QFrame::NoFrame);
    framegrip.setFrameShadow(QFrame::Raised);

    framegrip_layout= new QHBoxLayout();
    framegrip_layout->setSpacing(0);
    framegrip_layout->setContentsMargins(0, 0, 0, 0);

    //QFrame left_frame,right_frame,topbot_frame;
    /*

    left_frame->setMinimumSize(QSize(10, 10));
    left_frame->setMaximumSize(QSize(10, 10));
    left_frame->setStyleSheet("background-color: rgb(33, 37, 43);");
    left_frame->setFrameShape(QFrame::NoFrame);
    left_frame->setFrameShadow(QFrame::Raised);

    right_frame->setMinimumSize(QSize(10, 10));
    right_frame->setMaximumSize(QSize(10, 10));
    right_frame->setStyleSheet("background-color: rgb(33, 37, 43);");
    right_frame->setFrameShape(QFrame::NoFrame);
    right_frame->setFrameShadow(QFrame::Raised);

    topbot_frame->setCursor(QCursor(Qt::SizeVerCursor));
    topbot_frame->setFrameShape(QFrame::NoFrame);
    topbot_frame->setFrameShadow(QFrame::Raised);

    */
    qDebug()<<"Building "<< position <<" Custom grip";
    switch (position) {
        case Qt::TopEdge:
            framegrip.setObjectName("container_top");
            framegrip.setGeometry(QRect(0, 0, 500, 10));
            framegrip.setMinimumSize(QSize(0, 10));
            framegrip.setMaximumSize(QSize(16777215, 10));

            framegrip.setLayout(framegrip_layout);
            framegrip_layout->setObjectName("top_layout");

            left_frame = new QFrame(&framegrip), right_frame= new QFrame(&framegrip),topbot_frame= new QFrame(&framegrip);
            left_frame->setMinimumSize(QSize(10, 10));
            left_frame->setMaximumSize(QSize(10, 10));
            left_frame->setStyleSheet("background-color: rgb(33, 37, 43);");
            left_frame->setFrameShape(QFrame::NoFrame);
            left_frame->setFrameShadow(QFrame::Raised);

            right_frame->setMinimumSize(QSize(10, 10));
            right_frame->setMaximumSize(QSize(10, 10));
            right_frame->setStyleSheet("background-color: rgb(33, 37, 43);");
            right_frame->setFrameShape(QFrame::NoFrame);
            right_frame->setFrameShadow(QFrame::Raised);

            topbot_frame->setCursor(QCursor(Qt::SizeVerCursor));
            topbot_frame->setFrameShape(QFrame::NoFrame);
            topbot_frame->setFrameShadow(QFrame::Raised);

            left_frame->setParent(&framegrip);
            left_frame->setObjectName("top_left");
            left_frame->setCursor(QCursor(Qt::SizeFDiagCursor));
            framegrip_layout->addWidget(left_frame);

            topbot_frame->setParent(&framegrip);
            topbot_frame->setObjectName("top");
            topbot_frame->setStyleSheet("background-color: rgb(85, 255, 255);");
            framegrip_layout->addWidget(topbot_frame);

            right_frame->setParent(&framegrip);
            right_frame->setObjectName("top_right");
            right_frame->setCursor(QCursor(Qt::SizeBDiagCursor));
            framegrip_layout->addWidget(right_frame);

            // ENABLE COLOR
            if (disable_color){
                left_frame->setStyleSheet("background: transparent");
                right_frame->setStyleSheet("background: transparent");
                topbot_frame->setStyleSheet("background: transparent");
            }

            setGeometry(0, 0, parent->width(), 10);
            setMaximumHeight(10);

            // GRIPS
            grip_left = new QSizeGrip(left_frame);
            grip_right = new QSizeGrip(right_frame);
        break;

        case Qt::BottomEdge:
            framegrip.setObjectName("container_bottom");
            framegrip.setGeometry(QRect(0, 0, 500, 10));
            framegrip.setMinimumSize(QSize(0, 10));
            framegrip.setMaximumSize(QSize(16777215, 10));

            framegrip.setLayout(framegrip_layout);
            framegrip_layout->setObjectName("bottom_layout");

            left_frame = new QFrame(&framegrip), right_frame= new QFrame(&framegrip),topbot_frame= new QFrame(&framegrip);
            left_frame->setMinimumSize(QSize(10, 10));
            left_frame->setMaximumSize(QSize(10, 10));
            left_frame->setStyleSheet("background-color: rgb(33, 37, 43);");
            left_frame->setFrameShape(QFrame::NoFrame);
            left_frame->setFrameShadow(QFrame::Raised);

            right_frame->setMinimumSize(QSize(10, 10));
            right_frame->setMaximumSize(QSize(10, 10));
            right_frame->setStyleSheet("background-color: rgb(33, 37, 43);");
            right_frame->setFrameShape(QFrame::NoFrame);
            right_frame->setFrameShadow(QFrame::Raised);

            topbot_frame->setCursor(QCursor(Qt::SizeVerCursor));
            topbot_frame->setFrameShape(QFrame::NoFrame);
            topbot_frame->setFrameShadow(QFrame::Raised);

            left_frame->setParent(&framegrip);
            left_frame->setObjectName("bottom_left");
            left_frame->setCursor(QCursor(Qt::SizeBDiagCursor));
            framegrip_layout->addWidget(left_frame);

            topbot_frame->setParent(&framegrip);
            topbot_frame->setObjectName("bottom");
            topbot_frame->setStyleSheet("background-color: rgb(85, 255, 255);");
            framegrip_layout->addWidget(topbot_frame);

            right_frame->setParent(&framegrip);
            right_frame->setObjectName("top_right");
            right_frame->setCursor(QCursor(Qt::SizeFDiagCursor));
            framegrip_layout->addWidget(right_frame);

            // ENABLE COLOR
            if (disable_color){
                left_frame->setStyleSheet("background: transparent");
                right_frame->setStyleSheet("background: transparent");
                topbot_frame->setStyleSheet("background: transparent");
            }

            setGeometry(0, parent->height() - 10, parent->width(), 10);
            setMaximumHeight(10);

            // GRIPS
            grip_left = new QSizeGrip(left_frame);
            grip_right = new QSizeGrip(right_frame);
        break;

        case Qt::LeftEdge:
            framegrip.setObjectName("left");
            framegrip.setGeometry(QRect(0, 10, 10, 480));
            framegrip.setMinimumSize(QSize(10, 0));
            framegrip.setCursor(QCursor(Qt::SizeHorCursor));
            framegrip.setStyleSheet("background-color: rgb(255, 121, 198);");
            if (disable_color)
                    framegrip.setStyleSheet("background: transparent");
            setGeometry(0, 10, 10,parent->height());
            setMaximumWidth(10);
        break;

        case Qt::RightEdge:
            //resize(500, 500);
            framegrip.setObjectName("right");
            framegrip.setCursor(QCursor(Qt::SizeHorCursor));
            framegrip.setStyleSheet("background-color: rgb(255, 0, 127);");
            if (disable_color)
                    framegrip.setStyleSheet("background: transparent");
            setGeometry(parent->width() - 10, 10, 10, parent->height());
            setMaximumWidth(10);
        break;
    }

}

CustomGrip::~CustomGrip(){

}

