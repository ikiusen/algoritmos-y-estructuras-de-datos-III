#ifndef ARTDECOFURNITUREFACTORY_H
#define ARTDECOFURNITUREFACTORY_H
#include <FurnitureFactory.h>
#include <ArtDecoChair.h>
#include <ArtDecoSofa.h>
#include <ArtDecoCoffeeTable.h>

class ArtDecoFurnitureFactory : public FurnitureFactory
{
public:
    ~ArtDecoFurnitureFactory();
    Chair *createChair();
    Sofa *createSofa();
    CoffeeTable *createCoffeeTable();
};
#endif