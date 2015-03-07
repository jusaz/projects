#ifndef ECHO_H
#define ECHO_H

#include <effect.h>

class Echo : public Effect
{
public:
    Echo();

    virtual ~Echo();

    virtual void processEffect(std::vector<std::string>);
};

#endif // ECHO_H
