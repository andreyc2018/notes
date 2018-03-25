#pragma once

#include "enums.h"
#include <iostream>

struct Note : Object
{
    Note(Length aLength = Length::Quarter,
         LengthIncrease aLengthIncrease = LengthIncrease::None,
         Pitch aPitch = Pitch::Line3,
         bool aNextObjectOnNextStaff = true,
         NotesAttributes1 aNotesAttributes1 = NotesAttributes1::None,
         bool aStemDown = true,
         bool aTieToNextNote = false,
         int aRepetitions = 1,
         int aApplicature = 0,
         Dynamics aDynamics = Dynamics::None,
         Articulation aArticulation = Articulation::None)
        : Object(NotationObjectType::Note)
        , mLength(aLength)
        , mPitch(aPitch)
        , mNextObjectOnNextStaff(aNextObjectOnNextStaff)
        , mNotesAttributes1(aNotesAttributes1)
        , mStemDown(aStemDown)
        , mTieToNextNote(aTieToNextNote)
        , mRepetitions(aRepetitions)
        , mApplicature(aApplicature)
        , mDynamics(aDynamics)
        , mArticulation(aArticulation)
        , mLengthIncrease(aLengthIncrease)
    {
    }

    friend std::ostream& operator << (std::ostream& aStream, const Note& aNote)
    {
    }

    friend std::istream& operator >> (std::istream& aStream, const Note& aNote)
    {
    }

    unsigned char mLength : 4;
    unsigned char mPitch : 6;
    bool mChord : 1;
    bool mNextObjectOnNextStaff : 1;
    unsigned char mNotesAttributes1 : 4;
    bool mStemDown : 1;
    bool mTieToNextNote : 1;
    int mRepetitions : 4;
    unsigned char mDynamics : 4;
    unsigned char mArticulation : 5;
    unsigned char mLengthIncrease : 2;
    int mApplicature: 3;
};

