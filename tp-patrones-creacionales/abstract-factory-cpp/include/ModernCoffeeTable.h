#ifndef MODERNCOFFEETABLE_H
#define MODERNCOFFEETABLE_H
#include <CoffeeTable.h>

class ModernCoffeeTable : public CoffeeTable
{
public:
    ~ModernCoffeeTable();
    std::string toString();
};
#endif