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
    m_id = id;
}

int Client::getId()
{
    return m_id;
}

void Client::setName(std::string name)
{
    m_name = name;
}

std::string Client::getName()
{
    return m_name;
}

void Client::setSurname(std::string surname)
{
    m_surname = surname;
}

std::string Client::getSurname()
{
    return m_surname;
}

void Client::setDNI(std::string dni)
{
    m_dni = dni;
}

std::string Client::getDNI()
{
    return m_dni;
}

void Client::setEmail(std::string email)
{
    m_email = email;
}
std::string Client::getEmail()
{
    return m_email;
}