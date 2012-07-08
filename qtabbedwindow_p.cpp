#include "qtabbedwindow_p.h"


QTabbedWindowPrivate::QTabbedWindowPrivate(QTabbedWindow* q_ptr)
{
    // Create tab widget
    tabs = new QTabWidget();
    tabs->setTabsClosable(true);
    tabs->setDocumentMode(true);

    // Set up main window
    this->q_ptr = q_ptr;
    this->q_ptr->setCentralWidget(tabs);
}


int QTabbedWindowPrivate::addView(QWidget *view, QString &title)
{
    return tabs->addTab(view, title);
}


void QTabbedWindowPrivate::removeView(int index)
{
    tabs->removeTab(index);
}
