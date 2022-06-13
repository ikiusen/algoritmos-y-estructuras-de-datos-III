#include <iostream>
#include <EconomicEngine.h>

void EconomicEngine::turnOn() const {
    std::cout<<"Standard engine turning on!" << std::endl;
}

void EconomicEngine::turnOff() const {
    std::cout<<"Standard engine turning off!" << std::endl;
}

void EconomicEngine::accelerate() const {
    std::cout<<"Standard engine accelerating!" << std::endl;
}