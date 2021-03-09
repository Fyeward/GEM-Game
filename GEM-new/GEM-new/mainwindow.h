#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//主界面   有开始游戏的按钮
#include <QMainWindow>
#include <gamedlg.h>
#include <namedlg.h>
#include <rankdlg.h>
#include <menudlg.h>
#include <aboutdlg.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    RankInfor player;
    RankInfor records[15];
    GameDlg *g;
    RankDlg *r;
    NameDlg *n;
    MenuDlg *m;
    AboutDlg *a;
    QMediaPlayer *backgroundmusic;
    QMediaPlaylist *playlist;

private slots:
    void on_pushButton_clicked();//连接开始游戏界面

    void on_pushButton_3_clicked();//连接姓名对话框

    void on_pushButton_2_clicked();//连接排行榜

    void on_pushButton_4_clicked();//连接帮助界面

    void on_pushButton_5_clicked();//连接关于界面

    void whenGameSucceeded();//当游戏胜利时记录

    void closemusic4();

    void openmusic4();

    void changemusic4(QString filename);

    void changesound4(QString filename);

    void changebg4(QString filename);

    void openset1();

    void changeGEM4(int num,QString filename);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
