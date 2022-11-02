#include <ClientManager.h>

ClientManager::ClientManager(){};

ClientManager::~ClientManager(){};

void ClientManager::addClientToList(std::shared_ptr<Client> client)
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
    std::shared_ptr<Client> client = std::make_shared<Client>(id, name, surname, dni, email);
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

void ClientManager::updateClient(int id, std::shared_ptr<Client> client)
{
    int clientPosition = findClient(id);
    if (clientPosition != -1)
    {
        clientList.at(clientPosition) = client;
    }
}

void ClientManager::getClients()
{
    for (std::shared_ptr<Client> element : clientList)
    {
        std::cout << element->getId() << " " << element->getName() << " " << element->getSurname() << std::endl;
        std::cout << " " << std::endl;
    }
}

std::shared_ptr<Client> ClientManager::getClientById(int id)
{
    std::shared_ptr<Client> client = nullptr;
    int clientPosition = findClient(id);
    if (clientPosition != -1)
    {
        client = clientList.at(clientPosition);
    }
    return client;
}

void ClientManager::readFromJson(std::string filepath)
{
    //ESTO SE PUEDE RESOLVER TENIENDO LA INTERFAZ
    // works with concrete class only
    std::vector<Client> auxList;
    std::ifstream file(filepath);
    json data = json::parse(file);
    data.at("clients").get_to(auxList);
    for (unsigned int i = 0; i < auxList.size(); i++)
    {
        createClient(i, auxList[i].getName(), auxList[i].getSurname(), auxList[i].getDNI(), auxList[i].getEmail());
    }
}

void ClientManager::writeToJson(std::string filepath)
{
}
