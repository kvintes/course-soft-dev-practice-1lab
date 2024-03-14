#ifndef WINMANAGEIMAGE_H
#define WINMANAGEIMAGE_H

#include <QMainWindow>



#include "area.h"
class Window : public QWidget
{
protected:
    Area * area; // область отображения рисунка
    QPushButton * btn;
public:
    Window();
};
#endif
