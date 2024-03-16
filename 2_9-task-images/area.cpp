#include "area.h"
Area::Area(QWidget *parent):QWidget(parent)
{
    setFixedSize(QSize(300,200));//ширина высота
    myline=new MyLine(80,100,50);//наследник Figura(int X,int Y,int Halflen)
    myrect=new MyRect(220,100,50);
    alpha=0;
}
void Area::showEvent(QShowEvent *)//при создании окна showevent
{
    myTimer=startTimer(50); // создать таймер
    //Qt::CoarseTimer
    //Грубые таймеры стараются поддерживать точность в пределах 5 % от желаемого интервала.
    //int QObject::startTimer(int interval, Qt::TimerType timerType = Qt::CoarseTimer)
    //interval - количество миллисекунд
    //Событие таймера будет происходить каждыеinterval

}
void Area::paintEvent(QPaintEvent *)//перерисовать окно
{
    QPainter painter(this);//рисование будет происходить на текущем виджете
    painter.setPen(Qt::red);//Устанавливает перо художника на заданное значениеstyle, ширина 1 и черный цвет.
    myline->move(alpha, &painter);//Figura::move -> draw-virtual
    myrect->move(alpha*(-0.5), &painter);
}
void Area::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == myTimer) // если наш таймер
    {
        alpha=alpha+0.2;
        update(); // обновить внешний вид
    }
    else
        QWidget::timerEvent(event); // иначе передать для стандартной обработки
}
void Area::hideEvent(QHideEvent *)
{
    killTimer(myTimer); // уничтожить таймер
}
Area::~Area()
{
    delete myline;
    delete myrect;
}
