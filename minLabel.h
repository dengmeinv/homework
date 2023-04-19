#ifndef MINLABEL_H
#define MINLABEL_H
#include <QWidget>
#include <pushbutton.h>

class minLabel : public QWidget
{
public:
    minLabel(QWidget *parent = nullptr);

    //virtual void mouseMoveEvent(QMouseEvent *) override;
    virtual bool event(QEvent *e)override;
    //virtual bool eventFilter(QObject *watched, QEvent *event);
private:
    Pushbutton *b;
};
#endif // MINLABEL_H
