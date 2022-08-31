#include <Patient.h>

Patient::Patient() {
    this->_name = "";
    this->_surname ="";
    this->_dni="";
}
Patient::Patient(std::string name, std::string surname, std::string dni) {
    this->_name = name;
    this->_surname = surname;
    this->_dni = dni;
}
std::string Patient::getPatientData() {
    std::string patientData;
    patientData = "Name: " + this->_name + " Surname: " + this->_surname + " DNI: " + this->_dni;
    return patientData;
}