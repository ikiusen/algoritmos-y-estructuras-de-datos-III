#ifndef SOFA_H
#define SOFA_H
#include <iostream>

class Sofa {
    public:
        virtual ~Sofa(){};
        virtual std::string toString() = 0;
};
#endif