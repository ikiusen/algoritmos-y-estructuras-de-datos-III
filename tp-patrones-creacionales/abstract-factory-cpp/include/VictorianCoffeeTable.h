#ifndef VICTORIANCOFFEETABLE_H
#define VICTORIANCOFFEETABLE_H
#include <CoffeeTable.h>

class VictorianCoffeeTable : public CoffeeTable {
    public:
        ~VictorianCoffeeTable();
        std::string toString();
};
#endif