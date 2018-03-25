#include <iostream>
#include <memory>
#include <QThread>

#include "enums.h"
#include "objects/notationobject.h"
#include "objectproducer.h"
#include "renderobjects/iobjectconsumer.h"

class ObjectReader : public ObjectProducer<NotationObject>, public QThread
{
public:
    ObjectReader(IRenderObjectConsumer* aRenderObjectConsumer);

    void Read(std::istream& aStream);

    virtual void Generate(std::shared_ptr<NotationObject> aObject);

private:

    IRenderObjectConsumer* mRenderObjectConsumer;
};
