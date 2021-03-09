#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include "Global.h"
#include <ctime>
//#include <bits/stdc++.h>
using namespace std;
class GameLogic
{
public:
    GameLogic();
    int my_map[10][10];//定义地图数组   0表示空  等待更新    其他数字表示宝石类型
    int Time;//记录剩余时间
    bool ifPause;//记录是否暂停
    //整体时间 time_all  在global.h  中  定义
    int scores;//记录当前分数
    int height[10];//记录每一列的现有高度
    point a,b;//提示得到的两个有红框的点的坐标
    bool pdrank;//判断是否排名进入前十名
    void BuildMap();//构建地图数据,更新my_map数组
    void pause();//暂停函数
    void tishi(point *m,point *n);
    bool check();//检测当前有无能够消除的块
    //提示  更新point1，point2；   两点坐标，即并标记红框。

    int pdxiaochu(point a,point b);
    //判断消除
    //首先判断两个点是否相邻   如果不相邻  返回0
    //两个点相邻 &  交换有效  返回1  并进行消除 加分  操作
    //两个点相邻 &  交换无效  返回2

    void down();
    //处理下降函数
    //找到地图中  值为0 的 地方  然后把上面的宝石下降操作

    void fill();
    //找到每行最高的宝石，判断上方是否空缺，空缺则补

    bool win_lose();
    //判断输赢
    //如果在规定时间内 未达到固定分数，则判断为输
    //如果在规定时间内 达到固定分数   则判断为赢
    //同时  在不断统计分数时更新是否  加入排行榜

    void addPoint(int kind);//
    //加分函数  对于3消得10分kind=1   4消15分kind=2   5+消20分 kind=3
    bool pdRefresh();
    //如果  全局中没有可以操作的宝石   返回True   重新建图
    //如果  全局中有可以操作的宝石   返回False    不需要重新建图

    //全图刷新函数并计分
    bool shuaxin();
    //如果  三+连情况  返回 true    并计分
    //如果  没有可消情况  返回false  不计分

    //全图刷新函数
    bool shuaxinandbujifen();//刷新并且不计分
    //如果  三+连情况  返回 true
    //如果  没有可消情况  返回false



    //
    //计时器函数
    void gameTimerEvent();
    void Ttime();
};

#endif // GAMELOGIC_H
