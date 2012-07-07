#include "qtabbedwindow_p.h"


QTabbedWindowPrivate::QTabbedWindowPrivate(QTabbedWindow* q_ptr)
{
    tabs = new QTabWidget();

    this->q_ptr = q_ptr;
    this->q_ptr->setCentralWidget(tabs);
}
