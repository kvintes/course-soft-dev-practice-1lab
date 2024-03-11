#ifndef MAINWINDOWCALC_H
#define MAINWINDOWCALC_H
/*Для предотвращения повторной компиляции этого файла используется
стандартный прием: в начале стоит проверка существования переменной win_h препроцессора.
Если эта переменная задана, то файл уже был компилирован, если не задана – то переменная
определяется, а файл компилируется
*/
#include <QMainWindow>
#include <QObject>

#include <QFrame>
#include <QTextCodec>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QValidator>

#include <QVBoxLayout>
#include <QMessageBox>
class Win:public QWidget // класс окна
{
    Q_OBJECT // макрос Qt, обеспечивающий корректное создание сигналов и слотов
protected:
    QTextCodec *codec;
    QFrame *frame; // рамка
    QLabel *inputLabel; // метка ввода
    QLineEdit *inputEdit; // строчный редактор ввода
    QLabel *outputLabel; // метка вывода
    QLineEdit *outputEdit; // строчный редактор вывода
    QPushButton *nextButton; // кнопка Следующее
    QPushButton *exitButton; // кнопка Выход
public:
    Win(QWidget *parent = 0); // конструктор
    //первый параметр родитель, по умолчанию 0 - родителя нет
public slots:
    void begin(); // метод начальной настройки интерфейса
    void calc(); // метод реализации вычислений
};
class StrValidator:public QValidator // класс компонента проверки ввода
{
public:
    StrValidator(QObject *parent):QValidator(parent){}
    virtual State validate(QString &str,int &pos) const
    {
        return Acceptable; // метод всегда принимает вводимую строку
    }
};
#endif
