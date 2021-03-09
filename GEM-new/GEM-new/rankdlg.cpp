#include "rankdlg.h"
#include "ui_rankdlg.h"
#include "fstream"
#include "string.h"
#include "sstream"

RankDlg::RankDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RankDlg)
{
    ui->setupUi(this);
    init();
    this->setStyleSheet("background-image: url(D:/GEM-new/GEM-new/picture/bg4.png);");//绝对路径插入背景图
}

RankDlg::~RankDlg()
{
    delete ui;
}

void RankDlg::init(){

    ifstream infile;
    infile.open("D:/GEM-new/GEM-new/record.txt");
    for(int i=0;i<16;i++){

        //infile>>rank[i].namec;
        infile>>rank[i].name;
        infile>>rank[i].Grade;
        if(infile.eof())break;
        cout<<rank[i].name<<endl;
        cout<<rank[i].Grade<<endl;
    }

    infile.close();
    RankInfor swap;
    for(int i=1;i<=16;i++){
        for(int j=0;j<16-i;j++){
            if(rank[j+1].Grade>rank[j].Grade){
                swap=rank[j];
                rank[j]=rank[j+1];
                rank[j+1]=swap;
            }
        }
    }
    cout<<rank[0].name<<endl;

    ui->textBrowser->append(QString("姓名   排行   分数"));
    string str;
    for(int i=0;i<10;i++){

        if(rank[i].name!=""){
            str=rank[i].name;
            stringstream ss;
            ss<<"   "<<i+1<<"   "<<rank[i].Grade;
            str+=ss.str();
            ui->textBrowser->append(QString::fromStdString(str));
            cout<<str<<endl;
        }
    }
    cout<<"end"<<endl;
}
