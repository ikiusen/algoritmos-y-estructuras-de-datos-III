#ifndef ACCOMMODATION_H
#define ACCOMMODATION_H
#include <iostream>

class Accommodation
{
public:
    virtual ~Accommodation(){};
    virtual std::string getBaseBudget() = 0;
};

#endif