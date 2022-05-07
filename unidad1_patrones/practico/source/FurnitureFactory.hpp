#include "Chair.hpp"
#include "Sofa.hpp"
#include "CoffeeTable.hpp"

class FurnitureFactory {
    public:
        virtual Chair* createChair() = 0;
        virtual Sofa* createSofa() = 0;
        virtual CoffeeTable* createCoffeeTable() = 0;
};

class ModernFurnitureFactory : public FurnitureFactory {
    public:
        ~ModernFurnitureFactory(){};
        Chair* createChair() {
            return new ModernChair();
        }
        Sofa* createSofa() {
            return new ModernSofa();
        }
        CoffeeTable* createCoffeeTable() {
            return new ModernCoffeeTable();
        }
};

class VictorianFurnitureFactory : public FurnitureFactory {
    public:
        ~VictorianFurnitureFactory(){};
        Chair* createChair() {
            return new VictorianChair();
        }
        Sofa* createSofa() {
            return new VictorianSofa();
        }
        CoffeeTable* createCoffeeTable() {
            return new VictorianCoffeeTable();
        }
};

class ArtDecoFurnitureFactory : public FurnitureFactory {
    public:
        ~ArtDecoFurnitureFactory(){};
        Chair* createChair() {
            return new ArtDecoChair();
        }
        Sofa* createSofa() {
            return new ArtDecoSofa();
        }
        CoffeeTable* createCoffeeTable() {
            return new ArtDecoCoffeeTable();
        }
};

