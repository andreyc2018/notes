#pragma once

#include "enums.h"
#include <iostream>

struct Line : Object
{	
    Line(LineType aLineType = LineType::Bar, int aStaffsSpanned = 1, bool aNextObjectOnSameStaff = false)
        : Object(LineType::Bar)
        , mLineType(aLineType)
	    , mStaffsSpanned(aStaffsSpanned)
        , mNextObjectOnSameStaff(aNextObjectOnSameStaff)
	{
	}
	
    friend std::ostream& operator << (std::ostream& aStream, const Line& aLine)
	{
	}
	
    friend std::istream& operator >> (std::istream& aStream, const Line& aLine)
	{
	}

    unsigned char mLineType : 4;
    unsigned char mStaffsSpanned : 7;
    bool mNextObjectOnSameStaff : 1;
};

