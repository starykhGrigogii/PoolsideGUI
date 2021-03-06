#ifndef IBASICDATA_H
#define IBASICDATA_H

#include <QMutex>

#include "uv_state.h"

/** \brief Basic interface for accessing data in UV_state class
 *
 */
class IBasicData
{
public:
    IBasicData(UV_State *target, QMutex *target_mutex);

    void getData();
    UV_State* gainAccess();
    void closeAccess();

    UV_State internal_state;

protected:
    UV_State *state;
    QMutex *mutex;
};

#endif // IBASICDATA_H
