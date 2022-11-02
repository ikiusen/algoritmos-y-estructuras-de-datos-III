#include <TicketManager.h>

TicketManager::TicketManager() {}

TicketManager::~TicketManager() {}

void TicketManager::addTicketToList(std::shared_ptr<Ticket> ticket)
{
    ticketList.push_back(ticket);
}

int TicketManager::findTicket(int id)
{
    int elementPosition = -1;
    for (unsigned int i = 0; i < ticketList.size(); i++)
    {
        if (ticketList[i]->getId() == id)
        {
            elementPosition = i;
        }
    }
    return elementPosition;
}

void TicketManager::createTicket(int id, std::shared_ptr<Client> client, std::shared_ptr<Agent> agent, std::string message, std::string creationDate)
{
    std::shared_ptr<Ticket> ticket = std::make_shared<Ticket>(id, client, agent, message, creationDate);
    addTicketToList(ticket);
}

void TicketManager::deleteTicket(int id)
{
    int ticketPosition = findTicket(id);
    if (ticketPosition != -1)
    {
        ticketList.erase(ticketList.begin() + ticketPosition);
    }
}

void TicketManager::updateTicket(int id, std::shared_ptr<Ticket> ticket)
{
    int ticketPosition = findTicket(id);
    if (ticketPosition != -1)
    {
        ticketList.at(ticketPosition) = ticket;
    }
}

void TicketManager::getTickets()
{
    for (std::shared_ptr<Ticket> element : ticketList)
    {
        std::cout << element->getId() << " " << element->getClient()->getName() << " " << element->getAgent()->getName() << " " << element->getMessage() << std::endl;
        std::cout << " " << std::endl;
    }
}