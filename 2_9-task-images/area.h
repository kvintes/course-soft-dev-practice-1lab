#ifndef area_h
#define area_h
#include "figura.h"

#include <QTimerEvent>
#include <QPaintEvent>
#include <QShowEvent>
#include <QHideEvent>
#include <QWidget>
#include <QPushButton>
#include <QTextCodec>

#include <QSize>
#include <QTextCodec>
#include <QTextCodec>
#include <QTextCodec>

class Area : public QWidget
{
    int myTimer; // идентификатор таймера
    float alpha; // угол поворота
public:
    Area(QWidget *parent = 0);
    ~Area();
    MyLine *myline;
    MyRect *myrect;
protected:
    // обработчики событий
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);
};
#endif
