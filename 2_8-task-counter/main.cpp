#include "wincounter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Win win(0);// наследник QWidget
    win.show();
    return app.exec();
}

