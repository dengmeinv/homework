#include "label.h"
#include <QMouseEvent>
#include <minLabel.h>

Label::Label(QWidget *parent):QLabel(parent)
{
    setGeometry(50,50,200,100);
    setText("event handing");
    setBackgroundRole(QPalette::Dark);
    setAutoFillBackground(true);
    minLabel m= new minLabel{this};
}

/*void Label::mouseMoveEvent(QMouseEvent *event)
{
    move(event->scenePosition().toPoint());
    qDebug() << "move in" << "Label::mouseMoveEvent.";
}*/

bool Label::event(QEvent *e)
{
    if(e->type() == QEvent::MouseMove){
        qDebug() << "move in" << "Label::event.";
        //e->accept();
        //return true;
    }
    return QWidget::event(e);
}
