#ifndef SERVICERECORD_H
#define SERVICERECORD_H
#include <memory>
#include <Client.h>
class ServiceRecord
{
private:
    std::shared_ptr<Client> m_client;
    std::string m_serviceType;
    
public:
    ServiceRecord();
    ServiceRecord(std::shared_ptr<Client>  client, std::string serviceType);
    ~ServiceRecord();
    void showServiceRecord();
    void showServices();
};

#endif