:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\Patient.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\Node.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\LinkedList.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ Patient.o Node.o LinkedList.o main.o -o linked-list.exe

:: Limpio los códigos objeto
DEL .\*.o