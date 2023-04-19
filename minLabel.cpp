#include "minLabel.h"
#include <QMouseEvent>
#include <QDebug>
#include <pushbutton.h>

minLabel::minLabel(QWidget *parent):QWidget(parent)
{
    setGeometry(0,0,100,50);
    setBackgroundRole(QPalette::Highlight);
    setAutoFillBackground(true);
    b = new Pushbutton;
    b->setText("start");
    b->setGeometry(0,0,30,30);
    b->setParent(this);
    b->installEventFilter(this);
}

/*void minLabel::mouseMoveEvent(QMouseEvent *event)
{
    //move(event->scenePosition().toPoint());
    qDebug() << "move in" << "minLabel::mouseMoveEvent.";
}*/

bool minLabel::event(QEvent *e)
{
    if(e->type() == QEvent::MouseMove){
        qDebug() << "move in" << "minLabel::event.";
        //e->accept();
        //return true;
    }
    return QWidget::event(e);
}

/*bool minLabel::eventFilter(QObject *watched, QEvent *event){
    if(watched == b){
        if(event->type() == QEvent::MouseMove){
            //qDebug() << "move in button::event";
            return false;
        }
        return false;
    }
    return minLabel::eventFilter(watched,event);
}*/
