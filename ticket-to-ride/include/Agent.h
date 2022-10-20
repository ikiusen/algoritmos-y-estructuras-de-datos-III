#ifndef AGENT_H
#define AGENT_H
#include <IAgent.h>
class Agent : public IAgent
{
private:
    int m_id;
    std::string m_name;
    std::string m_surname;
    std::string m_dni;
    std::string m_email;
    std::string m_department;

public:
    Agent();
    Agent(int id, std::string name, std::string surname, std::string dni, std::string email, std::string department);
    ~Agent();
    void setId(int id);
    int getId();
    void setName(std::string name);
    std::string getName();
    void setSurname(std::string surname);
    std::string getSurname();
    void setDNI(std::string dni);
    std::string getDNI();
    void setEmail(std::string email);
    std::string getEmail();
    void setDepartment(std::string department);
    std::string getDepartment();
};
#endif