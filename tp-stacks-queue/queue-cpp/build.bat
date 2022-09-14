:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\Client.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\Node.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\Queue.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ Client.o Node.o Queue.o main.o -o queue.exe

:: Limpio los códigos objeto
DEL .\*.o