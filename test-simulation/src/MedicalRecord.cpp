#include <MedicalRecord.h>


MedicalRecord::MedicalRecord()
{
}

MedicalRecord::MedicalRecord(std::shared_ptr<Patient> patient, std::string company, std::string medicalTest)
{
    m_patient = patient;
    m_company = company;
    m_medicalTest = medicalTest;
}


MedicalRecord::~MedicalRecord()
{
}

void MedicalRecord::showMedicalRecord()
{
    std::cout << "Patient: " << m_patient->getPatientData() << std::endl;
    std::cout << "Company: " << m_company << std::endl;
    std::cout << "Medical test apointed: " << m_medicalTest << std::endl;
}