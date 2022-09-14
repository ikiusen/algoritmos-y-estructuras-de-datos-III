#include <Client.h>

Client::Client(){};

Client::Client(std::string name, std::string surname)
{
	_name = name;
	_surname = surname;
}

Client::~Client(){};

std::string Client::getClientData()
{
	std::string clientData;
	clientData = "Client name: " + _name + " Client surname: " + _surname;
	return clientData;
}