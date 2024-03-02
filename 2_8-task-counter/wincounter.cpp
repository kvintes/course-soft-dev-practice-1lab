#include "wincounter.h"
#include "ui_wincounter.h"

WinCounter::WinCounter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WinCounter)
{
    ui->setupUi(this);
}

WinCounter::~WinCounter()
{
    delete ui;
}
