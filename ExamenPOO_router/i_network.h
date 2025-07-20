#include<iostream>
#include<string>
#pragma once
class i_network
{
public:
	virtual void printNetworkTopology() = 0;
	virtual void addRouterToNetwork(std::string name, std::string mask) = 0;
};

