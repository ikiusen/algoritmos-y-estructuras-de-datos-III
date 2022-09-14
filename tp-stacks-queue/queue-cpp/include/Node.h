#ifndef NODE_H
#define NODE_H
#include <Client.h>
class Node
{
public:
    Client *client;
    Node *next;

    Node();
    Node(Client *client);
};
#endif