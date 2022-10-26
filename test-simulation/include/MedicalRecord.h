#ifndef MEDICALRECORD_H
#define MEDICALRECORD_H
#include <memory>
#include <Patient.h>
class MedicalRecord
{
private:
    std::shared_ptr<Patient> m_patient;
    std::string m_company;
    std::string m_medicalTest;
public:
    MedicalRecord();
    MedicalRecord(std::shared_ptr<Patient>  patient, std::string company, std::string medicalTest);
    ~MedicalRecord();
    void showMedicalRecord();
};

#endif