#include <HostelDecorator.h>

HostelDecorator::HostelDecorator(Accommodation* accommodation) : Decorator(accommodation) {};

std::string HostelDecorator::getBaseBudget() {
    return "Hostel extra accommodations start at $1000 + " + Decorator::getBaseBudget() + " ";
}