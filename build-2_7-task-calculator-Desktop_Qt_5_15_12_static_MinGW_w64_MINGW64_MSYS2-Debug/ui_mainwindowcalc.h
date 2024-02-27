/********************************************************************************
** Form generated from reading UI file 'mainwindowcalc.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWCALC_H
#define UI_MAINWINDOWCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowCalc
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowCalc)
    {
        if (MainWindowCalc->objectName().isEmpty())
            MainWindowCalc->setObjectName(QString::fromUtf8("MainWindowCalc"));
        MainWindowCalc->resize(800, 600);
        centralwidget = new QWidget(MainWindowCalc);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindowCalc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowCalc);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindowCalc->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowCalc);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowCalc->setStatusBar(statusbar);

        retranslateUi(MainWindowCalc);

        QMetaObject::connectSlotsByName(MainWindowCalc);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowCalc)
    {
        MainWindowCalc->setWindowTitle(QCoreApplication::translate("MainWindowCalc", "MainWindowCalc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowCalc: public Ui_MainWindowCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWCALC_H
