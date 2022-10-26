#include <Clinic.h>

Clinic::Clinic(/* args */)
{
}

Clinic::~Clinic()
{
}

void Clinic::recievePatient(std::shared_ptr<Patient> patient, std::string company, std::string test)
{
    patientQueue.push(patient);
    createMedicalRecord(patient, company, test);
}

void Clinic::createMedicalRecord(std::shared_ptr<Patient> patient, std::string company, std::string test)
{
    std::shared_ptr<MedicalRecord> record = std::make_shared<MedicalRecord>(patient, company, test);
    recordList.push_back(record);
    std::cout << "Record added, please wait.." << std::endl;
}

void Clinic::attend()
{
    for(unsigned int i = 0; i < recordList.size(); i++)
    {
        recordList[i]->showMedicalRecord();
        patientQueue.pop();
    }
}