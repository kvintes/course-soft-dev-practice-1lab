#ifndef MAINWINDOWCALC_H
#define MAINWINDOWCALC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindowCalc;
}
QT_END_NAMESPACE

class MainWindowCalc : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowCalc(QWidget *parent = nullptr);
    ~MainWindowCalc();

private:
    Ui::MainWindowCalc *ui;
};
#endif // MAINWINDOWCALC_H
