#ifndef ENGINEADAPTER_H
#define ENGINEADAPTER_H
#include <Engine.h>
#include <ElectricEngine.h>

class EngineAdapter : public Engine
{
private:
    ElectricEngine *engine;

public:
    EngineAdapter(ElectricEngine *e);
    virtual void turnOn() const override;
    virtual void turnOff() const override;
    virtual void accelerate() const override;
};
#endif