#ifndef CLIENT_H
#define CLIENT_H
#include <string>
class Client
{
private:
	std::string _name;
	std::string _surname;

public:
	Client();
	Client(std::string name, std::string surname);
	~Client();
	std::string getClientData();
};
#endif