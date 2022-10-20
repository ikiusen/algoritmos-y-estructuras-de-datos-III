#include <Ticket.h>

Ticket::Ticket() {}

Ticket::Ticket(int id, std::shared_ptr<IClient> client, std::shared_ptr<IAgent> agent, std::string message, std::string creationDate)
{
    setId(id);
    setClient(client);
    setAgent(agent);
    setMessage(message);
    setCreationDate(creationDate);
}
Ticket::~Ticket() {}

void Ticket::setId(int id)
{
    m_id = id;
}
int Ticket::getId()
{
    return m_id;
}
void Ticket::setClient(std::shared_ptr<IClient> client)
{
    m_client = client;
}
std::shared_ptr<IClient> Ticket::getClient()
{
    return m_client;
}
void Ticket::setAgent(std::shared_ptr<IAgent> agent)
{
    m_agent = agent;
}
std::shared_ptr<IAgent> Ticket::getAgent()
{
    return m_agent;
}
void Ticket::setMessage(std::string message)
{
    m_message = message;
}
std::string Ticket::getMessage()
{
    return m_message;
}
void Ticket::setCreationDate(std::string creationDate)
{
    m_creationDate = creationDate;
}
std::string Ticket::getCreationDate()
{
    return m_creationDate;
}