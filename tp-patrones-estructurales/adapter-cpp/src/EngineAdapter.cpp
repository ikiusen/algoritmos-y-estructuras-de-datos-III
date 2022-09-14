#include <EngineAdapter.h>

EngineAdapter::EngineAdapter(ElectricEngine *e) : engine(e){};

void EngineAdapter::turnOn() const
{
    engine->turnOn();
}

void EngineAdapter::turnOff() const
{
    engine->turnOff();
}

void EngineAdapter::accelerate() const
{
    engine->accelerate();
}