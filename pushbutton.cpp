#include <QMouseEvent>
#include <pushbutton.h>
#include <QPushButton>
#include <QDebug>

Pushbutton::Pushbutton(QWidget *parent):QPushButton(parent)
{
    //setGeometry(0,0,20,20);
    //setText("button");
    //setBackgroundRole(QPalette::Light);
    //setAutoFillBackground(true);
}

/*void Label::mouseMoveEvent(QMouseEvent *event)
{
    move(event->scenePosition().toPoint());
    qDebug() << "move in" << "Label::mouseMoveEvent.";
}*/

bool Pushbutton::event(QEvent *e)
{
    if(e->type() == QEvent::MouseMove){
        qDebug() << "move in" << "button::event.111";
        return false;
    }
    return QWidget::event(e);
}
