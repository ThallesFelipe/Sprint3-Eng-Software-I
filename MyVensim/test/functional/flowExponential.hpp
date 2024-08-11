#ifndef FLOWEXPONENTIAL_HPP
#define FLOWEXPONENTIAL_HPP

#include "../../src/flow.hpp"

class FlowExponential : public Flow
{
public:
    FlowExponential();
    FlowExponential(Flow &object);
    FlowExponential(const string id, System *source, System *destiny);
    virtual ~FlowExponential();

    virtual float execute();
};

#endif