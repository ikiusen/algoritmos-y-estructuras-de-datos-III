#ifndef MODERNFURNITUREFACTORY_H
#define MODERNFURNITUREFACTORY_H
#include <FurnitureFactory.h>
#include <ModernChair.h>
#include <ModernSofa.h>
#include <ModernCoffeeTable.h>

class ModernFurnitureFactory : public FurnitureFactory {
    public:
        ~ModernFurnitureFactory();
        Chair* createChair();
        Sofa* createSofa();
        CoffeeTable* createCoffeeTable();
};
#endif