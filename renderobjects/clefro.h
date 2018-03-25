#pragma once

#include "musicrenderobject.h"
#include "objects/clef.h"

class ClefRO : public MusicRenderObject
{
public:
    ClefRO(const std::shared_ptr<Clef>& aClef)
        : MusicRenderObject(aClef)
    {
    }
};
