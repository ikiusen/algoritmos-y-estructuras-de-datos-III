#ifndef COMPANY_H
#define COMPANY_H
#include <queue>
#include <vector>
#include <memory>
#include <ServiceRecord.h>
#include <Client.h>
class Company
{
private:
    std::queue<std::shared_ptr<Client>> clientQueue;
    std::vector<std::shared_ptr<ServiceRecord>> recordList;
    std::vector<std::string> m_services = {"Cambio de Aceite", "Cambio de filtros", "Control de cubiertas", "Limpieza de motor"};
public:
    Company();
    ~Company();
    void recieveClient(std::shared_ptr<Client> patient, int test);
    void createServiceRecord(std::shared_ptr<Client> patient, std::string test);
    void attend();
    void showServices();
};
#endif
