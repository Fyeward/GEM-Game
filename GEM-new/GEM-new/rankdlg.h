#ifndef RANKDLG_H
#define RANKDLG_H

#include <QDialog>
#include <Global.h>

namespace Ui {
class RankDlg;
}

class RankDlg : public QDialog
{
    Q_OBJECT

public:
    explicit RankDlg(QWidget *parent = nullptr);
    ~RankDlg();
    QWidget *widget;
    RankInfor rank[64];
    void init();

private:
    Ui::RankDlg *ui;
};

#endif // RANKDLG_H
