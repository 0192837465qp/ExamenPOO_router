#include"i_router.h"
#include<iostream>
#include<string>
#include<vector>
#include"Switch.h"
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
};

