#pragma once

#include "enums.h"
#include "notationobject.h"
#include <iostream>

struct Accidental : NotationObject
{
    Accidental(AccidentalType aAccidentalType = AccidentalType::Natural)
        : NotationObject(NotationObjectType::Accidental)
        , mAccidentalType(aAccidentalType)
    {
    }

    friend std::ostream& operator << (std::ostream& aStream, const Accidental& aAccidental)
    {
    }

    friend std::istream& operator >> (std::istream& aStream, const Accidental& aAccidental)
    {
    }

    unsigned char mAccidentalType : 4;
};


