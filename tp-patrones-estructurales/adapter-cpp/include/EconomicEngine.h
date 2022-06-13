#ifndef ECONOMICENGINE_H
#define ECONOMICENGINE_H
#include <Engine.h>

class EconomicEngine : public Engine {
    public:
        virtual void turnOn() const override;
        virtual void turnOff() const override;
        virtual void accelerate() const override;
};
#endif