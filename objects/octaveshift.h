#pragma once

#include "enums.h"
#include <iostream>

struct OctaveShift : Object
{
    OctaveShift(OctaveShiftType aOctaveShiftType = OctaveShiftType::Up, bool aNextObjectOnNextStaff = true)
        : Object(NotationObjectType::OctaveShift)
        , mOctaveShiftType(aOctaveShiftType)
        , mNextObjectOnNextStaff(aNextObjectOnNextStaff)
    {
    }

    friend std::ostream& operator << (std::ostream& aStream, const OctaveShift& aOctaveShift)
    {
    }

    friend std::istream& operator >> (std::istream& aStream, const OctaveShift& aOctaveShift)
    {
    }

    unsigned char mOctaveShiftType : 4;
    bool mNextObjectOnNextStaff : 1;
};

