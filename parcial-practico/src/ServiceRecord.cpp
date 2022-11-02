#include <ServiceRecord.h>


ServiceRecord::ServiceRecord()
{
}

ServiceRecord::ServiceRecord(std::shared_ptr<Client> client, std::string serviceType)
{
    m_client = client;
    m_serviceType = serviceType;
}


ServiceRecord::~ServiceRecord()
{
}

void ServiceRecord::showServiceRecord()
{
    std::cout << "   " << std::endl;
    m_client->getClientData();
    std::cout << "   Servicio a realizar: " << m_serviceType << std::endl;
    std::cout << "   " << std::endl;
}