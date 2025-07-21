#include "router.h"
#include "Switch.h"
#include<string>
#include<iostream>
#include<vector>

void router::printRouterInfo()
{
	std::cout << this->name;
	std::cout << ":\n";
	std::cout << this->mask;
	std::cout<<"\nLista SW asociate : \n";
	
	
	for (int i = 0; i < this->listaSwitchuri.size(); i++)
	{
		this->listaSwitchuri[i].printSwitchInfo();
	}
}

void router::addSwitchToRouter(std::string name, std::string subnetMask)
{
	Switch newSwitch(name, subnetMask);
	this->listaSwitchuri.push_back(newSwitch);
}
