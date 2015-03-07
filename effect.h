#ifndef EFFECT_H
#define EFFECT_H

#include <string>
#include <vector>
#include <iostream>

class Effect
{
public:
    Effect();

    virtual ~Effect(){ std::cout << "Effect Destructor" << std::endl; }

    virtual void processEffect( std::vector<std::string>) = 0;
};

#endif // EFFECT_H
