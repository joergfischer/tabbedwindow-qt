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
