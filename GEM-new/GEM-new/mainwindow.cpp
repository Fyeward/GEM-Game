#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamedlg.h"
#include "gamelogic.h"
#include "namedlg.h"
#include "rankdlg.h"
#include "fstream"
#include "QString"
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player.Grade=0;
    n=new NameDlg(this);
    m=new MenuDlg(this);
    a=new AboutDlg(this);
    g=new GameDlg();

    this->setStyleSheet("background-image: url(D:/GEM-new/GEM-new/picture/bg6.png);");//绝对路径插入背景图

    /*播放背景音乐*/
    backgroundmusic = new QMediaPlayer;
    playlist = new QMediaPlaylist;
    playlist->addMedia(QUrl("D:/GEM-new/GEM-new/music/music1.mp3"));
    playlist->setCurrentIndex(1);
    playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    backgroundmusic->setPlaylist(playlist);
    backgroundmusic->setVolume(30);
    backgroundmusic->play();//背景音乐

    //背景音乐关闭信号
    connect(m,SIGNAL(closemusic3()), this, SLOT(closemusic4()));

    //背景音乐开启信号
    connect(m,SIGNAL(openmusic3()), this, SLOT(openmusic4()));

    //背景音乐更换信号
    connect(m,SIGNAL(changemusic3(QString)), this, SLOT(changemusic4(QString)));

    //音效更换信号
    connect(m,SIGNAL(changesound3(QString)), this, SLOT(changesound4(QString)));

    //背景图片修改信号
    connect(m,SIGNAL(changebg3(QString)), this, SLOT(changebg4(QString)));//背景图片修改

    //打开设置信号
    connect(g,SIGNAL(openset()), this, SLOT(openset1()));

    //宝石图片修改信号
    connect(m,SIGNAL(changeGEM3(int,QString)), this, SLOT(changeGEM4(int,QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    connect(g,SIGNAL(succeeded()),this,SLOT(whenGameSucceeded()));
    g->pparent=this;
    g->init();
    while(g->game->pdRefresh())  g->init();
    g->gameTimerEvent();
    g->show();
    hide();
    //跳转到游戏主界面
}

void MainWindow::on_pushButton_3_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效
    //跳转到排行榜对话框
    r=new RankDlg();
    r->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效
    //跳转到输入姓名对话框
    n->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效
    //跳转到选项对话框
    m->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效
    //跳转到关于开发者和游戏信息的界面
    a->show();
}

void MainWindow::whenGameSucceeded(){
    string name0=n->str.toStdString();
    int grade=g->game->scores;
    cout<<name0<<","<<grade<<endl;

    ofstream outfile;
    outfile.open("D:/GEM-new/GEM-new/record.txt",ios::app);
    outfile<<name0<<" "<<grade<<endl;
    outfile.close();
    cout<<"name0"<<endl;
}

//关闭音乐
void MainWindow::closemusic4(){
    backgroundmusic->stop();
    //cout<<"closemusic4 success"<<endl;
}

//开启音乐
void MainWindow::openmusic4(){
    backgroundmusic->play();

}

//改变音效
void MainWindow::changesound4(QString filename){
    g->changesoundname(filename);

}

//改变音乐
void MainWindow::changemusic4(QString filename){

    backgroundmusic->stop();
    QMediaPlaylist *newplaylist = new QMediaPlaylist;
    newplaylist->addMedia(QUrl(filename));
    newplaylist->setCurrentIndex(1);
    newplaylist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    backgroundmusic->setPlaylist(newplaylist);
    backgroundmusic->setVolume(30);
    backgroundmusic->play();//背景音乐

}
//改变背景图片
void MainWindow::changebg4(QString filename){
    g->setStyleSheet("background-image: url("+filename+");");

}
//打开设置
void MainWindow::openset1(){
    m->show();
}

//改变宝石
void MainWindow::changeGEM4(int num,QString filename){

   g->changeurl(num,filename);


}












