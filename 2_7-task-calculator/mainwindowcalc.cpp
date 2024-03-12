#include "mainwindowcalc.h"

Win::Win(QWidget *parent):QWidget(parent) //тело конструктора
// первый параметр родитель
{
    codec = QTextCodec::codecForName("Windows-1251");
    //используем для случая, где стандартная кодировка отличается
    setWindowTitle("Возведение в квадрат");// устанавливаем заголовок окна

    frame = new QFrame(this);
    frame->setFrameShadow(QFrame::Raised); //устанавливает тень вокруг рамки, чтобы создать визуальный эффект поднятости
    frame->setFrameShape(QFrame::Panel); //устанавливает форму рамки как панель

    inputLabel = new QLabel("Введите число:",this);
    inputEdit = new QLineEdit("",this);

    StrValidator *numStrValidator=new StrValidator(inputEdit);
    inputEdit->setValidator(numStrValidator);

    outputLabel = new QLabel("Результат:",this);
    outputEdit = new QLineEdit("",this);
    nextButton = new QPushButton("Следующее",this);
    exitButton = new QPushButton("Выход",this);
    // компоновка приложения выполняется согласно рисунку 2.
    QVBoxLayout *vLayout1 = new QVBoxLayout(frame);
    //задание порядка следования элементов
    vLayout1->addWidget(inputLabel); //передача управления размещением и размерами элементов
    vLayout1->addWidget(inputEdit);
    vLayout1->addWidget(outputLabel);
    vLayout1->addWidget(outputEdit);
    vLayout1->addStretch(); //добавление пружины
    //при растяжении окна объекты остаются на тех же позициях
    QVBoxLayout *vLayout2 = new QVBoxLayout(); //вертикальный менеджер компановки
    vLayout2->addWidget(nextButton);
    vLayout2->addWidget(exitButton);
    vLayout2->addStretch();
    QHBoxLayout *hLayout = new QHBoxLayout(this); //горизонтальный менеджер компановки
    hLayout->addWidget(frame);
    hLayout->addLayout(vLayout2); //добавление компановщика в контейнер другого компоновщика
    begin();
    // connect(exitButton,SIGNAL(clicked(bool)), //связывает сигнал нажатия кнопки exitButton – clicked(bool) с его обработчиком
    //         this,SLOT(close()));
    connect(exitButton, &QPushButton::clicked,
            this, &Win::close);
    connect(nextButton,SIGNAL(clicked(bool)),
            this,SLOT(begin()));
    connect(inputEdit,SIGNAL(returnPressed()),
            this,SLOT(calc()));

}
void Win::begin()
{
    inputEdit->clear(); //очищает текстовое поле inputEdit
    nextButton->setEnabled(false); //кнопка неактивна для нажатия
    nextButton->setDefault(false); //снятие активации при нажатии Enter
    inputEdit->setEnabled(true); //включает возможность редактирования текста
    outputLabel->setVisible(false); //вывод данных скрыт
    outputEdit->setVisible(false);
    outputEdit->setEnabled(false); //отключение редактирования в области вывода
    inputEdit->setFocus(); //делается активным для ввода текста
}
void Win::calc()
{
    bool Ok=true; float r,a;
    QString str=inputEdit->text();
    a=str.toDouble(&Ok); //если преобразование прошло успешно, то Ok==true
    if (Ok)
    {
        r=a*a;
        str.setNum(r); //преобразуем в строку и сохраняем в str
        outputEdit->setText(str);
        inputEdit->setEnabled(false);
        outputLabel->setVisible(true);
        outputEdit->setVisible(true);
        nextButton->setDefault(true);
        nextButton->setEnabled(true);
        nextButton->setFocus();
    }
    else
        if (!str.isEmpty())
        {
            QMessageBox msgBox(QMessageBox::Information, //icon
                               "Возведение в квадрат.", //title
                               "Введено неверное значение.", //text
                               QMessageBox::Ok); //кнопка ok при вызове QMessageBox
            msgBox.exec();
        }
}
