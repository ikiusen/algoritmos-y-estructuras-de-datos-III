#include <iostream>
#include <ElectricConcreteEngine.h>

void ElectricConcreteEngine::turnOn() const {
    std::cout<<"[ADAPTED] Electric engine turning on!" << std::endl;
}

void ElectricConcreteEngine::turnOff() const {
    std::cout<<"[ADAPTED] Electric engine turning off!" << std::endl;
}

void ElectricConcreteEngine::accelerate() const {
    std::cout<<"[ADAPTED] Electric engine accelerating!" << std::endl;
}