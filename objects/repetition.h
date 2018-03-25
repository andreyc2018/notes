#pragma once

#include "enums.h"
#include <iostream>

struct Repetition : Object
{
    Repetition(RepetitionType aRepetitionType = RepetitionType::VoltaStart, int aVoltaNumber, bool aNextObjectOnNextStaff = true)
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


