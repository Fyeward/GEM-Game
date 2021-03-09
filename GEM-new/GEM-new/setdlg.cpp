#include "setdlg.h"
#include "ui_setdlg.h"
#include <QAction>
#include <QMenuBar>
#include "gamelogic.h"
#include "gamedlg.h"
#include "setdlg.h"
#include <QSoundEffect>
#include <QFileDialog>
#include <QDebug>
#include <QMouseEvent>

SetDlg::SetDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetDlg)
{
    ui->setupUi(this);
    this->setStyleSheet("background-image: url(D:/GEM-new/GEM-new/picture/bg6.png);");//绝对路径插入背景图
}

SetDlg::~SetDlg()
{
    delete ui;
}

//打开背景音乐文件夹
void SetDlg::on_pushButton_3_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    QString filename = QFileDialog::getOpenFileName(this,"音乐",".",tr("*.wav *.mp3"));
    QDir *dir=new QDir(filename);
    QStringList filter;
    QList<QFileInfo> *fileInfo=new QList<QFileInfo>(dir->entryInfoList(filter));
    for(int i = 0;i<fileInfo->count(); i++)
    {
        qDebug()<<fileInfo->at(i).filePath();
        qDebug()<<fileInfo->at(i).fileName();
    }

    ui->lineEdit->setText(filename);
}

//打开音效文件夹
void SetDlg::on_pushButton_4_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    QString filename = QFileDialog::getOpenFileName(this,"音效",".",tr("*.wav *.mp3"));
    QDir *dir=new QDir(filename);
    QStringList filter;
    QList<QFileInfo> *fileInfo=new QList<QFileInfo>(dir->entryInfoList(filter));
    for(int i = 0;i<fileInfo->count(); i++)
    {
        qDebug()<<fileInfo->at(i).filePath();
        qDebug()<<fileInfo->at(i).fileName();
    }
    ui->lineEdit_2->setText(filename);
}

//打开背景图片文件夹
void SetDlg::on_pushButton_5_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    QString filename = QFileDialog::getOpenFileName(this,"背景",".",tr("*.bmp *.jpg *.png"));
    QDir *dir=new QDir(filename);
    QStringList filter;
    QList<QFileInfo> *fileInfo=new QList<QFileInfo>(dir->entryInfoList(filter));
    for(int i = 0;i<fileInfo->count(); i++)
    {
        qDebug()<<fileInfo->at(i).filePath();
        qDebug()<<fileInfo->at(i).fileName();
    }
    ui->lineEdit_3->setText(filename);
}

//背景音乐开关
void SetDlg::on_checkBox_stateChanged(int arg1)
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    if(arg1 == Qt::Checked) {// "选中"信号发送
        flag1 = true;
        emit openmusic1();
    }
    else{
        flag1 = false;
        emit closemusic1();
    }
}

//确认按钮
void SetDlg::on_pushButton_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    if(ui->lineEdit->text() != "" && flag1 == true){//修改音乐信号
        emit changemusic1(ui->lineEdit->text());
    }
    if(ui->lineEdit_2->text() != "" && flag2 == true){//修改音效信号
        emit changesound1(ui->lineEdit_2->text());
    }

    if(ui->lineEdit_3->text() != ""){//修改背景图片信号
        emit changebg1(ui->lineEdit_3->text());
    }

    if(ui->lineEdit_4->text() != "" && ui->lineEdit_5->text()!= ""){//修改背景图片信号
        int num = ui->lineEdit_5->text().toInt();
        num--;
        emit changeGEM1(num,ui->lineEdit_4->text());
    }

    this->close();
}

//取消按钮
void SetDlg::on_pushButton_2_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    this->close();
}

void SetDlg::on_radioButton_pressed()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    ui->lineEdit_3->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);
    ui->lineEdit_5->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
}

void SetDlg::on_radioButton_2_pressed()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    ui->lineEdit_3->setEnabled(true);
    ui->lineEdit_4->setEnabled(true);
    ui->lineEdit_5->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
}

//打开宝石图片文件夹
void SetDlg::on_pushButton_6_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    QString filename = QFileDialog::getOpenFileName(this,"宝石",".",tr("*.bmp *.jpg *.png"));
    QDir *dir=new QDir(filename);
    QStringList filter;
    QList<QFileInfo> *fileInfo=new QList<QFileInfo>(dir->entryInfoList(filter));
    for(int i = 0;i<fileInfo->count(); i++)
    {
        qDebug()<<fileInfo->at(i).filePath();
        qDebug()<<fileInfo->at(i).fileName();
    }
    ui->lineEdit_4->setText(filename);
}

void SetDlg::on_checkBox_2_stateChanged(int arg1)
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    if(arg1 == Qt::Checked) {//音效设置开关
        flag2 = true;
        ui->lineEdit_2->setEnabled(true);
        ui->pushButton_4->setEnabled(true);
    }
    else{
        flag2 = false;
        ui->lineEdit_2->setEnabled(false);
        ui->pushButton_4->setEnabled(false);
    }
}
