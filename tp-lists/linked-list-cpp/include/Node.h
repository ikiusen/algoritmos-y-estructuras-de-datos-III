#ifndef NODE_H
#define NODE_H
#include <Patient.h>
class Node
{
public:
    Patient *patient;
    Node *next;

    Node();
    Node(Patient *patient);
};
#endif