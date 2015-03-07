#include "echo.h"
#include <iostream>

Echo::Echo()
{

}



Echo::~Echo()
{
    std::cout << "Echo Destructor!" << std::endl;
}

void Echo::processEffect(std::vector<std::string> strToProcess)
{
    std::vector<std::string>::iterator it;
    for( it = strToProcess.begin(); it != strToProcess.end(); it++ )
    {
        std::cout << *it + *it << std::endl;
    }
}
