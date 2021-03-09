#include "namedlg.h"
#include "ui_namedlg.h"

NameDlg::NameDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NameDlg)
{
    ui->setupUi(this);
    ui->lineEdit->setClearButtonEnabled(true);
    this->setStyleSheet("background-image: url(D:/GEM-new/GEM-new/picture/bg4.png);");//绝对路径插入背景图
}

NameDlg::~NameDlg()
{
    delete ui;
}

void NameDlg::on_pushButton_clicked()
{
    str=ui->lineEdit->text();
    close();
}

void NameDlg::on_pushButton_2_clicked()
{
    close();
}
