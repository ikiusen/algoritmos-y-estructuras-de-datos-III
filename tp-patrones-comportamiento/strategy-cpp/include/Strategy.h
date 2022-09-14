#ifndef STRATEGY_H
#define STRATEGY_H
class Strategy
{
public:
    virtual ~Strategy(){};
    virtual void executeAlgorithm() = 0;
};
#endif