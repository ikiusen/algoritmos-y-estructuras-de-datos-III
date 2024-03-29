#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "../vendors/nlohmann/json.hpp"
class Client
{
private:
    int id;
    std::string name;
    std::string surname;
    std::string dni;
    std::string email;

public:
    Client();
    Client(int id, std::string name, std::string surname, std::string dni, std::string email);
    ~Client();
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

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Client, name, surname, dni, email);
};
#endif