#include "gamelogic.h"
#include <string >
#include <cstring>
//#include <bits/stdc++.h>
#include <QTime>
#include <mainwindow.h>
#include <Global.h>
#include <QTimer>
using namespace std;

//cbq：this transport from gamedlg->gamelogic
GameLogic::GameLogic()
{

   memset(my_map,0,sizeof (my_map));
   for(int i=1;i<=8;i++)
   {
       height[i]=8;
   }

}

void GameLogic::BuildMap()
{
    srand((unsigned)time(NULL));// 生成时间随机种子

    for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++)
        {
            my_map[i][j]=rand()%Gem_Kind+1;
        }

    cout<<-1<<endl;

    while(shuaxinandbujifen())
    {
        cout<<1;
        down();
        fill();
    }
}
int GameLogic::pdxiaochu(point a,point b)
{
    //两个点不相邻
    if(abs(a.x-b.x)+abs(a.y-b.y)>1)    return 0;

    //两个点相邻  判断 是否消除
    swap(my_map[a.y][a.x],my_map[b.y][b.x]);
    if(shuaxin())  return 1;
    else
    {
        swap(my_map[a.y][a.x],my_map[b.y][b.x]);
        return 2;
    }
}
//判断消除
//首先判断两个点是否相邻   如果不相邻  返回0
//两个点相邻 &  交换有效  返回1  并进行消除 加分  操作
//两个点相邻 &  交换无效  返回2

void GameLogic::down()
{
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
        {
         cout<<my_map[i][j]<<" ";
        }
        cout<<endl;
    }
    //对于每一行进行下降处理
    for(int j=1;j<=8;j++)
    {
        int cnt=0;
        for(int i=8;i>=1;i--)
        {
            if(my_map[i][j])
            {
                ++cnt;
                my_map[9-cnt][j]=my_map[i][j];
                if(9-cnt!=i)    my_map[i][j]=0;
            }
        }
        height[j]=cnt;
    }
    cout<<"fenjiexian"<<endl;
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
        {
         cout<<my_map[i][j]<<" ";
        }
        cout<<endl;
    }
}

//处理下降函数
//找到地图中  值为0 的 地方  然后把上面的宝石下降操作

void GameLogic::fill()
{
    srand((unsigned)time(NULL));
    for(int j=1;j<=8;j++)
    {
        for(int i=8-height[j];i>=1;i--)
        {
            my_map[i][j]=rand()%Gem_Kind+1;
        }
    }
}
//找到每行最高的宝石，判断上方是否空缺，空缺则补


bool GameLogic::win_lose()
{
     if(scores<score_std){
         return false;
     }else{
         return true;
     }
}
//判断输赢
//如果在规定时间内 未达到固定分数，则判断为输
//如果在规定时间内 达到固定分数   则判断为赢
//同时  在不断统计分数时更新是否  加入排行榜

void GameLogic::addPoint(int kind)
{
    if(kind == 1){
                scores += 10;
            }
            if(kind == 2){
                scores += 15;
            }
            if(kind == 3){
                scores += 20;
            }
}
//加分函数  对于3消得10分kind=1   4消15分kind=2   5+消20分 kind=3

bool GameLogic::pdRefresh()
{
    int temp[10][10];
    for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++)  temp[i][j]=my_map[i][j];

    int xx[4]={0,0,-1,1};
    int yy[4]={1,-1,0,0};
    for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++)
          for(int k=0;k<4;k++)
          {
              int x=j+xx[k];
              int y=i+yy[k];
              if(x>=1 && y>=1 && x<=8 && y<=8)
              {
                  swap(my_map[i][j],my_map[y][x]);
                  if(shuaxinandbujifen())
                  {
                      for(int i=1;i<=8;i++)
                          for(int j=1;j<=8;j++)  my_map[i][j]=temp[i][j];

                      return false;
                  }
              }
          }
     return true;
}
//如果  全局中没有可以操作的宝石   返回True   重新建图
//如果  全局中有可以操作的宝石   返回False    不需要重新建图


//全图刷新函数并计分
bool GameLogic::shuaxin()
{
    int new_map[10][10];
    memset(new_map,-1,sizeof (new_map));
    // 创建new_map数组  用来记录  哪些点改动    初始状态为-1   更改之后状态为0
    bool pd=false;
    for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++)
        {
            int k=1;
            //进行横消
            while(k+j<=8 && my_map[i][j]==my_map[i][j+k]) k++;

            if(k>=3)
            {
                for(int kk=0;kk<k;kk++)
                {
                    new_map[i][j+kk]=0;
                }
                pd=true;
                addPoint(k-2);
            }
            //进行竖消
            k=1;
            while(k+i<=8 && my_map[i][j]==my_map[i+k][j]) k++;

            if(k>=3)
            {
                for(int kk=0;kk<k;kk++)
                {
                    new_map[i+kk][j]=0;
                }
                pd=true;
                addPoint(k-2);
            }
        }

    for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++)
        {
            if(!new_map[i][j])
                my_map[i][j]=0;
        }
    return pd;
}
//如果  三+连情况  返回 true    并计分
//如果  没有可消情况  返回false  不计分

//全图刷新函数
bool GameLogic::shuaxinandbujifen()
{
   int new_map[10][10];
   memset(new_map,-1,sizeof (new_map));
   // 创建new_map数组  用来记录  哪些点改动    初始状态为-1   更改之后状态为0
   bool pd=false;
   //进行 横消
   for(int i=1;i<=8;i++)
       for(int j=1;j<=8;)
       {
           int k=1;
           while(k+j<=8 && my_map[i][j]==my_map[i][j+k]) k++;

           if(k>=3)
           {
               for(int kk=0;kk<k;kk++)
               {
                   new_map[i][j+kk]=0;
               }
               pd=true;
           }
           j+=k;
       }


    for(int j=1;j<=8;j++)
       for(int i=1;i<=8;)
        {
           //进行竖消
           int k=1;
           while(k+i<=8 && my_map[i][j]==my_map[i+k][j]) k++;

           if(k>=3)
           {
               for(int kk=0;kk<k;kk++)
               {
                   new_map[i+kk][j]=0;
               }
               pd=true;
           }
           i+=k;
       }

   for(int i=1;i<=8;i++)
       for(int j=1;j<=8;j++)
       {
           if(!new_map[i][j])
               my_map[i][j]=0;
       }
   return pd;
}//刷新并且不计分
//如果  三+连情况  返回 true
//如果  没有可消情况  返回false


//cbq:function to swap pause and start in the layer of game logic
void GameLogic::pause(){
    if(ifPause){
        ifPause=false;
    }else{
        ifPause=true;
    }
}
//cbq:tishi
void GameLogic::tishi(point *m,point *n){

    point a,b;
    for(int i=1;i<9;i++){//检测横排可消
        for(int j=1;j<8;j++){
            swap(my_map[i][j],my_map[i][j+1]);
            bool kexiao=check();
            swap(my_map[i][j],my_map[i][j+1]);


            if(kexiao){
                a.x=i;
                a.y=j;
                b.x=i;
                b.y=j+1;
                *m=a;
                *n=b;
                return;
            }
        }
    }

    for(int j=1;j<9;j++){//检测树排可消
        for(int i=1;i<8;i++){
            swap(my_map[i][j],my_map[i][j+1]);
            bool kexiao=check();
            swap(my_map[i][j],my_map[i][j+1]);


            if(kexiao){
                a.x=i;
                a.y=j;
                b.x=i;
                b.y=j+1;
                *m=a;
                *n=b;
                return;
            }
        }
    }
}

bool GameLogic::check(){
    /*for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<my_map[i][j];
        }
        cout<<endl;
    }*/
    for(int i=1;i<9;i++){
        for(int j=1;j<7;j++){
            if(my_map[i][j]==my_map[i][j+1]&&my_map[i][j]==my_map[i][j+2]){
                return true;
            }
        }
    }
    for(int i=1;i<9;i++){
        for(int j=1;j<7;j++){
            if(my_map[j][i]==my_map[j+1][i]&&my_map[j][i]==my_map[j+2][i]){
                return true;
            }
        }
    }
    return false;
}
