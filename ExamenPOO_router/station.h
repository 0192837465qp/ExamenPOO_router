#include<string>
#include<iostream>
#include"i_station.h"
#pragma once

class station:public i_station
{
private:
	std::string name;
	std::string subnetMask;
	int ID;
public:
	station(std::string name, std::string subnetMask, int ID) : 
		name(name),subnetMask(subnetMask),ID(ID){ }
	int getIP(int ip);
	void printInfo()override;
};

