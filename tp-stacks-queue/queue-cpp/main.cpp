#include <iostream>
#include <Queue.h>
#include <Client.h>
int main()
{
    Queue client_queue;
    std::cout << "Registrando clientes..." << std::endl;
    client_queue.push(new Client("Carlos", "Perez"));
    client_queue.push(new Client("Juan", "Rodriguez"));
    client_queue.push(new Client("Maria", "Rodriguez"));
    client_queue.push(new Client("Pedro", "Gutierrez"));
    client_queue.showQueue();
    std::cout << "Atendiendo clientes..." << std::endl;
    client_queue.pop();
    client_queue.pop();
    std::cout << "Clientes restantes..." << std::endl;
    client_queue.showQueue();
    return 0;
}