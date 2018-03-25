#pragma once

#include "enums.h"
#include <iostream>

struct Rest : Object
{
    Rest(Length aLength = Length::Quarter,
          LengthIncrease aLengthIncrease = LengthIncrease::None,
          Pitch aPitch = Pitch::Line3)
        : Object(NotationObjectType::Pause)
        , mLength(aLength)
        , mPitch(aPitch)
    {
    }

    friend std::ostream& operator << (std::ostream& aStream, const Pause& aPause)
    {
    }

    friend std::istream& operator >> (std::istream& aStream, const Pause& aPause)
    {
    }

    unsigned char mLength : 4;
    unsigned char mPitch : 6;
    unsigned char mLengthIncrease : 2;
};

