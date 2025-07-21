#include <iostream>
#include"network.h"
#include<string>
#include<vector>

int main()
{
    network retea("192");
    retea.populateNetwork("retea.txt");
    retea.printNetworkTopology();
    return 0;
}
