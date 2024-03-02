#include "winmanageimage.h"
#include "ui_winmanageimage.h"

winManageImage::winManageImage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::winManageImage)
{
    ui->setupUi(this);
}

winManageImage::~winManageImage()
{
    delete ui;
}
