#include <ArtDecoFurnitureFactory.h>

ArtDecoFurnitureFactory::~ArtDecoFurnitureFactory() {}

Chair *ArtDecoFurnitureFactory::createChair()
{
    return new ArtDecoChair();
}

Sofa *ArtDecoFurnitureFactory::createSofa()
{
    return new ArtDecoSofa();
}

CoffeeTable *ArtDecoFurnitureFactory::createCoffeeTable()
{
    return new ArtDecoCoffeeTable();
}