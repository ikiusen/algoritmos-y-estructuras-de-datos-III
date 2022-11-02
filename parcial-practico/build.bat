:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\Vehicle.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\Client.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ServiceRecord.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\Company.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ Vehicle.o Client.o ServiceRecord.o  Company.o main.o -o neumatic-company.exe

:: Limpio los códigos objeto
DEL .\*.o