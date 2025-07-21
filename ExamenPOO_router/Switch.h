
#include<iostream>
#include<string>
#include"i_switch.h"
#include<vector>
#include"station.h"
#pragma once
class Switch:public i_switch
{
private:
	std::string name;
	std::string subnetMask;
	std::vector<station>listaStatii;
public:
	Switch(std::string name, std::string subnetMask):
		name(name),subnetMask(subnetMask){ }
	void printSwitchInfo()override;
	void addStationToSwitch(std::string name, std::string subnetMask,int ID)override;
	std::vector<station> returnStationList()
	{
		return this->listaStatii;
	}
	std::string getMask()
	{
		return subnetMask;
	}
};

