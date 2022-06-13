:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\ArtDecoChair.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ArtDecoCoffeeTable.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ArtDecoSofa.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ArtDecoFurnitureFactory.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ModernChair.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ModernCoffeeTable.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ModernSofa.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ModernFurnitureFactory.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\VictorianChair.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\VictorianCoffeeTable.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\VictorianSofa.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\VictorianFurnitureFactory.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\FurnitureStore.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ ArtDecoChair.o ArtDecoCoffeeTable.o ArtDecoSofa.o ArtDecoFurnitureFactory.o ModernChair.o ModernCoffeeTable.o ModernSofa.o ModernFurnitureFactory.o VictorianChair.o VictorianCoffeeTable.o VictorianSofa.o VictorianFurnitureFactory.o FurnitureStore.o main.o -o abstract-factory.exe

:: Limpio los códigos objeto
DEL .\*.o