#include "mainwindowcalc.h"
#include "ui_mainwindowcalc.h"

MainWindowCalc::MainWindowCalc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowCalc)
{
    ui->setupUi(this);
}

MainWindowCalc::~MainWindowCalc()
{
    delete ui;
}
