#ifndef MINLABEL_H
#define MINLABEL_H
#include <QWidget>

class minLabel : public QWidget
{
public:
    minLabel(QWidget *parent = nullptr);

    //virtual void mouseMoveEvent(QMouseEvent *) override;
    virtual bool event(QEvent *e)override;

};
#endif // MINLABEL_H
