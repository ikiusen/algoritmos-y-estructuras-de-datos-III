#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H
#include <vector>
#include <memory>
#include <fstream>
#include <Client.h>
#include <IJsonHandler.h>
class ClientManager : public IJsonHandler
{
private:
    std::vector<std::shared_ptr<Client>> clientList;

public:
    ClientManager();
    ~ClientManager();
    void addClientToList(std::shared_ptr<Client> client);
    int findClient(int id);
    void createClient(int id, std::string name, std::string surname, std::string dni, std::string email);
    void deleteClient(int id);
    void updateClient(int id, std::shared_ptr<Client> client);
    void getClients();
    std::shared_ptr<Client> getClientById(int id);
    void readFromJson(std::string filepath);
    void writeToJson(std::string filepath);
};
#endif