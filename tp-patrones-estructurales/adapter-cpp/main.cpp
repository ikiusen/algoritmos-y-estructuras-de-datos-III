#include <iostream>
#include <Application.h>
#include <EconomicEngine.h>
#include <ElectricConcreteEngine.h>
#include <EngineAdapter.h>
#include <StandardEngine.h>

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