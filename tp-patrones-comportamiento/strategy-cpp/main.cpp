#include <Navigator.h>
#include <CarStrategy.h>
#include <PedestrianStrategy.h>
#include <PublicTransportStrategy.h>
#include <iostream>

int main()
{
    Strategy *defaultStrategy = new PedestrianStrategy();
    Navigator *nav = new Navigator(defaultStrategy);
    std::cout << "User chose pedestrian route calculation: " << std::endl;
    nav->calculateRoute();
    std::cout << "------------------------------------" << std::endl;
    std::cout << "User now chose car route calculation: " << std::endl;
    nav->setStrategy(new CarStrategy());
    nav->calculateRoute();
    std::cout << "------------------------------------" << std::endl;
    std::cout << "User now chose public transport route calculation: " << std::endl;
    nav->setStrategy(new PublicTransportStrategy());
    nav->calculateRoute();

    return 0;
}