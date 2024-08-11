#ifndef MODEL_HPP
#define MODEL_HPP

#include <cstring>
#include <ostream>
#include <vector>
#include "system.hpp"
#include "../test/functional/flowExponential.hpp"
#include "../test/functional/flowLogistic.hpp"
#include "flow.hpp"
#include "model.hpp"

class Model
{
    string id;
    vector<System *> systems;
    vector<Flow *> flows;

public:
    Model();
    Model(Model &object);
    Model(const string id);
    virtual ~Model();

    typedef typename vector<Flow *>::iterator vectorFlow;
    typedef typename vector<System *>::iterator vectorSystem;

    string getId() const;
    void setId(const string id);

    vectorFlow flowBegin();
    vectorFlow flowEnd();
    int flowSize();

    vectorSystem systemBegin();
    vectorSystem systemEnd();
    int systemSize();

    void add(System *);
    void add(Flow *);
    bool remove(System *);
    bool remove(Flow *);
    void clear();
    void show();
    void execute(double, double, double);

    Model &operator=(const Model &object);
};

#endif