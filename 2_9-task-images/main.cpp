#include "winmanageimage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    winManageImage w;
    w.show();
    return a.exec();
}
