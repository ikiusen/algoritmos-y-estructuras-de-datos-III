#include <Vehicle.h>

Vehicle::Vehicle(){};

Vehicle::Vehicle(std::string modelName, std::string modelDate)
{
	_modelName = modelName;
	_modelDate = modelDate;
}

Vehicle::~Vehicle(){};

void Vehicle::getVehicleData()
{
	std::cout << "   Modelo: " << _modelName << " " << "Anio: " << _modelDate << std::endl;
} 