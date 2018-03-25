#pragma once

template <typename Object>
class IObjectGenerator
{
public:
    virtual ~IObjectGenerator();
    virtual void Generate(std::shared_ptr<Object> aObject) = 0;
};

