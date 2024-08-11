#include "flowLogistic.hpp"

FlowLogistic::FlowLogistic()
{
    id = "NULL";
    source = NULL;
    destiny = NULL;
};

FlowLogistic::FlowLogistic(Flow &object)
{
    if (&object == this)
    {
        return;
    }

    id = object.getId();
    source = object.getSource();
    destiny = object.getDestiny();
};

FlowLogistic::FlowLogistic(const string id, System *source, System *destiny) : Flow(id, source, destiny) {};
FlowLogistic::~FlowLogistic() {};

float FlowLogistic::execute()
{
    return ((0.01 * getDestiny()->getValue()) * (1 - getDestiny()->getValue() / 70));
};