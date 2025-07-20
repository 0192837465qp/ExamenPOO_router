#include"i_network.h"
#include<iostream>
#include<string>
#include<vector>
#include"router.h"
#pragma once
class network:public i_network
{
private:
	std::vector<router>listaRoutere;
	std::string ID;
public:
	void printNetworkTopology()override;
	void addRouterToNetwork(std::string name, std::string mask)override;
};

