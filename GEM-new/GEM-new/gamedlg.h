#ifndef GAMEDLG_H
#define GAMEDLG_H
#include <QIcon>
#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <gamelogic.h>
#include <QMainWindow>
namespace Ui {
class GameDlg;
}

struct IconButton: QPushButton
{
public :
    IconButton(QWidget *parent=Q_NULLPTR):
        QPushButton(parent),
        x(-1),
        y(-1)
    {

    }
    int x;
    int y;
};

class GameDlg : public QDialog
{
    Q_OBJECT

public:
    explicit GameDlg(QWidget *parent = nullptr);
    ~GameDlg();
    void init();//初始化游戏界面
    void draw();//展示当前界面
    void draw1(int i,int j);
    int now_map[10][10];
    GameLogic *game=new GameLogic();//游戏逻辑类
    QTimer *timer;//定时器
    QMediaPlayer *player;//音效
    QString soundname = "";//音效文件名

    QWidget *shad;//一组游戏暂停与结束菜单shad组件，用于产生成功失败暂停菜单
    QLabel *label;//菜单标题标签
    QPushButton *btn1;//继续游戏
    QPushButton *btn2;//重新开始
    QPushButton *btn3;//主菜单
    QPushButton *btn4;//设置
    QPushButton *btn5;//退出游戏

    QMainWindow *pparent;

    void changesoundname(QString filename);//改变音效文件
    void changeurl(int num, QString filename);//改变宝石图片
    void gameTimerEvent();//游戏时间函数
    void initShadowWidget();
    void showPauseWidget();//产生暂停遮罩窗口，用shad组件
    void showSuccessWidget();//产生游戏成功遮罩窗口，用shad组件
    void showFailureWidget();//产生失败遮罩窗口给，使用shad组件
signals:
    void succeeded();
    void openset();
private slots:

    void on_pushButton_66_clicked();//暂停按钮，时间暂停,并且切换到菜单界面

    void on_pushButton_67_clicked();//提示按钮，提示可以消除的两个宝石

    void onIconButtonPressed();

    void continueGame();//cbq:remove the pause effect of the gamedlg

    void restartGame();

    void backToMainwindow();

    void toSetting();

    void toExitGame();

    void Ttime();
private:
    Ui::GameDlg *ui;

    QString url[7]={"D:/GEM-new/GEM-new/picture/xiaoqv0.png",
                        "D:/GEM-new/GEM-new/picture/fuhua0.png",
                        "D:/GEM-new/GEM-new/picture/jizi0.png",
                        "D:/GEM-new/GEM-new/picture/delisha0.png",
                        "D:/GEM-new/GEM-new/picture/nvwang0.png",
                        "D:/GEM-new/GEM-new/picture/yayi0.png",
                        "D:/GEM-new/GEM-new/picture/kalian0.png"};

    IconButton *imageButton[10][10];//图片button数组

    IconButton *bt,*bt1,*bt2;
};

#endif // GAMEDLG_H
