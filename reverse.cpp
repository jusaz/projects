#include "reverse.h"
#include <iostream>
#include <vector>
#include <string>

Reverse::Reverse()
{

}

Reverse::~Reverse()
{
    std::cout << "Reverse Destructor" << std::endl;
}

void Reverse::processEffect(std::vector<std::string> strToProcess)
{
    for( std::vector<std::string>::iterator it = strToProcess.begin(); it != strToProcess.end(); it++ )
    {
        std::string itsCurrStr = *it;
        for(std::string::reverse_iterator strIt = itsCurrStr.rbegin(); strIt != itsCurrStr.rend(); strIt++)
        {
            std::cout << *strIt;
        }
        std::cout << std::endl;
    }
}
