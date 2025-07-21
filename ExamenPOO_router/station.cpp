#include "station.h"

int station::getIP(int ip)
{
    return this->ID;
}

void station::printInfo()
{
    std::cout << this->name << ":" << std::endl;
    std::cout << this->subnetMask << std::endl;
    std::cout << this->ID << std::endl;
}