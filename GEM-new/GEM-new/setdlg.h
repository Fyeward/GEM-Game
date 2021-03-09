#ifndef SETDLG_H
#define SETDLG_H

#include <QDialog>
#include <QSoundEffect>
namespace Ui {
class SetDlg;
}

class SetDlg : public QDialog
{
    Q_OBJECT

public:
    explicit SetDlg(QWidget *parent = nullptr);
    ~SetDlg();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_radioButton_pressed();

    void on_radioButton_2_pressed();

    void on_pushButton_6_clicked();

    void on_checkBox_2_stateChanged(int arg1);

signals:
    void changeGEM1(int num,QString filename);

    void changebg1(QString filename);

    void openmusic1();

    void closemusic1();

    void changemusic1(QString filename);

    void changesound1(QString filename);
private:
    Ui::SetDlg *ui;
    bool flag1 = true;
    bool flag2 = true;
};

#endif // SETDLG_H
