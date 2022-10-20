#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H
#include <vector>
#include <memory>
#include <Ticket.h>
class TicketManager
{
private:
    std::vector<std::shared_ptr<Ticket>> ticketList;

public:
    TicketManager();
    ~TicketManager();
    void addTicketToList(std::shared_ptr<Ticket> ticket);
    int findTicket(int id);
    void createTicket(int id, std::shared_ptr<IClient> client, std::shared_ptr<IAgent> agent, std::string message, std::string creationDate);
    void deleteTicket(int id);
    void updateTicket(int id, std::shared_ptr<Ticket> ticket);
    void getTickets();
};
#endif