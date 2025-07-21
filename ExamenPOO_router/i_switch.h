#include<iostream>
#include<string>
#pragma once
class i_switch
{
public:
	virtual void addStationToSwitch(std::string name, std::string subnetMask,int ID) = 0;
	virtual void printSwitchInfo() = 0;
};

