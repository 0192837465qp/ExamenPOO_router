#include<iostream>
#include<string>
#pragma once
class i_router
{
public:
	virtual void printRouterInfo() = 0;
	virtual void addSwitchToRouter(std::string name, std::string subnetMask) = 0;
};

