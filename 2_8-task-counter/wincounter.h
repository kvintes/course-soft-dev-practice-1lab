#ifndef WINCOUNTER_H
#define WINCOUNTER_H

#include <QMainWindow>


#include <QLineEdit>
#include <QString>
#include <QWidget>
#include <QTextCodec>
#include <QLabel>
#include <QPushButton>

#include <QHBoxLayout>
#include <QPushButton>

class Counter:public QLineEdit
{
    Q_OBJECT
public:
    Counter(const QString & contents, QWidget *parent=0):
        QLineEdit(contents,parent){
        setReadOnly(true);//не нужно редактирование поля
    }
signals:
    void tick_signal();
public slots:
    void add_one()
    {
        QString str=text();
        int r=str.toInt();
        r++;
        if (r!=0 && r%5 ==0) emit tick_signal();
        str.setNum(r);
        setText(str);
    }
};
class Win: public QWidget
{
    Q_OBJECT
protected:
    QLabel *label1,*label2;
    Counter *edit1,*edit2;
    QPushButton *calcbutton;
    QPushButton *exitbutton;
public:
    Win(QWidget *parent = 0);
};
#endif

