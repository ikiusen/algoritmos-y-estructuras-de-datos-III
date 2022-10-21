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
    this->id = id;
}

int Agent::getId()
{
    return id;
}

void Agent::setName(std::string name)
{
    this->name = name;
}

std::string Agent::getName()
{
    return name;
}

void Agent::setSurname(std::string surname)
{
    this->surname = surname;
}

std::string Agent::getSurname()
{
    return surname;
}

void Agent::setDNI(std::string dni)
{
    this->dni = dni;
}

std::string Agent::getDNI()
{
    return dni;
}

void Agent::setEmail(std::string email)
{
    this->email = email;
}
std::string Agent::getEmail()
{
    return email;
}

void Agent::setDepartment(std::string department)
{
    this->department = department;
}
std::string Agent::getDepartment()
{
    return department;
}