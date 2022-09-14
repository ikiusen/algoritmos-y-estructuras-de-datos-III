#ifndef FURNITUREFACTORY_H
#define FURNITUREFACTORY_H
#include <Chair.h>
#include <Sofa.h>
#include <CoffeeTable.h>

class FurnitureFactory
{
public:
    virtual ~FurnitureFactory(){};
    virtual Chair *createChair() = 0;
    virtual Sofa *createSofa() = 0;
    virtual CoffeeTable *createCoffeeTable() = 0;
};
#endif