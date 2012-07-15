#ifndef VIEWBAR_P_H
#define VIEWBAR_P_H

#include <QTabBar>
#include "tabbedwindow.h"


enum MovementTypeEnum {
    DRAG, MOVE
};


class TabMoveEvent
{
public:
    /* Create a new instance of a tab move event passing the movement type, the
       tab index under the mouse cursor and the position of the mouse at the
       start of the tab's move action.

       If the movement type is a DRAG operation, the pos attribute stores the
       global cursor's coordinates, otherwise if the movement is a MOVE
       operation it will store the offset between the cursor's and the top left
       corner of the window.
    */
    TabMoveEvent(MovementTypeEnum type, int index, QPoint pos = QPoint());

    const MovementTypeEnum type() { return m_type; }
    const int index() { return m_index; }
    const QPoint pos() { return m_pos; }
    bool manhattan(const QPoint &pos);

private:
    MovementTypeEnum m_type;
    int m_index;
    QPoint m_pos;
};


class TabBarPrivate : public QTabBar
{
    Q_OBJECT

public:
    TabBarPrivate(QWidget *parent = 0);
    ~TabBarPrivate();

    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

protected:
    void createNewWindow(const QPoint&, TabMoveEvent*);
    void moveToWindow(TabbedWindow*, const QPoint&, TabMoveEvent*);
    void tabRemoved(int index);
    
signals:
    
public slots:

private:
    TabMoveEvent *moveEvent;
};

#endif // VIEWBAR_P_H
