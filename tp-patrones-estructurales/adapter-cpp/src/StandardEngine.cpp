#include <iostream>
#include <StandardEngine.h>

void StandardEngine::turnOn() const
{
    std::cout << "Standard engine turning on!" << std::endl;
}

void StandardEngine::turnOff() const
{
    std::cout << "Standard engine turning off!" << std::endl;
}

void StandardEngine::accelerate() const
{
    std::cout << "Standard engine accelerating!" << std::endl;
}