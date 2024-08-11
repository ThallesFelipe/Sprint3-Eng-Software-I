#ifndef FLOWLOGISTIC_HPP
#define FLOWLOGISTIC_HPP

#include "../../src/flow.hpp"

class FlowLogistic : public Flow
{
public:
    FlowLogistic();
    FlowLogistic(Flow &object);
    FlowLogistic(const string id, System *source, System *destiny);
    virtual ~FlowLogistic();

    virtual float execute();
};
#endif