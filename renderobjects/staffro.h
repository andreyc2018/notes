#pragma once

#include "musicrenderobject.h"
#include "objects/clef.h"

class StaffRO : public MusicRenderObject
{
public:
    StaffRO(const std::shared_ptr<Clef>& aClef);

    virtual void Render(QPaintDevice* aPaintDevice) override;
};
