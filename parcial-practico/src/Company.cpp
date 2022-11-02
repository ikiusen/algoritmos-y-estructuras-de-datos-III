#include <Company.h>

Company::Company(/* args */)
{
}

Company::~Company()
{
}

void Company::recieveClient(std::shared_ptr<Client> client, int test)
{
    clientQueue.push(client);
    createServiceRecord(client, m_services[test]);
}

void Company::createServiceRecord(std::shared_ptr<Client> client, std::string test)
{
    std::shared_ptr<ServiceRecord> record = std::make_shared<ServiceRecord>(client, test);
    recordList.push_back(record);
    std::cout << "Ficha de atencion creada!" << std::endl;
}

void Company::attend()
{
    for(unsigned int i = 0; i < recordList.size(); i++)
    {
        recordList[i]->showServiceRecord();
        clientQueue.pop();
    }
}

void Company::showServices()
{
    for(unsigned int i = 0; i < m_services.size(); i++)
    {
        std::cout << "  " << m_services[i] << std::endl;
    }
    std::cout << " " << std::endl;
}