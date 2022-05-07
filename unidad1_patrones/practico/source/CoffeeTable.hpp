 class CoffeeTable {
     public:
        virtual ~CoffeeTable(){};
        virtual std::string toString() = 0;
 };

 class ModernCoffeeTable : public CoffeeTable {
     public:
        virtual ~ModernCoffeeTable(){};
        std::string toString(){
           std::string description = "I'm a modern coffee table";
           return description;
        }
 };

 class VictorianCoffeeTable : public CoffeeTable {
     public:
        virtual ~VictorianCoffeeTable(){};
        std::string toString(){
           std::string description = "I'm a victorian coffee table";
           return description;
        }
 };

 class ArtDecoCoffeeTable : public CoffeeTable {
     public:
        virtual ~ArtDecoCoffeeTable(){};
        std::string toString(){
           std::string description = "I'm an art deco coffee table";
           return description;
        }
 };
 