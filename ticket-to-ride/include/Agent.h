#ifndef AGENT_H
#define AGENT_H
#include <IAgent.h>
#include "../vendors/nlohmann/json.hpp"
class Agent : public IAgent
{
private:
    int id;
    std::string name;
    std::string surname;
    std::string dni;
    std::string email;
    std::string department;

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

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Agent, id, name, surname, dni, email, department);
};
#endif