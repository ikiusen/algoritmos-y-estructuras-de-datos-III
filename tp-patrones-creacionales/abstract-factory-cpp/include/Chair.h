#ifndef CHAIR_H
#define CHAIR_H
#include <iostream>

class Chair
{
public:
    virtual ~Chair(){};
    virtual std::string toString() = 0;
};
#endif