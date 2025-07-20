#include "network.h"
#include<iostream>
#include<string>
#include"router.h"
void network::printNetworkTopology()
{
	printf("$s:\nLista R asociate:\n", this->ID);
	for (int i = 0; i < this->listaRoutere.size(); i++)
	{
		this->listaRoutere[i].printRouterInfo();
	}
}

void network::addRouterToNetwork(std::string name, std::string mask)
{
	router newRouter(name, mask);
	this->listaRoutere.push_back(newRouter);
}
