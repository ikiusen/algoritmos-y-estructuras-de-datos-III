#ifndef STANDARDENGINE_H
#define STANDARDENGINE_H
#include <Engine.h>

class StandardEngine : public Engine {
    public:
        virtual void turnOn() const override;
        virtual void turnOff() const override;
        virtual void accelerate() const override;
};
#endif