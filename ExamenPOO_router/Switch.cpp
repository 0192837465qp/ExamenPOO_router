#include "Switch.h"
#include "station.h"
#include <string>
#include <iostream>
#include <vector>

void Switch::printSwitchInfo()
{
	std::cout << this->name << ":" << std::endl;
	std::cout << this->subnetMask << std::endl;
	std::cout << "Lista dispozitive asociate:" << std::endl;
	for (int i = 0; i < this->listaStatii.size(); i++)
	{
		this->listaStatii[i].printInfo();
	}
}

void Switch::addStationToSwitch(std::string name, std::string subnetMask, int ID)
{
	station newStation(name, subnetMask, ID);
	this->listaStatii.push_back(newStation);
}