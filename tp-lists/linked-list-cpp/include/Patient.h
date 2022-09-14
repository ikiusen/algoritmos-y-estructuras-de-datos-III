#ifndef PATIENT_H
#define PATIENT_H
#include <string>
class Patient
{
private:
    std::string _name;
    std::string _surname;
    std::string _dni;

public:
    Patient();
    Patient(std::string name, std::string surname, std::string dni);
    std::string getPatientData();
};
#endif