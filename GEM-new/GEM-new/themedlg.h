#ifndef THEMEDLG_H
#define THEMEDLG_H

#include <QDialog>

namespace Ui {
class ThemeDlg;
}

class ThemeDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ThemeDlg(QWidget *parent = nullptr);
    ~ThemeDlg();

private:
    Ui::ThemeDlg *ui;
};

#endif // THEMEDLG_H
