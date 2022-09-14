#include <FurnitureStore.h>
#include <ModernFurnitureFactory.h>
#include <ArtDecoFurnitureFactory.h>
#include <VictorianFurnitureFactory.h>

int main()
{
    FurnitureStore store;
    FurnitureFactory *factory = new ModernFurnitureFactory();
    store.createAndShowFurniture(factory);
    factory = new VictorianFurnitureFactory();
    store.createAndShowFurniture(factory);
    factory = new ArtDecoFurnitureFactory();
    store.createAndShowFurniture(factory);

    delete factory;
    return 0;
}