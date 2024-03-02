#ifndef WINMANAGEIMAGE_H
#define WINMANAGEIMAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class winManageImage;
}
QT_END_NAMESPACE

class winManageImage : public QMainWindow
{
    Q_OBJECT

public:
    winManageImage(QWidget *parent = nullptr);
    ~winManageImage();

private:
    Ui::winManageImage *ui;
};
#endif // WINMANAGEIMAGE_H
