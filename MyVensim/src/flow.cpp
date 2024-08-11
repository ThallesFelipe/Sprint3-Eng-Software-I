#include "flow.hpp"

Flow::Flow()
{
    id = "NULL";
    source = NULL;
    destiny = NULL;
};

Flow::Flow(Flow &object)
{
    id = object.getId();
    source = object.getSource();
    destiny = object.getDestiny();
}

Flow::Flow(const string id, System *source, System *destiny) : id(id), source(source), destiny(destiny) {};
Flow::~Flow() {};

string Flow::getId() const
{
    return id;
};

void Flow::setId(const string id)
{
    this->id = id;
};

System *Flow::getSource() const
{
    return source;
};

void Flow::setSource(System *source)
{
    this->source = source;
};

System *Flow::getDestiny() const
{
    return destiny;
};

void Flow::setDestiny(System *destiny)
{
    this->destiny = destiny;
};

bool Flow::operator==(const Flow &object) const
{
    return (id == object.getId() && source == object.getSource() && destiny == object.getDestiny());
};

bool Flow::operator!=(const Flow &object) const
{
    return !(object == *this);
};

Flow &Flow::operator=(const Flow &object)
{
    if (&object == this)
    {
        return *this;
    }

    id = object.getId();
    source = object.getSource();
    destiny = object.getDestiny();

    return *this;
};