:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\StandardEngine.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\EconomicEngine.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ElectricConcreteEngine.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\EngineAdapter.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\Application.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ StandardEngine.o EconomicEngine.o ElectricConcreteEngine.o EngineAdapter.o Application.o main.o -o adapter.exe

:: Limpio los códigos objeto
DEL .\*.o