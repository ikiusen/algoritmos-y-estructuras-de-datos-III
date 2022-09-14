#include <Node.h>

Node::Node()
{
    this->client = new Client();
    this->next = NULL;
}

Node::Node(Client *client)
{
    this->client = client;
    this->next = NULL;
}
