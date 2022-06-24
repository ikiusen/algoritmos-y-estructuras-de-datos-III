:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\OCFString.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ OCFString.o main.o -o test-string.exe

:: Limpio los códigos objeto
DEL .\*.o