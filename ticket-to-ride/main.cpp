#include <iostream>
#include <fstream>
#include <ClientManager.h>
#include <IClient.h>
#include <AgentManager.h>
#include <IAgent.h>
#include <TicketManager.h>
#include <Ticket.h>

int main()
{
    ClientManager cManager;
    cManager.createClient(1, "Thiago", "Cabrera", "42366235", "@gmail.com");
    cManager.createClient(2, "Laureano", "Cabrera", "1245546", "@gmail.com");

    std::cout<< "How the CLIENT vector starts: " << std::endl;
    cManager.getClients();
    cManager.deleteClient(1);
    std::cout << "After deletion: " << std::endl;
    cManager.getClients();
    std::shared_ptr<IClient> cli = std::make_shared<Client>(2, "Facundo", "Cabrera", "1245546", "@gmail.com");
    cManager.updateClient(2, cli);
    std::cout << "After update: " << std::endl;
    cManager.getClients();

    AgentManager aManager;
    aManager.createAgent(1, "Jorge", "Perez", "565454","@gmail.com", "Soporte");
    aManager.createAgent(2, "Roberto", "Gutierrez", "5234254","@gmail.com", "Soporte");

    std::cout<< "How the AGENT vector starts: " << std::endl;
    aManager.getAgents();
    aManager.deleteAgent(2);
    std::cout << "After deletion: " << std::endl;
    aManager.getAgents();
    std::shared_ptr<IAgent> age = std::make_shared<Agent>(1, "Graciela", "Lopez", "1245546", "@gmail.com", "Soporte");
    aManager.updateAgent(1, age);
    std::cout << "After update: " << std::endl;
    aManager.getAgents();

    TicketManager tManager;
    tManager.createTicket(1, cManager.getClientById(2), aManager.getAgentById(1), "Test ticket", "20221019");
    std::cout << "Ticket data: " << std::endl;
    tManager.getTickets();

    return 0;
}