#include <iostream>
#include <LinkedList.h>

LinkedList::LinkedList() {
    this->head = NULL;
}

void LinkedList::insertNode(Patient* patient) {

	Node* newNode = new Node(patient);

	if (head == NULL) {
		head = newNode;
		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {

		// Update temp
		temp = temp->next;
	}

	temp->next = newNode;
}

void LinkedList::printList() {
	Node* temp = head;

	// Check for empty list.
	if (head == NULL) {
		std::cout << "List empty" << std::endl;
		return;
	}

	// Traverse the list.
	while (temp != NULL) {
		std::cout << temp->patient->getPatientData() << std::endl;
		temp = temp->next;
	}
}

void LinkedList::deleteNode(int nodeOffset) {
	Node *temp1 = head, *temp2 = NULL;
	int ListLen = 0;

	if (head == NULL) {
		std::cout << "List empty." << std::endl;
		return;
	}

	// Find length of the linked-list.
	while (temp1 != NULL) {
		temp1 = temp1->next;
		ListLen++;
	}

	// Check if the position to be
	// deleted is less than the length
	// of the linked list.
	if (ListLen < nodeOffset) {
		std::cout << "Index out of range"
			<< std::endl;
		return;
	}

	// Declare temp1
	temp1 = head;

	// Deleting the head.
	if (nodeOffset == 1) {

		// Update head
		head = head->next;
		delete temp1;
		return;
	}

	// Traverse the list to
	// find the node to be deleted.
	while (nodeOffset-- > 1) {

		// Update temp2
		temp2 = temp1;

		// Update temp1
		temp1 = temp1->next;
	}

	// Change the next pointer
	// of the previous node.
	temp2->next = temp1->next;

	// Delete the node
	delete temp1;
}

void LinkedList::editNode(Patient* old_patient, Patient* new_patient) {
	Node *temp = head;

	if (head == NULL) {
		std::cout << "List empty." << std::endl;
		return;
	}

	while (temp->next != NULL) {
		if (temp->patient->getPatientData() == old_patient->getPatientData()) {
			temp->patient = new_patient;
			return;
		}
		temp = temp->next;
	}
	std::cout << "Patient not found!" << std::endl;
}