#ifndef IJSONHANDLER_H
#define IJSONHANDLER_H
#include "../vendors/nlohmann/json.hpp"
using json = nlohmann::json;

class IJsonHandler
{
public:
    virtual void readFromJson() = 0;
    virtual void writeToJson() = 0;
};
#endif
