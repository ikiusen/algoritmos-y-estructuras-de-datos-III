#ifndef TICKET_H
#define TICKET_H
#include <iostream>
#include <memory>
#include <Client.h>
#include <Agent.h>
class Ticket
{
private:
    int m_id;
    std::shared_ptr<Client> m_client;
    std::shared_ptr<Agent> m_agent;
    std::string m_message;
    std::string m_creationDate;

public:
    Ticket();
    Ticket(int id, std::shared_ptr<Client> client, std::shared_ptr<Agent> agent, std::string message, std::string creationDate);
    ~Ticket();
    void setId(int id);
    int getId();
    void setClient(std::shared_ptr<Client> client);
    std::shared_ptr<Client> getClient();
    void setAgent(std::shared_ptr<Agent> agent);
    std::shared_ptr<Agent> getAgent();
    void setMessage(std::string message);
    std::string getMessage();
    void setCreationDate(std::string creationDate);
    std::string getCreationDate();
};
#endif