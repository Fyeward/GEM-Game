#ifndef MUSICDLG_H
#define MUSICDLG_H

#include <QDialog>

namespace Ui {
class MusicDlg;
}

class MusicDlg : public QDialog
{
    Q_OBJECT

public:
    explicit MusicDlg(QWidget *parent = nullptr);
    ~MusicDlg();

private:
    Ui::MusicDlg *ui;
};

#endif // MUSICDLG_H
