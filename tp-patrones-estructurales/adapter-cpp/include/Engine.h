#ifndef ENGINE_H
#define ENGINE_H

class Engine {
    public:
        virtual ~Engine(){};
        virtual void turnOn() const = 0;
        virtual void turnOff() const = 0;
        virtual void accelerate() const = 0;
};
#endif