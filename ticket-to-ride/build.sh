
#!/bin/bash

## Compilo el Binario
g++ -Wall -std=c++11 -I./include/ -c ./src/Client.cpp
g++ -Wall -std=c++11 -I./include/ -c ./src/ClientManager.cpp
g++ -Wall -std=c++11 -I./include/ -c ./src/Agent.cpp
g++ -Wall -std=c++11 -I./include/ -c ./src/AgentManager.cpp
g++ -Wall -std=c++11 -I./include/ -c ./src/Ticket.cpp
g++ -Wall -std=c++11 -I./include/ -c ./src/TicketManager.cpp
g++ -Wall -std=c++11 -I./include/ -c main.cpp

g++ Client.o ClientManager.o Agent.o AgentManager.o Ticket.o TicketManager.o main.o -o ticket-to-ride.bin

## Limpio los códigos objeto
rm ./*.o