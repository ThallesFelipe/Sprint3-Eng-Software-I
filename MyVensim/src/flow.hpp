#ifndef FLOW_HPP
#define FLOW_HPP

#include <iostream>
#include <string>
#include "system.hpp"

class Flow
{
protected:
    string id;
    System *source;
    System *destiny;

public:
    Flow();
    Flow(Flow &object);
    Flow(const string id, System *source, System *destiny);
    virtual ~Flow();

    string getId() const;
    void setId(const string id);
    System *getSource() const;
    void setSource(System *source);
    System *getDestiny() const;
    void setDestiny(System *destiny);

    bool operator==(const Flow &object) const;
    bool operator!=(const Flow &object) const;
    Flow &operator=(const Flow &object);

    virtual float execute() = 0;
};

#endif