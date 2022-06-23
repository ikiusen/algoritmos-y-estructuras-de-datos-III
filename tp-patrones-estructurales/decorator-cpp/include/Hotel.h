#ifndef HOTEL_H
#define HOTEL_H
#include <Accommodation.h>

class Hotel : public Accommodation {
    public:
        std::string getBaseBudget();
};

#endif