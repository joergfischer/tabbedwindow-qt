#include "QtGui"
#include "viewbar_p.h"


ViewBarPrivate::ViewBarPrivate(QWidget *parent) :
    QTabBar(parent),
    dragStartPos(QPoint()),
    dragging(-1)
{
}

void ViewBarPrivate::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        qDebug() << "left button pressed at" << event->pos();
        dragStartPos = event->pos();
    }
}


void ViewBarPrivate::mouseReleaseEvent(QMouseEvent *event) {
    if (dragging > -1 & (event->button() == Qt::LeftButton)) {
        qDebug() << "stop dragging tab" << dragging;
        dragging = -1;
    }
}


void ViewBarPrivate::mouseMoveEvent(QMouseEvent *event)
{
    // No left button
    if (!(event->buttons() & Qt::LeftButton)) {
        qDebug() << "no left button";
        return;
    }

    // We are already dragging
    if (dragging > -1) {
        return;
    }

    // No far enough
    if ((event->pos() - dragStartPos).manhattanLength()
            < QApplication::startDragDistance()) {
        qDebug() << "no far enough"
                 << ((event->pos() - dragStartPos).manhattanLength())
                 << QApplication::startDragDistance();
        return;
    }

    // Start dragging
    qDebug() << "start dragging tab" << tabAt(event->pos());
    dragging = tabAt(event->pos());
}
