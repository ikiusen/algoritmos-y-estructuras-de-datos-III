#include <Client.h>

Client::Client()
{
	_name = "";
	_surname = "";
};

Client::Client(std::string name, std::string surname)
{
	_name = name;
	_surname = surname;
}

Client::~Client(){};

std::string Client::getClientData()
{
	std::string clientData;
	clientData = " " + _name + " " + _surname;
	return clientData;
}