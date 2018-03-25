#pragma once

#include "renderobjects/musicrenderobject.h"
#include "renderobjects/iobjectconsumer.h"

#include <QBrush>
#include <QPen>
#include <QWidget>

class RenderArea : public QWidget, public IRenderObjectConsumer
{
    Q_OBJECT

public:
    RenderArea(QWidget *parent = 0);

    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;

    virtual void AddRenderObject(std::shared_ptr<MusicRenderObject> aRenderObject) override;

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    std::list<std::shared_ptr<MusicRenderObject>> mRenderObjects;
};
