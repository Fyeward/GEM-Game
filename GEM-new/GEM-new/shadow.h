#ifndef SHADOW_H
#define SHADOW_H

#include <QWidget>

namespace Ui {
class shadow;
}

class shadow : public QWidget
{
    Q_OBJECT

public:
    explicit shadow(QWidget *parent = nullptr);
    ~shadow();
    void mousePressEvent(QMouseEvent *event);

    void setMaskColor(const QColor &color, float opacity);

private:
    Ui::shadow *ui;
};

#endif // SHADOW_H
