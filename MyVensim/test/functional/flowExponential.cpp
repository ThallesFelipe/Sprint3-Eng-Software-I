#include "flowExponential.hpp"

FlowExponential::FlowExponential()
{
    id = "NULL";
    source = NULL;
    destiny = NULL;
};

FlowExponential::FlowExponential(Flow &object)
{
    if (&object == this)
        return;

    id = object.getId();
    source = object.getSource();
    destiny = object.getDestiny();
};

FlowExponential::FlowExponential(const string id, System *source, System *destiny) : Flow(id, source, destiny) {};
FlowExponential::~FlowExponential() {};

float FlowExponential::execute()
{
    return getSource()->getValue() * 0.01;
};