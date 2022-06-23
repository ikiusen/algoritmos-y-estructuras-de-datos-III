#!/bin/bash

## Compilo el Binario
g++ -Wall -std=c++11 -I./include/ -c ./src/Hotel.cpp
g++ -Wall -std=c++11 -I./include/ -c ./src/Decorator.cpp
g++ -Wall -std=c++11 -I./include/ -c ./src/HostelDecorator.cpp
g++ -Wall -std=c++11 -I./include/ -c ./src/SpaDecorator.cpp
g++ -Wall -std=c++11 -I./include/ -c main.cpp

g++ Hotel.o Decorator.o HostelDecorator.o SpaDecorator.o main.o -o decorator.bin

## Limpio los códigos objeto
rm ./*.o