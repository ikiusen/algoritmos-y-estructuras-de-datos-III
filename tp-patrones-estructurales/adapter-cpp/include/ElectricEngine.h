#ifndef ELECTRICENGINE_H
#define ELECTRICENGINE_H

class ElectricEngine{
    public:
        virtual ~ElectricEngine(){};
        virtual void turnOn() const = 0;
        virtual void turnOff() const = 0;
        virtual void accelerate() const = 0;
};
#endif