#pragma once

#include <QPaintDevice>
#include <QPen>
#include <QBrush>

#include <memory>

#include "objects/notationobject.h"

// drawable objects of music score
class MusicRenderObject
{
public:
    MusicRenderObject(std::shared_ptr<NotationObject> aParentObject)
        : mParentObject(aParentObject)
        , mPen(Qt::black)
        , mBrush(Qt::NoBrush)
    {
    }

    virtual ~MusicRenderObject()
    {
    }

    virtual void Render(QPaintDevice* aPaintDevice) = 0;

protected:
    std::shared_ptr<NotationObject> mParentObject;
    QPen mPen;
    QBrush mBrush;
};

