#include <FurnitureStore.h>

void FurnitureStore::createAndShowFurniture(FurnitureFactory* factory) {
    Chair* chair = factory->createChair();
    Sofa* sofa = factory->createSofa();
    CoffeeTable* coffeTable = factory->createCoffeeTable();

    std::cout << chair->toString() << std::endl;
    std::cout << sofa->toString() << std::endl;
    std::cout << coffeTable->toString() << std::endl;
    std::cout << "" << std::endl;

    delete chair;
    delete sofa;
    delete coffeTable;
}