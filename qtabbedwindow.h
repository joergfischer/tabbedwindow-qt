#ifndef QTABBEDWINDOW_H
#define QTABBEDWINDOW_H

#include <QMainWindow>


class QTabbedWindowPrivate;


class QTabbedWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QTabbedWindow(QWidget *parent = 0);
    ~QTabbedWindow();

    int addView(QWidget* view);
    void removeView(int index);

private:
    QTabbedWindowPrivate* d_ptr;
};

#endif // QTABBEDWINDOW_H
