:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\Client.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ClientManager.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\Agent.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\AgentManager.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\Ticket.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\TicketManager.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ Client.o ClientManager.o Agent.o AgentManager.o Ticket.o TicketManager.o main.o -o ticket-to-ride.exe

:: Limpio los códigos objeto
DEL .\*.o