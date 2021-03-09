#include "aboutdlg.h"
#include "ui_aboutdlg.h"

AboutDlg::AboutDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDlg)
{
    ui->setupUi(this);
    this->setStyleSheet("background-image: url(D:/GEM-new/GEM-new/picture/bg4.png);");//绝对路径插入背景图
}

AboutDlg::~AboutDlg()
{
    delete ui;
}
