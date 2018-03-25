#include "objectreader.h"
#include "enums.h"
#include "objects/notationobject.h"
#include "objects/accidental.h"
#include "objects/clef.h"
#include "objects/line.h"
#include "objects/meta.h"
#include "objects/note.h"
#include "objects/octaveshift.h"
#include "objects/pedal.h"
#include "objects/repetition.h"
#include "objects/rest.h"
#include "objects/tempo.h"
#include "objects/text.h"
#include "objects/time.h"

ObjectReader::ObjectReader(IRenderObjectConsumer *aRenderObjectConsumer)
    : mRenderObjectConsumer(aRenderObjectConsumer)
{
}

void ObjectReader::Read(std::istream &aStream)
{
    unsigned char typeAndSubType = aStream.read(1);
    unsigned char type = typeAndSubType & 0x0F;
    unsigned char subType = typeAndSubType & 0xF0;
    std::shared_ptr<NotationObject> object;
    switch (type)
    {
    case NotationObjectType::Line:
        object = new Line(subType);
        break;
    case NotationObjectType::Clef:
        // new StaffRO, ClefRO, StaffSeparatorRO
        object = std::make_shared<NotationObject>(new Clef(subType));
        GenerateObject(object);

        //        auto renderObject = std::make_shared<RenderObject>(new StaffRO(object));
        mRenderObjectConsumer->AddRenderObject(renderObject);

        break;
    case NotationObjectType::Time:
        // new time signature
        object = new Time(subType);
        break;
    case NotationObjectType::Note:
        object = new Note(subType);
        break;
    case NotationObjectType::Rest:
        object = new Rest(subType);
        break;
    case NotationObjectType::Accidental:
        object = new Accidental(subType);
        break;
    case NotationObjectType::Tempo:
        object = new Tempo(subType);
        break;
    case NotationObjectType::OctaveShift:
        object = new OctaveShift(subType);
        break;
    case NotationObjectType::Repetition:
        object = new Repetition(subType);
        break;
    case NotationObjectType::Pedal:
        object = new Pedal(subType);
        break;
    case NotationObjectType::Text:
        object = new Text(subType);
        break;
    case NotationObjectType::Meta:
        object = new Meta(subType);
        break;
    default:
        break;
    }
    assert(object);
}

