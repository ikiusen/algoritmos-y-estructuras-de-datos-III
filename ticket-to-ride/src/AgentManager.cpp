#include <AgentManager.h>

AgentManager::AgentManager(){};

AgentManager::~AgentManager(){};

void AgentManager::addAgentToList(std::shared_ptr<IAgent> agent)
{
    agentList.push_back(agent);
}

int AgentManager::findAgent(int id)
{
    int elementPosition = -1;
    for (unsigned int i = 0; i < agentList.size(); i++)
    {
        if (agentList[i]->getId() == id)
        {
            elementPosition = i;
        }
    }
    return elementPosition;
}

void AgentManager::createAgent(int id, std::string name, std::string surname, std::string dni, std::string email, std::string department)
{
    std::shared_ptr<IAgent> agent = std::make_shared<Agent>(id, name, surname, dni, email, department);
    addAgentToList(agent);
}

void AgentManager::deleteAgent(int id)
{
    int agentPosition = findAgent(id);
    if (agentPosition != -1)
    {
        agentList.erase(agentList.begin() + agentPosition);
    }
}

void AgentManager::updateAgent(int id, std::shared_ptr<IAgent> agent)
{
    int agentPosition = findAgent(id);
    if (agentPosition != -1)
    {
        agentList.at(agentPosition) = agent;
    }
}

void AgentManager::getAgents()
{
    for (std::shared_ptr<IAgent> element : agentList)
    {
        std::cout << element->getId() << " " << element->getName() << " " << element->getSurname() << " " << element->getDepartment() << std::endl;
        std::cout << " " << std::endl;
    }
}

std::shared_ptr<IAgent> AgentManager::getAgentById(int id)
{
    int agentPosition = findAgent(id);
    if (agentPosition != -1)
    {
        //fix warning
        return agentList.at(agentPosition);
    }
}