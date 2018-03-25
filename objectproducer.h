#pragma once

#include "objectpcbase.h"

template <typename Object>
class ObjectProducer : public ObjectPCBase
{
protected:
    void Add(const Object& aObject)
    {
        mMutex.lock();
        if (mUsedSize == BufferSize)
        {
            mBufferNotFull.wait(&mMutex);
        }
        mMutex.unlock();

        mBuffer[i % BufferSize] = aObject;

        mMutex.lock();
        ++mUsedSize;
        mBufferNotEmpty.wakeAll();
        mMutex.unlock();
    }
};
