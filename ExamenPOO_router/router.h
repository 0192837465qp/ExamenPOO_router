#include"i_router.h"
#include<iostream>
#include<string>
#include<vector>
#include"Switch.h"
#include"station.h"

#pragma once
class router:private i_router
{
private:
	std::string name;
	std::string mask;
	std::vector<Switch>listaSwitchuri;
public:
	router(std::string name,std::string mask):
		name(name),mask(mask){ }
	void printRouterInfo()override;
	void addSwitchToRouter(std::string name,std::string subnetMask)override;
	std::string getMask() {
		return this->mask;
	}
	std::vector<Switch>& returnSwitchList()
	{
		return this->listaSwitchuri;
	}
	std::vector<station> returnStationListFromSwitch(int index)
	{
		return this->listaSwitchuri[index].returnStationList();
	}
};

