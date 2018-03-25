#pragma once

#include "enums.h"
#include <iostream>

struct Tempo : Object
{
    Tempo(Length aLength = Length::Quarter, int aTempo = 0, bool aNextObjectOnNextStaff = true,
          const std::string& aTempoName = std::string())
        : Object(NotationObjectType::Tempo)
        , mLength(aLength)
        , mTempo(aTempo)
        , mNextObjectOnNextStaff(aNextObjectOnNextStaff)
        , mTempoNameLength(aTempoName.length())
        , mTempoName(aTempoName)
    {
    }

    friend std::ostream& operator << (std::ostream& aStream, const Tempo& aTempo)
    {
    }

    friend std::istream& operator >> (std::istream& aStream, const Tempo& aTempo)
    {
    }

    unsigned char mLength : 4;
    unsigned char mTempo : 7;
    bool mNextObjectOnNextStaff : 1;
    unsigned char mTempoNameLength;
    std::string mTempoName;
};


