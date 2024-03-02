#ifndef WINCOUNTER_H
#define WINCOUNTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class WinCounter;
}
QT_END_NAMESPACE

class WinCounter : public QMainWindow
{
    Q_OBJECT

public:
    WinCounter(QWidget *parent = nullptr);
    ~WinCounter();

private:
    Ui::WinCounter *ui;
};
#endif // WINCOUNTER_H
