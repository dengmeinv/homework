#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <QPushButton>

class Pushbutton : public QPushButton
{
public:
    Pushbutton(QWidget *parent = nullptr);

    //virtual void mouseMoveEvent(QMouseEvent *) override;
    virtual bool event(QEvent *e)override;

};
#endif // PUSHBUTTON_H
