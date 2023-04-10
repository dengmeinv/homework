#ifndef LABEL_H
#define LABEL_H

#include <QLabel>

class Label : public QLabel
{
public:
    Label(QWidget *parent = nullptr);

    //virtual void mouseMoveEvent(QMouseEvent *) override;
    virtual bool event(QEvent *e)override;

};

#endif // LABEL_H
