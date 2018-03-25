#pragma once

#include <Qt3D>
#include <QWaitCondition>
#include <QMutex>

template <typename Object>
class ObjectPCBase
{
protected:
    static const int BufferSize = 8192;
    Qt3D::QCircularBuffer<Object> mBuffer[BufferSize];

    QWaitCondition mBufferNotEmpty;
    QWaitCondition mBufferNotFull;
    QMutex mMutex;
    int mUsedSize = 0;
}
;
