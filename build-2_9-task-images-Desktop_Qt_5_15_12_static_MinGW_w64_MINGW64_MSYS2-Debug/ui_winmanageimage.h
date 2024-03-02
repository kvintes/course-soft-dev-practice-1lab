/********************************************************************************
** Form generated from reading UI file 'winmanageimage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINMANAGEIMAGE_H
#define UI_WINMANAGEIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_winManageImage
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *winManageImage)
    {
        if (winManageImage->objectName().isEmpty())
            winManageImage->setObjectName(QString::fromUtf8("winManageImage"));
        winManageImage->resize(800, 600);
        centralwidget = new QWidget(winManageImage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        winManageImage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(winManageImage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        winManageImage->setMenuBar(menubar);
        statusbar = new QStatusBar(winManageImage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        winManageImage->setStatusBar(statusbar);

        retranslateUi(winManageImage);

        QMetaObject::connectSlotsByName(winManageImage);
    } // setupUi

    void retranslateUi(QMainWindow *winManageImage)
    {
        winManageImage->setWindowTitle(QCoreApplication::translate("winManageImage", "winManageImage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class winManageImage: public Ui_winManageImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINMANAGEIMAGE_H
