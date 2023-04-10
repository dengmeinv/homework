#include "minLabel.h"
#include <QMouseEvent>
#include <QDebug>
minLabel::minLabel(QWidget *parent):QWidget(parent)
{
    setGeometry(50,50,50,50);
    setBackgroundRole(QPalette::Highlight);
    setAutoFillBackground(true);
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
