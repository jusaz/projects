#include "delay.h"
#include <iostream>

Delay::Delay()
{
}

Delay::~Delay()
{
    std::cout << "Delay Destructor" << std::endl;
}

void Delay::processEffect( std::vector<std::string> strToProcess)
{
    for(std::vector<std::string>::reverse_iterator it = strToProcess.rbegin() + 1; it != strToProcess.rend(); it++)
    {
        std::cout << *it << std::endl;
    }

}
