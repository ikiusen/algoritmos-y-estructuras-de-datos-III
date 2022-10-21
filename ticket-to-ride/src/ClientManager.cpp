#include <ClientManager.h>

ClientManager::ClientManager(){};

ClientManager::~ClientManager(){};

void ClientManager::addClientToList(std::shared_ptr<IClient> client)
{
    clientList.push_back(client);
}

int ClientManager::findClient(int id)
{
    int elementPosition = -1;
    for (unsigned int i = 0; i < clientList.size(); i++)
    {
        if (clientList[i]->getId() == id)
        {
            elementPosition = i;
        }
    }
    return elementPosition;
}

void ClientManager::createClient(int id, std::string name, std::string surname, std::string dni, std::string email)
{
    std::shared_ptr<IClient> client = std::make_shared<Client>(id, name, surname, dni, email);
    addClientToList(client);
}

void ClientManager::deleteClient(int id)
{
    int clientPosition = findClient(id);
    if (clientPosition != -1)
    {
        clientList.erase(clientList.begin() + clientPosition);
    }
}

void ClientManager::updateClient(int id, std::shared_ptr<IClient> client)
{
    int clientPosition = findClient(id);
    if (clientPosition != -1)
    {
        clientList.at(clientPosition) = client;
    }
}

void ClientManager::getClients()
{
    for (std::shared_ptr<IClient> element : clientList)
    {
        std::cout << element->getId() << " " << element->getName() << " " << element->getSurname() << std::endl;
        std::cout << " " << std::endl;
    }
}

std::shared_ptr<IClient> ClientManager::getClientById(int id)
{
    std::shared_ptr<IClient> client = nullptr;
    int clientPosition = findClient(id);
    if (clientPosition != -1)
    {
        //fix warning
        client = clientList.at(clientPosition);
    }
    return client;
}

void ClientManager::readFromJson()
{
}

void ClientManager::writeToJson()
{
}