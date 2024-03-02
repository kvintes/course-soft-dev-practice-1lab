/********************************************************************************
** Form generated from reading UI file 'wincounter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINCOUNTER_H
#define UI_WINCOUNTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinCounter
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WinCounter)
    {
        if (WinCounter->objectName().isEmpty())
            WinCounter->setObjectName(QString::fromUtf8("WinCounter"));
        WinCounter->resize(800, 600);
        centralwidget = new QWidget(WinCounter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        WinCounter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WinCounter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        WinCounter->setMenuBar(menubar);
        statusbar = new QStatusBar(WinCounter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WinCounter->setStatusBar(statusbar);

        retranslateUi(WinCounter);

        QMetaObject::connectSlotsByName(WinCounter);
    } // setupUi

    void retranslateUi(QMainWindow *WinCounter)
    {
        WinCounter->setWindowTitle(QCoreApplication::translate("WinCounter", "WinCounter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinCounter: public Ui_WinCounter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINCOUNTER_H
