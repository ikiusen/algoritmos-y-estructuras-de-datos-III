#include <Client.h>

Client::Client(){};

Client::Client(int id, std::string name, std::string surname, std::string dni, std::string email)
{
    setId(id);
    setName(name);
    setSurname(surname);
    setDNI(dni);
    setEmail(email);
}

Client::~Client(){};

void Client::setId(int id)
{
    this->id = id;
}

int Client::getId()
{
    return id;
}

void Client::setName(std::string name)
{
    this->name = name;
}

std::string Client::getName()
{
    return name;
}

void Client::setSurname(std::string surname)
{
    this->surname = surname;
}

std::string Client::getSurname()
{
    return surname;
}

void Client::setDNI(std::string dni)
{
    this->dni = dni;
}

std::string Client::getDNI()
{
    return dni;
}

void Client::setEmail(std::string email)
{
    this->email = email;
}
std::string Client::getEmail()
{
    return email;
}