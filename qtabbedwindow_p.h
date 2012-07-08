#ifndef QTABBEDWINDOWPRIVATE_H
#define QTABBEDWINDOWPRIVATE_H

#include "qtabbedwindow.h"


class QTabbedWindowPrivate
{
public:
    QTabbedWindowPrivate(QTabbedWindow* q_ptr);

    int addView(QWidget* view, QString &title);
    void removeView(int index);

private:
    QTabbedWindow *q_ptr;
    QTabWidget* tabs;
};

#endif // QTABBEDWINDOWPRIVATE_H
