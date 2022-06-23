#ifndef DECORATOR_H
#define DECORATOR_H
#include <Accommodation.h>

class Decorator : public Accommodation {
    private:
        Accommodation* _accommodation;
    public:
        Decorator(Accommodation* accommodation);
        std::string getBaseBudget();
};

#endif