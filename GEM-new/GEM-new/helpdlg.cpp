#include "helpdlg.h"
#include "ui_helpdlg.h"

HelpDlg::HelpDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpDlg)
{
    ui->setupUi(this);
    this->setStyleSheet("background-image: url(D:/GEM-new/GEM-new/picture/bg4.png);");//绝对路径插入背景图
}

HelpDlg::~HelpDlg()
{
    delete ui;
}
