#include "FurnitureFactory.hpp"

void createAndShowFurniture(FurnitureFactory &factory){
    Chair* chair = factory.createChair();
    Sofa* sofa = factory.createSofa();
    CoffeeTable* coffeTable = factory.createCoffeeTable();

    std::cout << chair->toString() << std::endl;
    std::cout << sofa->toString() << std::endl;
    std::cout << coffeTable->toString() << std::endl;
    std::cout << "" << std::endl;

    delete chair;
    delete sofa;
    delete coffeTable;
}
int main(){
    //toDo: determine a way at run time to make client chooser which type of furniture they want
    FurnitureFactory* factory = new ModernFurnitureFactory();
    createAndShowFurniture(*factory);    
    factory = new VictorianFurnitureFactory();
    createAndShowFurniture(*factory);
    factory = new ArtDecoFurnitureFactory();
    createAndShowFurniture((*factory));
    
    delete factory;
    return 0;
}