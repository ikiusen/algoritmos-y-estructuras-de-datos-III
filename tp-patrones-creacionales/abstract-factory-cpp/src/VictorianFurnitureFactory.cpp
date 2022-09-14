#include <VictorianFurnitureFactory.h>

VictorianFurnitureFactory::~VictorianFurnitureFactory() {}

Chair *VictorianFurnitureFactory::createChair()
{
    return new VictorianChair();
}

Sofa *VictorianFurnitureFactory::createSofa()
{
    return new VictorianSofa();
}

CoffeeTable *VictorianFurnitureFactory::createCoffeeTable()
{
    return new VictorianCoffeeTable();
}