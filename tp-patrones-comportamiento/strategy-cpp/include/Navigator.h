#ifndef NAVIGATOR_H
#define NAVIGATOR_H
#include <Strategy.h>
class Navigator
{
private:
    Strategy *_strategy;

public:
    Navigator(Strategy *strategy);
    void setStrategy(Strategy *strategy);
    void calculateRoute();
};
#endif