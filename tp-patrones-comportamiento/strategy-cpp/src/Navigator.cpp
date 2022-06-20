#include <Navigator.h>

Navigator::Navigator(Strategy* strategy) : _strategy(strategy) {};

void Navigator::setStrategy(Strategy* strategy) {
    delete _strategy;
    _strategy = strategy;
}

void Navigator::calculateRoute() {
    _strategy->executeAlgorithm();
}