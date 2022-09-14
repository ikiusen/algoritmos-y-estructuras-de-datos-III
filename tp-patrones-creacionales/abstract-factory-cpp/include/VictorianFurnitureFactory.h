#ifndef VICTORIANFURNITUREFACTORY_H
#define VICTORIANFURNITUREFACTORY_H
#include <FurnitureFactory.h>
#include <VictorianChair.h>
#include <VictorianSofa.h>
#include <VictorianCoffeeTable.h>

class VictorianFurnitureFactory : public FurnitureFactory
{
public:
    ~VictorianFurnitureFactory();
    Chair *createChair();
    Sofa *createSofa();
    CoffeeTable *createCoffeeTable();
};
#endif