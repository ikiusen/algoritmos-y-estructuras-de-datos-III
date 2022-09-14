#ifndef COFFEETABLE_H
#define COFFEETABLE_H
#include <iostream>

class CoffeeTable
{
public:
    virtual ~CoffeeTable(){};
    virtual std::string toString() = 0;
};
#endif