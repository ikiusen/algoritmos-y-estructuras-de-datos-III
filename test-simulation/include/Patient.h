#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
class Patient
{
private:
	std::string _name;
	std::string _surname;

public:
	Patient();
	Patient(std::string name, std::string surname);
	~Patient();
	std::string getPatientData();
};
#endif