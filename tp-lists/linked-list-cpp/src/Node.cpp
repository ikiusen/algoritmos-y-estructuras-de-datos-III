#include <Node.h>

Node::Node()
{
    this->patient = new Patient();
    this->next = NULL;
}

Node::Node(Patient *patient)
{
    this->patient = patient;
    this->next = NULL;
}
