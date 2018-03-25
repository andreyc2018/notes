#pragma once

#include "enums.h"
#include <iostream>

struct Time : Object
{
    Time(TimeType aTimeType = TimeType::Common, int aBeatsPerMeasure = 0, int aBeatSize = 0)
        : Object(NotationObjectType::Time)
        , mTimeType(aTimeType)
        , mBeatsPerMeasure(aBeatsPerMeasure)
        , mBeatSize(aBeatSize)
    {
    }

    friend std::ostream& operator << (std::ostream& aStream, const Time& aTime)
    {
    }

    friend std::istream& operator >> (std::istream& aStream, const Time& aTime)
    {
    }

    unsigned char mTimeType : 4;
    int mBeatsPerMeasure : 8;
    int mBeatSize : 8;
};


