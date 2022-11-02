#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
class Vehicle
{
private:
	std::string _modelName;
	std::string _modelDate;

public:
	Vehicle();
	Vehicle(std::string modelName, std::string modelDate);
	~Vehicle();
	void getVehicleData();
};
#endif