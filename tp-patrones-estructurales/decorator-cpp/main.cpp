#include <Accommodation.h>
#include <Hotel.h>
#include <HostelDecorator.h>
#include <SpaDecorator.h>

int main() {
    Accommodation* simpleHotel = new Hotel();
    std::cout << "Displaying available budgets:" << std::endl;
    std::cout << "Budget 1: " + simpleHotel->getBaseBudget() << std::endl;

    Accommodation* hostel = new HostelDecorator(simpleHotel);
    std::cout << "Budget 2: " + hostel->getBaseBudget() << std::endl;

    Accommodation* spa = new SpaDecorator(hostel);
    std::cout << "Budget 3: " + spa->getBaseBudget() << std::endl;

    delete simpleHotel;
    delete hostel;
    delete spa;
    
    return 0;
}