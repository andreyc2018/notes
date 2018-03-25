#pragma once

template <typename Object>
class IObjectConsumer
{
public:
    virtual ~IObjectConsumer();
    virtual void Consume(std::shared_ptr<Object> aObject) = 0;
};

