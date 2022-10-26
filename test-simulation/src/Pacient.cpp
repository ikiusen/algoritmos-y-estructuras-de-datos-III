#include <Patient.h>

Patient::Patient(){};

Patient::Patient(std::string name, std::string surname)
{
	_name = name;
	_surname = surname;
}

Patient::~Patient(){};

std::string Patient::getPatientData()
{
	std::string patientData;
	patientData = _name + " " + _surname;
	return patientData;
}