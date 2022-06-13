#include <ModernFurnitureFactory.h>

ModernFurnitureFactory::~ModernFurnitureFactory() {}

Chair* ModernFurnitureFactory::createChair(){
    return new ModernChair();
}

Sofa* ModernFurnitureFactory::createSofa(){
    return new ModernSofa();
}

CoffeeTable* ModernFurnitureFactory::createCoffeeTable(){
    return new ModernCoffeeTable();
}