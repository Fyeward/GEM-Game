#include "themedlg.h"
#include "ui_themedlg.h"

ThemeDlg::ThemeDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThemeDlg)
{
    ui->setupUi(this);
}

ThemeDlg::~ThemeDlg()
{
    delete ui;
}
