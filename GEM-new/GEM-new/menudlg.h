#ifndef MENUDLG_H
#define MENUDLG_H

#include <QDialog>
#include <setdlg.h>
#include <helpdlg.h>
namespace Ui {
class MenuDlg;
}

class MenuDlg : public QDialog
{
    Q_OBJECT

public:
    explicit MenuDlg(QWidget *parent = nullptr);
    ~MenuDlg();
    SetDlg *s;
    HelpDlg *h;
private slots:


    /*信号函数*/
    void changeGEM2(int num,QString filename);

    void changebg2(QString filename);

    void openmusic2();

    void closemusic2();

    void changemusic2(QString filename);

    void changesound2(QString filename);
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void changeGEM3(int num,QString filename);

    void changebg3(QString filename);

    void openmusic3();

    void closemusic3();

    void changemusic3(QString filename);

    void changesound3(QString filename);
private:
    Ui::MenuDlg *ui;
};

#endif // MENUDLG_H
