#include <Agent.h>

Agent::Agent(){};

Agent::Agent(int id, std::string name, std::string surname, std::string dni, std::string email, std::string department)
{
    setId(id);
    setName(name);
    setSurname(surname);
    setDNI(dni);
    setEmail(email);
    setDepartment(department);
}

Agent::~Agent(){};

void Agent::setId(int id)
{
    m_id = id;
}

int Agent::getId()
{
    return m_id;
}

void Agent::setName(std::string name)
{
    m_name = name;
}

std::string Agent::getName()
{
    return m_name;
}

void Agent::setSurname(std::string surname)
{
    m_surname = surname;
}

std::string Agent::getSurname()
{
    return m_surname;
}

void Agent::setDNI(std::string dni)
{
    m_dni = dni;
}

std::string Agent::getDNI()
{
    return m_dni;
}

void Agent::setEmail(std::string email)
{
    m_email = email;
}
std::string Agent::getEmail()
{
    return m_email;
}

void Agent::setDepartment(std::string department)
{
    m_department = department;
}
std::string Agent::getDepartment()
{
    return m_department;
}