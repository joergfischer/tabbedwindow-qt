#include <QtGui>
#include "qtabbedwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTabbedWindow w;
    w.show();

    QWidget v1;
    QWidget v2;

    v1.setStyleSheet("background-color: red");
    v2.setStyleSheet("background-color: blue");

    w.addView(&v1, QString("Red View"));
    w.addView(&v2, QString("Blue view"));
    
    return a.exec();
}
