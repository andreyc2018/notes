#pragma once

#include "enums.h"
#include <iostream>

struct Clef : Object
{
    Clef(ClefType aClefType = ClefType::Treble, NeutralClefType aNeutralClefType = NeutralClefType::Lines5)
        : Object(NotationObjectType::Brace)
        , mClefType(aClefType)
        , mNeutralClefType(aNeutralClefType)
	{
	}
	
    friend std::ostream& operator << (std::ostream& aStream, const Clef& aClef)
	{
	}
	
    friend std::istream& operator >> (std::istream& aStream, const Clef& aClef)
	{
	}

    unsigned char mClefType : 4;
    unsigned char mNeutralClefType : 2;
};

