#include "musicdlg.h"
#include "ui_musicdlg.h"

MusicDlg::MusicDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MusicDlg)
{
    ui->setupUi(this);
}

MusicDlg::~MusicDlg()
{
    delete ui;
}
