:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\Patient.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ Patient.o main.o -o stl-linked-list.exe

:: Limpio los códigos objeto
DEL .\*.o