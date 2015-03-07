#ifndef REVERSE_H
#define REVERSE_H

#include "effect.h"

class Reverse : public Effect
{
public:
    Reverse();

    virtual ~Reverse();

    virtual void processEffect(std::vector<std::string>);
};

#endif // REVERSE_H
