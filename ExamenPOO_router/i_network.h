#include<iostream>
#include<string>
#pragma once
class i_network
{
public:
	virtual void printNetworkTopology() = 0;
	virtual void addRouterToNetwork(std::string name, std::string mask) = 0;
	virtual void populateNetwork(const std::string& file) = 0;
	//virtual void addSwitchToRouter(std::string name, std::string subnetMask) = 0;
	//virtual void addStationToSwitch(std::string name, std::string subnetMask, int ID) = 0;
};

