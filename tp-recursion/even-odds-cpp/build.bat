:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ main.o -o odd-even.exe

:: Limpio los códigos objeto
DEL .\*.o