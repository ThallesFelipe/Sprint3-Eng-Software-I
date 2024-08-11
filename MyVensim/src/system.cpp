#include "system.hpp"

System::System()
{
    value = 0;
    id = "NULL";
};

System::System(System &object)
{
    id = object.getId();
    value = object.getValue();
};

System::System(const string id, double value) : id(id), value(value) {};
System::System(const string id) : id(id), value(0) {};
System::System(const double value) : id(""), value(value) {};

string System::getId() const
{
    return id;
};

void System::setId(const string id)
{
    this->id = id;
};

double System::getValue() const
{
    return value;
};

void System::setValue(const double value)
{
    this->value = value;
};

System &System::operator=(const System &object)
{
    if (&object == this)
    {
        return *this;
    }

    id = object.getId();
    value = object.getValue();

    return *this;
};

System::~System() {};