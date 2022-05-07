 class Sofa {
     public:
        virtual ~Sofa(){};
        virtual std::string toString() = 0;
 };

 class ModernSofa : public Sofa {
     public:
        virtual ~ModernSofa(){};
        std::string toString(){
           std::string description = "I'm a modern sofa";
           return description;
        }
 };

 class VictorianSofa : public Sofa {
     public:
        virtual ~VictorianSofa(){};
        std::string toString(){
           std::string description = "I'm a victorian sofa";
           return description;
        }
 };

 class ArtDecoSofa : public Sofa {
     public:
        virtual ~ArtDecoSofa(){};
        std::string toString(){
           std::string description = "I'm an art deco sofa";
           return description;
        }
 };
 