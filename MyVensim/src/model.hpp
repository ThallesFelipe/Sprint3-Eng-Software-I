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
    /**
     * @brief Construct a new Model
     *
     * @param
     * @return
     */
    Model();
    /**
     * @brief construct the new object
     *
     * @param obj
     * @return
     */
    Model(Model &object);
    /**
     * @brief Construct a new Model name
     *
     * @param id
     * @return
     */
    Model(const string id);
    /**
     * @brief This destructor is a virtual destructor of the Class
     *
     * @param
     * @return
     */
    virtual ~Model();
    /**
     * @brief setting the flow vector type
     *
     * @param
     * @return
     */
    typedef typename vector<Flow *>::iterator vectorFlow;
    /**
     * @brief setting the system vector type
     *
     * @param
     * @return
     */
    typedef typename vector<System *>::iterator vectorSystem;
    /**
     * @brief This method returns the name of a flow
     *
     * @param
     * @return A string containing the name is returned.
     */
    string getId() const;
    /**
     * @brief This method assigns the name to a string
     *
     * @param
     * @return a string must be passed to the method
     */
    void setId(const string id);
    /**
     * @brief This method returns the flow from the beginning
     *
     * @param
     * @return the flow from the beginning
     */
    vectorFlow flowBegin();
    /**
     * @brief This method returns the flow of the end
     *
     * @param
     * @return the flow of the end
     */
    vectorFlow flowEnd();
    /**
     * @brief This method returns the size of the flow vector
     *
     * @param
     * @return the size of the flow vector
     */
    int flowSize();
    /**
     * @brief This method returns the system from the beginning
     *
     * @param
     * @return the system from the beginning
     */
    vectorSystem systemBegin();
    /**
     * @brief This method returns the system of the end
     *
     * @param
     * @return the system of the end
     */
    vectorSystem systemEnd();
    /**
     * @brief This method returns the size of the system vector
     *
     * @param
     * @return the size of the system vector
     */
    int systemSize();
    /**
     * @brief this method adds a system
     *
     * @param
     * @return
     */
    void add(System *);
    /**
     * @brief this method adds a flow
     *
     * @param
     * @return
     */
    void add(Flow *);
    /**
     * @brief this method removes a system
     *
     * @param true if object and item have the same memory addres
     * @return false if object and item do not have the same memory address
     */
    bool remove(System *);
    /**
     * @brief this method removes a flow
     *
     * @param true if object and item have the same memory addres
     * @return false if object and item do not have the same memory address
     */
    bool remove(Flow *);
    /**
     * @brief this method is to clean the model.
     *
     * @param
     * @return
     */
    void clear();
    /**
     * @brief this method is to show the model.
     *
     * @param
     * @return
     */
    void show();
    /**
     * @brief this method is to execute the model.
     *
     * @param
     * @return
     */
    void execute(double, double, double);
    /**
     * @brief This method is overloading the '=' operator, "cloning" from one model to another
     *
     * @param The model to be cloned must be passed
     * @return A model is returned that is a clone of what was passed to the method, which was the model that called this function, the model to the left of the '='
     */
    Model &operator=(const Model &object);
};

#endif