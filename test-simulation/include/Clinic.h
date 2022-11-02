#ifndef CLINIC_H
#define CLINIC_H
#include <queue>
#include <vector>
#include <memory>
#include <MedicalRecord.h>
#include <Patient.h>
class Clinic
{
private:
    std::queue<std::shared_ptr<Patient>> patientQueue;
    std::vector<std::shared_ptr<MedicalRecord>> recordList;
public:
    Clinic();
    ~Clinic();
    void recievePatient(std::shared_ptr<Patient> patient, std::string company, std::string test);
    void createMedicalRecord(std::shared_ptr<Patient> patient, std::string company, std::string test);
    void attend();
};
#endif
