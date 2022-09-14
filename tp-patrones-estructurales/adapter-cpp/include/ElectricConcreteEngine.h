#ifndef ELECTRICCONCRETEENGINE_H
#define ELECTRICCONCRETEENGINE_H
#include <ElectricEngine.h>

class ElectricConcreteEngine : public ElectricEngine
{
public:
    virtual void turnOn() const override;
    virtual void turnOff() const override;
    virtual void accelerate() const override;
};
#endif