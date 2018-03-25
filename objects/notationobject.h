#pragma once

#include "enums.h"

// physical objects of music notation
struct NotationObject
{	
    NotationObject(NotationObjectType aObjectType)
        : mObjectType(static_cast<unsigned char>(aObjectType))
	{
	}

    virtual ~NotationObject() {}

    unsigned char mObjectType : 4;
};

