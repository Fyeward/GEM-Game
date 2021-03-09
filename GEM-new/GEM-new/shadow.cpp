#include "shadow.h"
#include "ui_shadow.h"
#include <QMouseEvent>

shadow::shadow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::shadow)
{
    ui->setupUi(this);
}

shadow::~shadow()
{
    delete ui;
}

void shadow::mousePressEvent(QMouseEvent *event){
    if(event->button()==Qt::LeftButton){
        this->hide();
        //cout<<"fuck";
    }else{
        this->hide();
    }
}

void shadow::setMaskColor(const QColor &color, float opacity){
    if (!color.isValid()) {
            return;
        }
        QPalette palette = this->palette();
        palette.setColor(QPalette::Window, color);
        this->setPalette(palette);

        setWindowOpacity(opacity);
}
