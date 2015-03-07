#ifndef DELAY_H
#define DELAY_H

#include <effect.h>

class Delay : public Effect
{
public:
    Delay();
    virtual ~Delay();

    virtual void processEffect(std::vector<std::string>);

};

#endif // DELAY_H
