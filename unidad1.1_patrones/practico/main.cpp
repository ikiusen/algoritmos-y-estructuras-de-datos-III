#include <iostream>
#include <memory>

class Engine {
    public:
        virtual ~Engine(){};
        virtual void turnOn() const = 0;
        virtual void turnOff() const = 0;
        virtual void accelerate() const = 0;
};

class StandardEngine : public Engine {
    public:
    virtual void turnOn() const override{
        std::cout<<"Standard engine turning on!" << std::endl;
    }
    virtual void turnOff() const override{
        std::cout<<"Standard engine turning off!" << std::endl;
    }
    virtual void accelerate() const override{
        std::cout<<"Standard engine accelerating!" << std::endl;
    }
};

class EconomicEngine : public Engine {
    public:
    virtual void turnOn() const override{
        std::cout<<"Economic engine turning on!" << std::endl;
    }
    virtual void turnOff() const override{
        std::cout<<"Economic engine turning off!" << std::endl;
    }
    virtual void accelerate() const override{
        std::cout<<"Economic engine accelerating!" << std::endl;
    }
};

class ElectricEngine{
    public:
        virtual ~ElectricEngine(){};
        virtual void turnOn() const = 0;
        virtual void turnOff() const = 0;
        virtual void accelerate() const = 0;
};

class ElectricConcreteEngine : public ElectricEngine {
    public:
    virtual void turnOn() const override{
        std::cout<<"[ADAPTED] Electric engine turning on!" << std::endl;
    }
    virtual void turnOff() const override{
        std::cout<<"[ADAPTED] Electric engine turning off!" << std::endl;
    }
    virtual void accelerate() const override{
        std::cout<<"[ADAPTED] Electric engine accelerating!" << std::endl;
    }
};

class EngineAdapter : public Engine {
    private:
        ElectricEngine* engine;
    public:
        EngineAdapter(ElectricEngine* e) : engine(e) {}
        virtual void turnOn() const override{
            this->engine->turnOn();
        }
        virtual void turnOff() const override{
            this->engine->turnOff();
        }
        virtual void accelerate() const override{
            this->engine->accelerate();
        }
};

class Application {
    public:
        void executeEngineTest(Engine* engine) {
            std::cout << "Starting engine test.." << std::endl;
            engine->turnOn();
            engine->accelerate();
            engine->turnOff();
            std::cout << "Test complete!" << std::endl;
        }
};

int main(){
    Application app;

    StandardEngine* sEngine = new StandardEngine;
    EconomicEngine* eEngine = new EconomicEngine;
    ElectricConcreteEngine* evEngine = new ElectricConcreteEngine;

    EngineAdapter* adaptedEngine = new EngineAdapter(evEngine);

    app.executeEngineTest(sEngine);
    app.executeEngineTest(eEngine);
    app.executeEngineTest(adaptedEngine);

    delete sEngine;
    delete eEngine;
    delete evEngine;
    delete adaptedEngine;
    return 0;
}