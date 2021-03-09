#ifndef NAMEDLG_H
#define NAMEDLG_H

#include <QDialog>
#include <Global.h>
namespace Ui {
class NameDlg;
}

class NameDlg : public QDialog
{
    Q_OBJECT

public:
    explicit NameDlg(QWidget *parent = nullptr);
    ~NameDlg();

    QString str=QString("anonymous");

private slots:
    void on_pushButton_clicked();//确定按钮

    void on_pushButton_2_clicked();//取消按钮

private:
    Ui::NameDlg *ui;
};

#endif // NAMEDLG_H
