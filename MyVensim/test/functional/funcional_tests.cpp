#include "functional_tests.hpp"

void exponentialFunctionalTest()
{
    Model *model = new Model();
    System *system1 = new System("pop1", 100.0);
    System *system2 = new System("pop2", 0.0);
    FlowExponential *flow = new FlowExponential("Exponencial", system1, system2);

    model->setId("Exponential system");
    model->add(system1);
    model->add(system2);
    model->add(flow);

    model->execute(0, 100, 1);

    model->show();

    assert(fabs((round((system1->getValue() * 10000)) - 10000 * 36.6032)) < 0.0001);
    assert(fabs((round((system2->getValue() * 10000)) - 10000 * 63.3968)) < 0.0001);
    model->clear();

    delete model;
    delete system1;
    delete system2;
    delete flow;
};

void logisticalFunctionalTest()
{
    Model *model = new Model();
    System *system1 = new System("p1", 100.0);
    System *system2 = new System("p2", 10.0);
    FlowLogistic *flow = new FlowLogistic("Logistic", system1, system2);

    model->setId("Logistic system");

    model->add(system1);
    model->add(system2);
    model->add(flow);

    model->execute(0, 100, 1);

    model->show();

    assert(fabs((round((system1->getValue() * 10000)) - 10000 * 88.2167)) < 0.0001);
    assert(fabs((round((system2->getValue() * 10000)) - 10000 * 21.7833)) < 0.0001);
    model->clear();

    delete model;
    delete system1;
    delete system2;
    delete flow;
};

void complexFunctionalTest()
{
    Model *model = new Model();
    System *q1 = new System("q1", 100.0);
    System *q2 = new System("q2", 0.0);
    System *q3 = new System("q3", 100.0);
    System *q4 = new System("q4", 0.0);
    System *q5 = new System("q5", 0.0);

    FlowExponential *f = new FlowExponential("f", q1, q2);
    FlowExponential *t = new FlowExponential("f", q2, q3);
    FlowExponential *u = new FlowExponential("f", q3, q4);
    FlowExponential *v = new FlowExponential("f", q4, q1);
    FlowExponential *g = new FlowExponential("f", q1, q3);
    FlowExponential *r = new FlowExponential("f", q2, q5);

    model->setId("Complete system");

    model->add(q1);
    model->add(q2);
    model->add(q3);
    model->add(q4);
    model->add(q5);
    model->add(f);
    model->add(t);
    model->add(u);
    model->add(v);
    model->add(g);
    model->add(r);

    model->execute(0, 100, 1);
    model->show();

    assert(round(q1->getValue() * 10000) == round(31.8513 * 10000));
    assert(round(q2->getValue() * 10000) == round(18.4003 * 10000));
    assert(round(q3->getValue() * 10000) == round(77.1143 * 10000));
    assert(round(q4->getValue() * 10000) == round(56.1728 * 10000));
    assert(round(q5->getValue() * 10000) == round(16.4612 * 10000));

    model->clear();

    delete model;
    delete q1;
    delete q2;
    delete q3;
    delete q4;
    delete q5;
    delete f;
    delete t;
    delete u;
    delete v;
    delete g;
    delete r;
};