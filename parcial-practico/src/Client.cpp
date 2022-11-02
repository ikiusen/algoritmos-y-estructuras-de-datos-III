#include <Client.h>

Client::Client(){};

Client::Client(std::string name, std::string surname, std::shared_ptr<Vehicle> vehicle)
{
	_name = name;
	_surname = surname;
	_vehicle = vehicle;
}

Client::~Client(){};

void Client::getClientData()
{
	std::cout << " Nombre: " << _name << " " << "Apellido: " << _surname << std::endl;
	std::cout << " Vehiculo: " << std::endl;
	_vehicle->getVehicleData();
}