:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\Hotel.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\Decorator.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\HostelDecorator.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\SpaDecorator.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ Hotel.o Decorator.o HostelDecorator.o SpaDecorator.o main.o -o decorator.exe

:: Limpio los códigos objeto
DEL .\*.o