#include "model.hpp"

Model::Model()
{
    id = "NULL";
    flows.clear();
    systems.clear();
};

Model::Model(const string id) : id(id) {};

Model::Model(Model &object)
{
    this->flows.clear();
    this->systems.clear();
    this->flows.insert(this->flows.begin(), object.flows.begin(), object.flows.end());
    this->systems.insert(this->systems.begin(), object.systems.begin(), object.systems.end());
    this->id = object.getId();
};

Model::~Model() {};

string Model::getId() const
{
    return id;
};

void Model::setId(const string id)
{
    this->id = id;
};

Model::vectorFlow Model::flowBegin()
{
    return flows.begin();
};

Model::vectorFlow Model::flowEnd()
{
    return flows.end();
};

int Model::flowSize()
{
    return flows.size();
};

Model::vectorSystem Model::systemBegin()
{
    return systems.begin();
};

Model::vectorSystem Model::systemEnd()
{
    return systems.end();
};

int Model::systemSize()
{
    return systems.size();
};

void Model::add(System *subSystem)
{
    systems.push_back(subSystem);
};

void Model::add(Flow *flow)
{
    flows.push_back(flow);
};

bool Model::remove(System *object)
{
    for (auto thisSystem = systems.begin(); thisSystem != systems.end(); thisSystem++)
    {
        if (*thisSystem == object)
        {
            systems.erase(thisSystem);
            return true;
        }
    }
    return false;
};

bool Model::remove(Flow *object)
{
    for (auto thisFlow = flows.begin(); thisFlow != flows.end(); thisFlow++)
    {
        if (*thisFlow == object)
        {
            flows.erase(thisFlow);
            return true;
        }
    }
    return false;
};

Model &Model::operator=(const Model &object)
{
    if (this == &object)
    {
        return *this;
    }

    this->flows.clear();
    this->systems.clear();
    this->flows.insert(this->flows.begin(), object.flows.begin(), object.flows.end());
    this->systems.insert(this->systems.begin(), object.systems.begin(), object.systems.end());
    this->id = object.getId();
    return *this;
};

void Model::clear()
{
    id = "NULL";
    flows.clear();
    systems.clear();
};

void Model::execute(double start, double finish, double increment)
{
    vector<Flow *>::iterator vectorFlow;

    System *source;
    System *destiny;

    vector<float> flowValue;

    size_t i = 0;
    size_t j = 0;
    float initial = 0.0;

    for (size_t i = 0; i < flows.size(); i++)
    {
        flowValue.push_back(initial);
    }

    for (int index = start; index < finish; index += increment)
    {
        i = 0;
        vectorFlow = flows.begin();
        while (i != flows.size())
        {
            flowValue[i] = (*vectorFlow)->execute();
            vectorFlow++;
            i++;
        }

        j = 0;
        while (j != flows.size())
        {
            source = flows[j]->getSource();
            source->setValue(source->getValue() - flowValue[j]);

            destiny = flows[j]->getDestiny();
            destiny->setValue(destiny->getValue() + flowValue[j]);
            j++;
        }
    }
};

void Model::show()
{
    cout << "Model ID: " << id << endl;

    cout << "Systems:" << endl;
    for (auto system : systems)
    {
        cout << "System ID: " << system->getId() << ", Value: " << system->getValue() << endl;
    }

    cout << "Flows:" << endl;
    for (auto flow : flows)
    {
        cout << "Flow ID: " << flow->getId() << ", Source ID: " << flow->getSource()->getId()
             << ", Destiny ID: " << flow->getDestiny()->getId() << endl;
    }
};