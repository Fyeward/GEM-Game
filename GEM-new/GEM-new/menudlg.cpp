#include "menudlg.h"
#include "ui_menudlg.h"
#include <Global.h>

MenuDlg::MenuDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuDlg)
{
    ui->setupUi(this);
    s=new SetDlg();
    h=new HelpDlg();

    setStyleSheet(
        "QPushButton{"                              //按钮普通样式
            "background-color: rgb(226, 226, 226);" //背景色（也可以设置图片）
            "border-style:outset;"                  //边框样式（inset/outset）
            "border-width:6px;"                     //边框宽度像素
            "border-radius:15px;"                   //边框圆角半径像素
            "border-color:rgba(255,255,255,200);"   //边框颜色
            "font:bold 25px;"                       //字体，字体大小
            "color:rgba(0,0,0);"                    //字体颜色
            "padding:6px;"                          //填衬
        "}"
        "QPushButton:hover{"                        //按钮悬停样式
            "background-color: rgb(190, 190, 190);"
            "color:rgba(0,0,0,200);"
        "}");

    //背景音乐开启信号传递
    connect(s,SIGNAL(closemusic1()), this, SLOT(closemusic2()));

    //背景音乐关闭信号传递
    connect(s,SIGNAL(openmusic1()), this, SLOT(openmusic2()));

    //背景音乐修改信号传递
    connect(s,SIGNAL(changemusic1(QString)), this, SLOT(changemusic2(QString)));

    //音效修改信号传递
    connect(s,SIGNAL(changesound1(QString)), this, SLOT(changesound2(QString)));

    //背景图片修改信号传递
    connect(s,SIGNAL(changebg1(QString)), this, SLOT(changebg2(QString)));

    //宝石图片修改信号传递
    connect(s,SIGNAL(changeGEM1(int,QString)), this, SLOT(changeGEM2(int,QString)));

}

MenuDlg::~MenuDlg()
{
    delete ui;
}

void MenuDlg::on_pushButton_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    s->show();
}

void MenuDlg::on_pushButton_2_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Qtopen\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    h->show();
}
void MenuDlg::closemusic2(){
    emit closemusic3();
}
void MenuDlg::openmusic2(){
    emit openmusic3();
}
void MenuDlg::changemusic2(QString filename){
    emit changemusic3(filename);
}
void MenuDlg::changesound2(QString filename){
    emit changesound3(filename);
}

void MenuDlg::changebg2(QString filename){
    emit changebg3(filename);
}

void MenuDlg::changeGEM2(int num,QString filename){
    emit changeGEM3(num,filename);

}









