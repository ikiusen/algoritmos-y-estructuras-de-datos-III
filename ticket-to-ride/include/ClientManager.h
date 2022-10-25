#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H
#include <vector>
#include <memory>
#include <fstream>
#include <Client.h>
class ClientManager
{
private:
    std::vector<std::shared_ptr<IClient>> clientList;

public:
    ClientManager();
    ~ClientManager();
    void addClientToList(std::shared_ptr<IClient> client);
    int findClient(int id);
    void createClient(int id, std::string name, std::string surname, std::string dni, std::string email);
    void deleteClient(int id);
    void updateClient(int id, std::shared_ptr<IClient> client);
    void getClients();
    std::shared_ptr<IClient> getClientById(int id);
};
#endif