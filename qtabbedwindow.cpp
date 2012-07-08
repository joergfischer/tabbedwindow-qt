#include "qtabbedwindow.h"
#include "qtabbedwindow_p.h"


QTabbedWindow::QTabbedWindow(QWidget *parent) :
    QMainWindow(parent)
{
    d_ptr = new QTabbedWindowPrivate(this);
}


QTabbedWindow::~QTabbedWindow()
{
    delete d_ptr;
}


int QTabbedWindow::addView(QWidget *view, QString &title)
{
    return d_ptr->addView(view, title);
}


void QTabbedWindow::removeView(int index)
{
    d_ptr->removeView(index);
}
