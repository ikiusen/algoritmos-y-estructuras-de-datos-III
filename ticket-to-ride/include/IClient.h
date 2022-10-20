#ifndef ICLIENT_H
#define ICLIENT_H
#include <iostream>
class IClient
{
public:
    virtual void setId(int id) = 0;
    virtual int getId() = 0;
    virtual void setName(std::string name) = 0;
    virtual std::string getName() = 0;
    virtual void setSurname(std::string surname) = 0;
    virtual std::string getSurname() = 0;
    virtual void setDNI(std::string dni) = 0;
    virtual std::string getDNI() = 0;
    virtual void setEmail(std::string email) = 0;
    virtual std::string getEmail() = 0;
};
#endif