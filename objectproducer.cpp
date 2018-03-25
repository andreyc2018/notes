#pragma once

#include <QThread>

ObjectProducer::ObjectProducer(QObject *parent = nullptr)
    : QThread(parent)
{
}

void ObjectProducer::run() override
{
    for (int i = 0; i < DataSize; ++i) {
        mutex.lock();
        if (numUsedBytes == BufferSize)
            bufferNotFull.wait(&mutex);
        mutex.unlock();

        buffer[i % BufferSize] = "ACGT"[(int)qrand() % 4];

        mutex.lock();
        ++numUsedBytes;
        bufferNotEmpty.wakeAll();
        mutex.unlock();
    }
}
