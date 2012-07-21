#include "tabmoveevent.h"


TabMoveEvent::TabMoveEvent(const QPoint& offset, int index)
{
    m_index = index;
    m_offset = offset;
}
