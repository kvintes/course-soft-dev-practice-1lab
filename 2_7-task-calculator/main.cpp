#include "mainwindowcalc.h"// подключаем заголовочный файл, содержащий описание класса Win

#include <QApplication>//класс -> создание, инициализация главного окна,
//запуск цикла обработки сообщений от операционной системы

int main(int argc, char *argv[])
// argc это количество аргументов командной строки, переданных программе при запуске
// argv это массив строк, содержащий сами аргументы командной строки
{
    QApplication app(argc, argv);//создание объекта приложения
    Win win(0); //создание объекта управления окном - наследник класса QWidget
    win.show(); //показать объект win метод из QWidget
    return app.exec(); //запуск цикла обработки сообщений приложения
}
