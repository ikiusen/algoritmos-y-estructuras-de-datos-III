#ifndef MODERNCHAIR_H
#define MODERNCHAIR_H
#include <Chair.h>

class ModernChair : public Chair {
    public:
        ~ModernChair();
        std::string toString();
};
#endif