#include <SpaDecorator.h>

SpaDecorator::SpaDecorator(Accommodation* accommodation) : Decorator(accommodation) {};

std::string SpaDecorator::getBaseBudget() {
    return "Spa accommodations start at $1500 + "  + Decorator::getBaseBudget() + " ";
}