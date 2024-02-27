#include "mainwindowcalc.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowCalc w;
    w.show();
    return a.exec();
}
