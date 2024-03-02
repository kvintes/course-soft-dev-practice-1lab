#include "wincounter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WinCounter w;
    w.show();
    return a.exec();
}
