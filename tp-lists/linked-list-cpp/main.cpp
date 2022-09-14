#include <iostream>
#include <LinkedList.h>

int main()
{
	LinkedList list;

	Patient *patient_1 = new Patient("Jorge", "Perez", "34234982");
	Patient *patient_2 = new Patient("Miguel", "Rodriguez", "23924772");
	Patient *patient_3 = new Patient("Clara", "Castelli", "33444772");
	Patient *patient_4 = new Patient("Felipe", "Rodriguez", "31924322");

	Patient *edited_patient = new Patient("Carlos", "Rodriguez", "31924322");

	list.insertNode(patient_1);
	list.insertNode(patient_2);
	list.insertNode(patient_3);
	list.insertNode(patient_4);

	std::cout << "Elements of the list are: " << std::endl;
	list.printList();
	std::cout << std::endl;

	std::cout << "Deleting node at position 2... " << std::endl;
	list.deleteNode(2);

	std::cout << "Now elements of the list are: " << std::endl;
	list.printList();
	std::cout << std::endl;

	std::cout << "Editing node... " << std::endl;
	list.editNode(patient_3, edited_patient);

	std::cout << "Now elements of the list are: " << std::endl;
	list.printList();
	std::cout << std::endl;

	return 0;
}