#include "gamedlg.h"
#include "ui_gamedlg.h"
#include "gamelogic.h"
#include <QIcon>
#include <QPainter>
#include <QPixmap>
#include <QImage>
#include <thread>
#include <synchapi.h>
#include <QTimer>
#include <Global.h>
#include <QPushButton>
#include "mainwindow.h"
#include "setdlg.h"
#include <QTime>
#include <QDateTime>
using namespace std;
int T=0;
GameDlg::GameDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameDlg)
{
    ui->setupUi(this);
    this->setStyleSheet("background-image: url(D:/GEM-new/GEM-new/picture/bg3.jpg);");//绝对路径插入背景图
    ui->pushButton_67->setGeometry(620,430,140,60);

}

const int LeftSize=30;//最左
const int UpSize=30;  //最右

GameDlg::~GameDlg()
{
    delete ui;
}
void delay(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
void GameDlg::init()
{
    //cbq:the argument of game pause and time multiply
    game->ifPause=false;
    T=0;
    game->scores=0;
    this->ui->label_score->setText(QString::number(game->scores));
    this->ui->progressBar_2->setValue(game->scores/5);



     game->BuildMap();

     bt=bt1=bt2=NULL;
     for(int i=1;i<=8;i++)
         for(int j=1;j<=8;j++)
         {
             imageButton[i][j]=new IconButton(this);
             imageButton[i][j]->setGeometry(LeftSize+(j-1)*60,UpSize+(i-1)*60,60,60);

             imageButton[i][j]->x=j;
             imageButton[i][j]->y=i;

             imageButton[i][j]->show();

             QPixmap iconPix;
             QString fileString = url[game->my_map[i][j]];
             iconPix.load(fileString);
             QIcon icon(iconPix);
             imageButton[i][j]->setIcon(icon);
             imageButton[i][j]->setIconSize(QSize(70,70));
             imageButton[i][j]->setStyleSheet("background-color:transparent");

             //添加槽
             connect(imageButton[i][j],SIGNAL(pressed()),this,SLOT(onIconButtonPressed()));

             //初始化遮罩菜单,使其浮在最上层
             initShadowWidget();
         }

}
void GameDlg::draw()
{
    for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++)
        {
            imageButton[i][j]->show();

            QPixmap iconPix;
            QString fileString = url[game->my_map[i][j]];
            iconPix.load(fileString);
            QIcon icon(iconPix);
            imageButton[i][j]->setIcon(icon);
            imageButton[i][j]->setIconSize(QSize(70, 70));
            imageButton[i][j]->setStyleSheet("background-color:transparent");
        }
}
void GameDlg::draw1(int i,int j)
{
      imageButton[i][j]->show();

      QPixmap iconPix;
      QString fileString = url[game->my_map[i][j]];
      iconPix.load(fileString);
      QIcon icon(iconPix);
      imageButton[i][j]->setIcon(icon);
      imageButton[i][j]->setIconSize(QSize(70, 70));
      imageButton[i][j]->setStyleSheet("background-color:transparent");
}

void GameDlg::onIconButtonPressed()
{
    cout<<"fjshfkjh k"<<endl;
    bt=dynamic_cast<IconButton *>(sender());

    //播放点击按钮音乐

    for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++)
        {
            now_map[i][j]=game->my_map[i][j];
        }

    player = new QMediaPlayer;
    if(soundname != ""){
        player->setMedia(QUrl::fromLocalFile(soundname));
    }
    else{
        player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\click1.wav"));
    }
    player->setVolume(50);
    player->play();//按钮音效

    if(bt1==NULL)
    {
        cout<<bt->x<<" "<<bt->y<<" "<<"6.1"<<endl;
        bt1=bt;
    }
    else if(bt2==NULL)
    {

        if(bt!=bt1)   bt2=bt;
        else          return;

        point p1,p2;
        p1.x=bt1->x;
        p1.y=bt1->y;

        p2.x=bt2->x;
        p2.y=bt2->y;

        int xx=game->pdxiaochu(p1,p2);
        cout<<"xx="<<xx<<" "<<bt->x<<" "<<bt->y<<" "<<"6.2"<<endl;
        switch (xx)
        {
        case 0:
            cout<<bt->x<<" "<<bt->y<<" "<<"6.2"<<endl;
            bt1=bt2;
            bt2=NULL;
            break;
        case 1:
            // 交换成功
            cout<<bt->x<<" "<<bt->y<<" "<<"6.2"<<endl;
            //播放消除成功背景音乐
            player = new QMediaPlayer;
            player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\ok.mp3"));
            player->setVolume(30);
            player->play();//按钮音效


            for(int i=1;i<=8;i++)
                for(int j=1;j<=8;j++)
                {

                    if(now_map[i][j]!=game->my_map[i][j])
                    {
                        draw1(i,j);
                        now_map[i][j]=game->my_map[i][j];
                    }
                }
            //draw();
            delay(100);
            this->ui->label_score->setText(QString::number(game->scores));
            this->ui->progressBar_2->setValue(game->scores/5);

            game->down();
            game->fill();
            for(int i=1;i<=8;i++)
                for(int j=1;j<=8;j++)
                {

                    if(now_map[i][j]!=game->my_map[i][j])
                    {
                        draw1(i,j);
                        now_map[i][j]=game->my_map[i][j];
                    }
                }
            //draw();
            delay(100);


            while(game->shuaxin())
            {
                player = new QMediaPlayer;
                player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\ok.mp3"));
                player->setVolume(30);
                player->play();//按钮音效

                for(int i=1;i<=8;i++)
                    for(int j=1;j<=8;j++)
                    {

                        if(now_map[i][j]!=game->my_map[i][j])
                        {
                            draw1(i,j);
                            now_map[i][j]=game->my_map[i][j];
                        }
                    }

                this->ui->label_score->setText(QString::number(game->scores));
                this->ui->progressBar_2->setValue(game->scores/5);
                //draw();
                delay(100);

                game->down();
                game->fill();
                for(int i=1;i<=8;i++)
                    for(int j=1;j<=8;j++)
                    {

                        if(now_map[i][j]!=game->my_map[i][j])
                        {
                            draw1(i,j);
                            now_map[i][j]=game->my_map[i][j];
                        }
                    }
                //draw();
                delay(100);
            }
            bt1=bt2=NULL;
            while(game->pdRefresh()){game->BuildMap();draw();}//判断如果出现不可解的局面就重新构建图
            //事实证明这函数一点用都没有，建议手动重开
            break;

        case 2:
            //交换失败
            cout<<bt->x<<" "<<bt->y<<" "<<"6.2"<<endl;

            //交换失败背景音乐
            player = new QMediaPlayer;
            player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\no.mp3"));
            player->setVolume(30);
            player->play();//按钮音效

            bt1=bt2;
            bt2=NULL;
            swap(game->my_map[p1.y][p1.x],game->my_map[p2.y][p2.x]);
            draw1(p1.y,p1.x);
            draw1(p2.y,p2.x);

            cout<<"1s"<<endl;
            cout<<QTime::currentTime().second()<<":"<<QTime::currentTime().msec()<<endl;
            //draw();
            delay(100);

            cout<<"2s"<<endl;
            cout<<QTime::currentTime().second()<<":"<<QTime::currentTime().msec()<<endl;
            swap(game->my_map[p1.y][p1.x],game->my_map[p2.y][p2.x]);
            draw1(p1.y,p1.x);
            draw1(p2.y,p2.x);
            //draw();
            delay(100);
            break;
        }
    }
}




void GameDlg::gameTimerEvent(){
       timer = new QTimer();//定时器
       cout<<"gameTime!!!!!!!!!!!!!!!!!!"<<endl;
       T=0;
       //设置1秒刷新一次
       timer->start(1000);
       //连接控制进度条函数
       connect(timer,SIGNAL(timeout()),this,SLOT(Ttime()));

}
void GameDlg::Ttime()
{
       cout<<"Time??????????????????????????"<<endl;
       if(!game->ifPause){
           ui->progressBar->setValue(T);//50秒T*2
           T++;
           if(T >= time_std){
               timer->stop();
               if(game->scores >= score_std){
                   //输出游戏胜利
                   showSuccessWidget();
               }
               else {
                   //输出游戏失败
                   showFailureWidget();
               }
           }
       }

}

void GameDlg::initShadowWidget(){

    shad=new QWidget(this);
    label=new QLabel(shad);
    btn1=new QPushButton(shad);
    btn2=new QPushButton(shad);
    btn3=new QPushButton(shad);
    btn4=new QPushButton(shad);
    btn5=new QPushButton(shad);
    QString str("QWidget{background-color:rgba(255,255,255,0.6);}");
    shad->setStyleSheet(str);

    shad->setGeometry(0,0,900,600);


    btn1->setText(QString("继续游戏"));
    btn2->setText(QString("重新开始"));
    btn3->setText(QString("主菜单"));
    btn4->setText(QString("设置游戏"));
    btn5->setText(QString("退出游戏"));

    label->setStyleSheet("QLabel{border-width:6px;border-style:outset;border-radius:15px;border-color:rgba(255,255,255,200);color:rgba(250,250,250);font:bold 25px;}");
    btn1->setStyleSheet("QPushButton{border-width:6px;border-style:outset;border-radius:15px;border-color:rgba(255,255,255,200);color:rgba(250,250,250);font:bold 25px;}");
    btn2->setStyleSheet("QPushButton{border-width:6px;border-style:outset;border-radius:15px;border-color:rgba(255,255,255,200);color:rgba(250,250,250);font:bold 25px;}");
    btn3->setStyleSheet("QPushButton{border-width:6px;border-style:outset;border-radius:15px;border-color:rgba(255,255,255,200);color:rgba(250,250,250);font:bold 25px;}");
    btn4->setStyleSheet("QPushButton{border-width:6px;border-style:outset;border-radius:15px;border-color:rgba(255,255,255,200);color:rgba(250,250,250);font:bold 25px;}");
    btn5->setStyleSheet("QPushButton{border-width:6px;border-style:outset;border-radius:15px;border-color:rgba(255,255,255,200);color:rgba(250,250,250);font:bold 25px;}");

    label->setGeometry(350,100,200,40);
    btn1->setGeometry(350,150,200,40);
    btn2->setGeometry(350,210,200,40);
    btn3->setGeometry(350,270,200,40);
    btn4->setGeometry(350,330,200,40);
    btn5->setGeometry(350,390,200,40);

    connect(btn1,SIGNAL(clicked()),this,SLOT(continueGame()));
    connect(btn2,SIGNAL(clicked()),this,SLOT(restartGame()));
    connect(btn3,SIGNAL(clicked()),this,SLOT(backToMainwindow()));
    connect(btn4,SIGNAL(clicked()),this,SLOT(toSetting()));
    connect(btn5,SIGNAL(clicked()),this,SLOT(toExitGame()));
    shad->hide();

}
void GameDlg::showPauseWidget(){

    shad->show();
    //使用遮罩
}

void GameDlg::showFailureWidget(){
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\fail.mp3"));
    player->setVolume(30);
    player->play();//失败音效
    cout<<"111111"<<endl;

    label->setText(QString("游戏结束"));
    label->setAlignment(Qt::AlignHCenter);
    QString str("QPushButton{border-width:6px;border-style:outset;border-radius:15px;border-color:rgba(255,255,255,200);color:rgba(250,250,250);font:bold 25px;}");
    btn1->setStyleSheet(str);
    btn1->setEnabled(false);

    shad->show();
}

void GameDlg::showSuccessWidget(){

    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\success.mp3"));
    player->setVolume(30);
    player->play();//成功音效

    label->setText(QString("恭喜过关"));
    label->setAlignment(Qt::AlignHCenter);
    cout<<game->scores<<endl;
    //info.Grade=game->scores;
    succeeded();

    QString str("QPushButton{border-width:6px;border-style:outset;border-radius:15px;border-color:rgba(255,255,255,200);color:rgba(250,250,250);font:bold 25px;}");
    btn1->setStyleSheet(str);
    btn1->setEnabled(false);
    shad->show();
}

void GameDlg::continueGame(){
   game->pause();
   shad->hide();
}

void GameDlg::restartGame(){
    shad->close();
    init();
    timer->stop();
    gameTimerEvent();
}

void GameDlg::toSetting(){
    emit openset();

}

void GameDlg::toExitGame(){
    exit(0);
}

void GameDlg::backToMainwindow(){
    timer->stop();
    this->pparent->show();
    shad->close();
    this->close();
}

//cbq:press the button to pause the game
void GameDlg::on_pushButton_66_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    game->pause();
    showPauseWidget();
}

void GameDlg::on_pushButton_67_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    player->setMedia(QUrl::fromLocalFile("D:\\GEM-new\\GEM-new\\music\\click1.wav"));
    player->setVolume(30);
    player->play();//按钮音效

    point a,b;
    game->tishi(&a,&b);
    cout<<a.x<<"."<<a.y<<"."<<b.x<<"."<<b.y<<endl;


    if(a.x!=0){
        imageButton[a.x][a.y]->setIconSize(QSize(50,50));//这东西改成换图标，改变图标大小没办法在下一次刷新改回来
        imageButton[b.x][b.y]->setIconSize(QSize(50,50));
    }else{
        cout<<"无可行组合"<<endl;
        //这里做个提示失败的音效，表示全图没有可消得了，让玩家自己重开游戏。最好在主界面加一个重开按钮
    }

}
void GameDlg::changeurl(int num, QString filename){//改变宝石图片
    url[num] = filename;
}

void GameDlg::changesoundname(QString filename){//改变音效文件
    soundname = filename;
}













