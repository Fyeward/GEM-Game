#include "pauseshade.h"
#include <QMouseEvent>
#include <QWidget>
#include <ui_pauseshade.h>

pauseshade::pauseshade(QWidget *parent) : QWidget(parent)
{

}

void pauseshade::mousePressEvent(QMouseEvent *event){
    if(event->button()==Qt::LeftButton){
        this->hide();
        //cout<<"fuck";
    }else{
        this->hide();
    }
}

void pauseshade::setMaskColor(const QColor &color, float opacity){
    if (!color.isValid()) {
            return;
        }
        QPalette palette = this->palette();
        palette.setColor(QPalette::Window, color);
        this->setPalette(palette);

        setWindowOpacity(opacity);
}


