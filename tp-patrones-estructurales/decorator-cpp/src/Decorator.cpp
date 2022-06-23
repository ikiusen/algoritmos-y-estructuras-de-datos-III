#include <Decorator.h>

Decorator::Decorator(Accommodation* accommodation) : _accommodation(accommodation){};

std::string Decorator::getBaseBudget(){
    return _accommodation->getBaseBudget();
}