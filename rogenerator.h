#include "iobjectgenerator.h"
#include "iobjectconsumer.h"

class ObjectRenderer : public IObjectConsumer<Object>, public IObjectGenerator<RenderObject>
{
public:
    ObjectRenderer(IObjectGenerator* aObjectGenerator, IRenderObjectConsumer* aRenderObjectConsumer);

    virtual void GeneratedObject(std::istream& aStream);


private:
    std::list<std::shared_ptr<Object>> mObjects;
    IRenderObjectConsumer* mRenderObjectConsumer;
};
