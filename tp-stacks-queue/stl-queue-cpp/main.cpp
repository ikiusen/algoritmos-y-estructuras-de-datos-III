#include <iostream>
#include <string>
#include <queue>
#include <Client.h>

void showQueue(std::queue<Client*> queue)
{
    std::cout << "Clientes en espera: " << queue.size() << std::endl;
    while (!queue.empty())
    {
        std::cout << queue.front()->getClientData() << ", ";
        queue.pop();
        std::cout << std::endl;
    }
}

void processQueue(std::queue<Client*> *queue)
{
    int queueSize = queue->size();
    std::cout << "Atendiendo clientes..." << std::endl;
    while (!queue->empty())
    {
        std::cout << queue->front()->getClientData() << " BOX 1";
        queue->pop();
        std::cout << std::endl;
    }
    std::cout << "Se han atendido " << queueSize << " clientes" << std::endl;
}
int main()
{
    std::queue<Client*> client_queue;
    std::cout << "Registrando clientes..." << std::endl;
    client_queue.push(new Client("Carlos", "Perez"));
    client_queue.push(new Client("Juan", "Rodriguez"));
    client_queue.push(new Client("Maria", "Rodriguez"));
    client_queue.push(new Client("Pedro", "Gutierrez"));
    showQueue(client_queue);
    processQueue(&client_queue);
    showQueue(client_queue);
    return 0;
}