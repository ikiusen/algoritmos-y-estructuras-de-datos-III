#ifndef QUEUE_H
#define QUEUE_H
#include <Node.h>
#include <Client.h>
class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue();
    void push(Client *client);
    void pop();
    std::string getFront();
    std::string getRear();
    void showQueue();
};
#endif