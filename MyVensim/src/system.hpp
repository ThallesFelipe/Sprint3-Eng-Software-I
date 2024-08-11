#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include <ostream>
#include <string>

using namespace std;

class System
{
    string id;
    double value;

public:
    System();
    System(const string id);
    System(double value);
    System(System &obj);
    System(const string id, double value);
    virtual ~System();

    string getId() const;
    void setId(const string id);
    double getValue() const;
    void setValue(const double value);

    System &operator=(const System &object);
};

#endif