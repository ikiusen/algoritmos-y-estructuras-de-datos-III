#ifndef SPADECORATOR_H
#define SPADECORATOR_H
#include <Decorator.h>

class SpaDecorator : public Decorator
{
public:
    SpaDecorator(Accommodation *accommodation);
    std::string getBaseBudget();
};

#endif