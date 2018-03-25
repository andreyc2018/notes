#include "renderobjectgenerator.h"
#include "enums.h"
#include "renderobjects/object.h"

ROGenerator::ROGenerator(IRenderObjectConsumer *aRenderObjectConsumer)
    : mRenderObjectConsumer(aRenderObjectConsumer)
{
}

void ObjectReader::Read(std::istream &aStream)
{
    unsigned char typeAndSubType = aStream.read(1);
    unsigned char type = typeAndSubType & 0x0F;
    unsigned char subType = typeAndSubType & 0xF0;
    std::shared_ptr<Object> object;
    switch (type)
    {
    case ObjectType::Line:
        object = new Line(subType);
        break;
    case ObjectType::Clef:
        // new StaffRO, ClefRO, StaffSeparatorRO
        object = std::make_shared<Object>(new Clef(subType));
        break;
    case ObjectType::Time:
        // new time signature
        object = new Time(subType);
        break;
    case ObjectType::Note:
        object = new Note(subType);
        break;
    case ObjectType::Rest:
        object = new Rest(subType);
        break;
    case ObjectType::Accidental:
        object = new Accidental(subType);
        break;
    case ObjectType::Tempo:
        object = new Tempo(subType);
        break;
    case ObjectType::OctaveShift:
        object = new OctaveShift(subType);
        break;
    case ObjectType::Repetition:
        object = new Repetition(subType);
        break;
    case ObjectType::Pedal:
        object = new Pedal(subType);
        break;
    case ObjectType::Text:
        object = new Text(subType);
        break;
    case ObjectType::Meta:
        object = new Meta(subType);
        break;
    default:
        break;
    }
    assert(object);
    mObjects.emplace(object);
}

std::list<std::shared_ptr<Object>> ObjectReader::GetObjects() const
{
    return mObjects;
}

//        auto renderObject = std::make_shared<RenderObject>(new StaffRO(object));
mRenderObjectConsumer->AddRenderObject(renderObject);

