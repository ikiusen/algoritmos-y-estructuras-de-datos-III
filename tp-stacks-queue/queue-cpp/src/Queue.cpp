#include <Queue.h>
#include <iostream>

Queue::Queue()
{
    front = rear = NULL;
}

void Queue::push(Client *client)
{
    Node *temp = new Node(client);

    if (rear == NULL)
    {
        front = rear = temp;
        return;
    }

    rear->next = temp;
    rear = temp;
}

void Queue::pop()
{
    if (front == NULL)
        return;

    Node *temp = front;
    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete (temp);
}

std::string Queue::getFront()
{
    return front->client->getClientData();
}

std::string Queue::getRear()
{
    return rear->client->getClientData();
}

void Queue::showQueue()
{
    if (front == NULL)
        return;

    Node *temp = front;
    while (temp != NULL)
    {
        std::cout << temp->client->getClientData() << std::endl;
        temp = temp->next;
    }
}