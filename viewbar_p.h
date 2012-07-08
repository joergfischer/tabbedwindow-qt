#ifndef VIEWBAR_P_H
#define VIEWBAR_P_H

#include <QtGui>

class ViewBarPrivate : public QTabBar
{
    Q_OBJECT
public:
    ViewBarPrivate(QWidget *parent = 0);

    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    
signals:
    
public slots:

private:
    QPoint dragStartPos;
    int dragging;
};

#endif // VIEWBAR_P_H
