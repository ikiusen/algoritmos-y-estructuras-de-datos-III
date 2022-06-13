#ifndef ARTDECOCOFFEETABLE_H
#define ARTDECOCOFFEETABLE_H
#include <CoffeeTable.h>

class ArtDecoCoffeeTable : public CoffeeTable {
    public:
        ~ArtDecoCoffeeTable();
        std::string toString();
};
#endif