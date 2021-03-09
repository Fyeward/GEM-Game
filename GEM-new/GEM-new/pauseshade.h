#ifndef PAUSESHADE_H
#define PAUSESHADE_H

#include <QWidget>

class pauseshade : public QWidget
{
    Q_OBJECT
public:
    explicit pauseshade(QWidget *parent = nullptr);
    /*void installWidget(QWidget *widget);
    void setMaskColor(const QColor &color,float opacity);
    void setTopWidget(QWidget *widget);*/
    void setMaskColor(const QColor &color,float opacity);
protected:
    void mousePressEvent(QMouseEvent *event);
/*private:
    void init();
    void showEvent(QShowEvent *event);
private:
        QWidget *m_topWidget;
        QWidget *m_widget;*/


signals:

};

#endif // PAUSESHADE_H
