#include "network.h"
#include<iostream>
#include<string>
#include"router.h"
#include<fstream>
#include"station.h"
#include"Switch.h"

void network::printNetworkTopology()
{
	
	std::cout<<this->ID;
	std::cout << ":\nLista R asociate:\n";
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

void network::populateNetwork(const std::string& file)
{
	std::ifstream fisier(file);
	if (fisier.is_open())
	{
		std::string linie;
		while (std::getline(fisier, linie))
		{
			//linie.pop_back();
			if (linie == "R")
			{
				std::getline(fisier, linie);
				//linie.pop_back();
				std::string name = linie;
				std::getline(fisier, linie);
				//linie.pop_back();
				std::string mask = linie;
				router newR(name, mask);
				this->listaRoutere.push_back(newR);
			}
			else if (linie == "SW")
			{
				std::getline(fisier, linie);
				//linie.pop_back();
				std::string name = linie;
				std::getline(fisier, linie);
				//linie.pop_back();
				std::string mask = linie;
				while (linie.back() != '.')
				{
					linie.pop_back();
				}
				linie.pop_back();
				for (int i = 0; i < this->listaRoutere.size(); i++)
				{
					if (this->listaRoutere[i].getMask() == linie)
					{
						this->listaRoutere[i].addSwitchToRouter(name, mask);
					}
				}
			}
			else if (linie == "S")
			{
				std::getline(fisier, linie);
				//linie.pop_back();
				std::string name = linie;
				std::getline(fisier, linie);
				//linie.pop_back();
				std::string subnetMask = linie;
				while (linie.back() != '.')
				{
					linie.pop_back();
				}
				linie.pop_back();
				std::string mask = linie;
				std::getline(fisier, linie);
				//linie.pop_back();
				std::string ID = linie;
				
				for (int i = 0; i < this->listaRoutere.size(); i++)
				{
					if (this->listaRoutere[i].getMask() == mask)
					{
                        //std::getline(fisier, linie);  
                       // linie.pop_back();  
                        
						for (int j = 0; j < this->listaRoutere[i].returnSwitchList().size(); j++)
						{
							if (this->listaRoutere[i].returnSwitchList()[j].getMask() == subnetMask)
							{
								this->listaRoutere[i].returnSwitchList()[j].addStationToSwitch(name,subnetMask, std::stoi(ID));
							}
						}
					}
				}
			}
			else
			{
				std::cout << "\nProcesare efecrtuata gresit";
				exit(0);
			}
		}
	}
}


