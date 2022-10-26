
#!/bin/bash

## Compilo el Binario
g++ -Wall -std=c++11 -I./include/ -c ./src/Pacient.cpp
g++ -Wall -std=c++11 -I./include/ -c ./src/MedicalRecord.cpp
g++ -Wall -std=c++11 -I./include/ -c ./src/Clinic.cpp
g++ -Wall -std=c++11 -I./include/ -c main.cpp

g++ Pacient.o MedicalRecord.o  Clinic.o main.o -o clinic.bin

## Limpio los códigos objeto
rm ./*.o