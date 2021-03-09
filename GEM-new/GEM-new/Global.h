#ifndef GLOBAL_H
#define GLOBAL_H
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <QString>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QSound>

using std::string;

static const int time_std=10; //设定总时间为100s
static const int score_std=5;//设定达标时间为500分
static const int Gem_Kind=6;//设定宝石种类数为6
struct PICELEM
{
    int nRow;//行号
    int nCol;//列号
    int nPicnum;//图片编号
};
struct RankInfor
{
    string name;//存储玩家姓名
    int  Grade=0;//玩家得分
};
struct point
{
     int x;
     int y;
};

using namespace std;


#endif // GLOBAL_H
