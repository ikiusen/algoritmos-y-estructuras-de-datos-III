#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <memory>
#include <Vehicle.h>
class Client
{
private:
	std::string _name;
	std::string _surname;
	std::shared_ptr<Vehicle> _vehicle;

public:
	Client();
	Client(std::string name, std::string surname, std::shared_ptr<Vehicle> vehicle);
	~Client();
	void getClientData();
};
#endif