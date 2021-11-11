/********************************************************************************
** Form generated from reading UI file 'splash_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_SCREEN_H
#define UI_SPLASH_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Splashscreen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *container;
    QVBoxLayout *verticalLayout_2;
    QFrame *circle_bg;
    QVBoxLayout *verticalLayout_3;
    QFrame *texts;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *loading;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QLabel *version;
    QFrame *empty;

    void setupUi(QMainWindow *Splashscreen)
    {
        if (Splashscreen->objectName().isEmpty())
            Splashscreen->setObjectName(QString::fromUtf8("Splashscreen"));
        Splashscreen->resize(300, 300);
        Splashscreen->setMinimumSize(QSize(300, 300));
        Splashscreen->setMaximumSize(QSize(300, 300));
        centralwidget = new QWidget(Splashscreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        container = new QFrame(centralwidget);
        container->setObjectName(QString::fromUtf8("container"));
        container->setFrameShape(QFrame::NoFrame);
        container->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(container);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        circle_bg = new QFrame(container);
        circle_bg->setObjectName(QString::fromUtf8("circle_bg"));
        circle_bg->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: #282a36; /* rgb-color(68,71,90)*/\n"
"	color: #f8f8f2;\n"
"	border-radius: 120px;\n"
"}\n"
"font: 9pt \"Ubuntu\";"));
        circle_bg->setFrameShape(QFrame::NoFrame);
        circle_bg->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(circle_bg);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        texts = new QFrame(circle_bg);
        texts->setObjectName(QString::fromUtf8("texts"));
        texts->setMinimumSize(QSize(0, 180));
        texts->setMaximumSize(QSize(16777215, 160));
        texts->setStyleSheet(QString::fromUtf8("background:none;"));
        texts->setFrameShape(QFrame::NoFrame);
        texts->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(texts);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        loading = new QLabel(texts);
        loading->setObjectName(QString::fromUtf8("loading"));
        loading->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(loading, 3, 0, 1, 1);

        label = new QLabel(texts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        frame = new QFrame(texts);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        version = new QLabel(frame);
        version->setObjectName(QString::fromUtf8("version"));
        version->setMinimumSize(QSize(100, 24));
        version->setMaximumSize(QSize(100, 24));
        version->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius: 10px;\n"
"	color : rgb(151,159,200);\n"
"	background-color: rgb(68, 71, 90);\n"
"}"));
        version->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(version, 0, Qt::AlignHCenter);


        gridLayout->addWidget(frame, 2, 0, 1, 1);

        empty = new QFrame(texts);
        empty->setObjectName(QString::fromUtf8("empty"));
        empty->setMinimumSize(QSize(0, 80));
        empty->setFrameShape(QFrame::NoFrame);
        empty->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(empty, 1, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_3->addWidget(texts);


        verticalLayout_2->addWidget(circle_bg);


        verticalLayout->addWidget(container);

        Splashscreen->setCentralWidget(centralwidget);

        retranslateUi(Splashscreen);

        QMetaObject::connectSlotsByName(Splashscreen);
    } // setupUi

    void retranslateUi(QMainWindow *Splashscreen)
    {
        Splashscreen->setWindowTitle(QCoreApplication::translate("Splashscreen", "Loading...", nullptr));
        loading->setText(QCoreApplication::translate("Splashscreen", "loading ...", nullptr));
        label->setText(QCoreApplication::translate("Splashscreen", "PyDracula", nullptr));
        version->setText(QCoreApplication::translate("Splashscreen", "v 1.0.0 Beta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Splashscreen: public Ui_Splashscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_SCREEN_H
