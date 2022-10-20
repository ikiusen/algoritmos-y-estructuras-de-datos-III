#ifndef AGENTMANAGER_H
#define AGENTMANAGER_H
#include <vector>
#include <memory>
#include <Agent.h>
class AgentManager
{
private:
    std::vector<std::shared_ptr<IAgent>> agentList;

public:
    AgentManager();
    ~AgentManager();
    void addAgentToList(std::shared_ptr<IAgent> agent);
    int findAgent(int id);
    void createAgent(int id, std::string name, std::string surname, std::string dni, std::string email, std::string department);
    void deleteAgent(int id);
    void updateAgent(int id, std::shared_ptr<IAgent> agent);
    std::shared_ptr<IAgent> getAgentById(int id);
    void getAgents();
};
#endif