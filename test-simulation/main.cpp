#include <iostream>
#include <Clinic.h>

int main()
{
    Clinic clinic;
    std::shared_ptr<Patient> p1 = std::make_shared<Patient>("Thiago", "Cabrera");
    std::shared_ptr<Patient> p2 = std::make_shared<Patient>("Jose", "Perez");

    std::cout << "Registering patients.." << std::endl;
    clinic.recievePatient(p1, "Pepito S.A", "Preocupacional");
    clinic.recievePatient(p2, "Pepito S.A", "Control");

    std::cout << "Atending patients..." << std::endl;
    clinic.attend();
}