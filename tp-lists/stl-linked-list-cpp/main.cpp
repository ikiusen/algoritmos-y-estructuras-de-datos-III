#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>
#include <Patient.h>

void showList(std::list<Patient *> list)
{
    std::list<Patient *>::iterator iterator;
    std::cout << "The contents of the list are: " << std::endl;
    for (iterator = list.begin(); iterator != list.end(); ++iterator)
        std::cout << (*iterator)->getPatientData() << std::endl;
}

void updateList(std::list<Patient *> *list, Patient *old_patient, Patient *new_patient)
{
    std::list<Patient *>::iterator iterator;
    for (iterator = list->begin(); iterator != list->end(); ++iterator)
    {
        if ((*iterator)->getPatientData() == old_patient->getPatientData())
        {
            *iterator = new_patient;
            return;
        }
    }
    std::cout << "Patient not found!" << std::endl;
}

int main()
{
    std::list<Patient *> patient_list;

    Patient *patient_1 = new Patient("Jorge", "Perez", "34234982");
    Patient *patient_2 = new Patient("Miguel", "Rodriguez", "23924772");
    Patient *patient_3 = new Patient("Clara", "Castelli", "33444772");
    Patient *patient_4 = new Patient("Felipe", "Rodriguez", "31924322");
    Patient *patient_5 = new Patient("Roberto", "Rodriguez", "31924322");

    std::cout << "Inserting into list.." << std::endl;
    patient_list.push_back(patient_1);
    patient_list.push_back(patient_2);
    patient_list.push_back(patient_3);
    patient_list.push_back(patient_4);

    showList(patient_list);
    std::cout << " " << std::endl;

    std::cout << "Removing patient from list.." << std::endl;
    patient_list.remove(patient_1);

    showList(patient_list);
    std::cout << " " << std::endl;

    std::cout << "Updating patient from list.." << std::endl;
    updateList(&patient_list, patient_3, patient_5);

    showList(patient_list);

    return 0;
}
