#ifndef HOSTELDECORATOR_H
#define HOSTELDECORATOR_H
#include <Decorator.h>

class HostelDecorator : public Decorator {
    public:
        HostelDecorator(Accommodation* accommodation);
        std::string getBaseBudget();
};

#endif