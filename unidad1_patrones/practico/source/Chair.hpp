#include <iostream>
class Chair {
    public:
       virtual ~Chair(){};
       virtual std::string toString() = 0;
};
class ModernChair : public Chair {
    public:
       virtual ~ModernChair(){};
       std::string toString(){
           std::string description = "I'm a modern chair";
           return description;
       }
};
class VictorianChair : public Chair {
    public:
       virtual ~VictorianChair(){};
       std::string toString(){
           std::string description = "I'm a victorian chair";
           return description;
       }
};
class ArtDecoChair : public Chair {
    public:
       virtual ~ArtDecoChair(){};
       std::string toString(){
           std::string description = "I'm an art deco chair";
           return description;
       }
};

