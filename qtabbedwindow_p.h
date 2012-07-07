#ifndef QTABBEDWINDOWPRIVATE_H
#define QTABBEDWINDOWPRIVATE_H

#include "qtabbedwindow.h"


class QTabbedWindowPrivate
{
public:
    QTabbedWindowPrivate(QTabbedWindow* q_ptr);

private:
    QTabbedWindow *q_ptr;
    QTabWidget* tabs;
};

#endif // QTABBEDWINDOWPRIVATE_H
