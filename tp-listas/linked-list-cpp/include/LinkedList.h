#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <Node.h>
class LinkedList {
    private:
        Node* head;
    public:
	    LinkedList();
	    void insertNode(Patient*);
	    void printList();
	    void deleteNode(int);
		void editNode(Patient*, Patient*);
};
#endif