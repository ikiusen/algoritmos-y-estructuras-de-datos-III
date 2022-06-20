:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\CarStrategy.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\PedestrianStrategy.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\PublicTransportStrategy.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\Navigator.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ CarStrategy.o PedestrianStrategy.o PublicTransportStrategy.o Navigator.o main.o -o strategy.exe

:: Limpio los códigos objeto
DEL .\*.o