#include "station.h"

int station::getIP(int ip)
{
    return this->ID;
}

void station::printInfo()
{
    printf("%s:\n%s\n%d", this->subnetMask, this->name, this->ID);
}
