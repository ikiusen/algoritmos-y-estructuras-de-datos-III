#include <iostream>
#include <Application.h>

void Application::executeEngineTest(Engine *engine)
{
    std::cout << "Starting engine test.." << std::endl;
    engine->turnOn();
    engine->accelerate();
    engine->turnOff();
    std::cout << "Test complete!" << std::endl;
}