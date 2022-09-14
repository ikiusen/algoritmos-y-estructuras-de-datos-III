:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\Client.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ Client.o main.o -o stl-queue.exe

:: Limpio los códigos objeto
DEL .\*.o