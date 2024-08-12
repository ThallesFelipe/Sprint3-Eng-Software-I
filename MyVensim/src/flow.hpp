#ifndef FLOW_HPP
#define FLOW_HPP

#include <iostream>
#include <string>
#include "system.hpp"

class Flow
{
protected:
    string id;
    System *source;
    System *destiny;

public:
    /**
     * @brief default constructor
     *
     * @param
     * @return
     */
    Flow();
    /**
     * @brief Comparison operator for flow
     *
     * @param obj a flow object
     * @return bool -> return bool according to the comparison
     */
    Flow(Flow &object);
    /**
     * @brief Comparison operator for flow
     *
     * @param id a flow object
     * @param source a flow object
     * @param destiny a flow object
     * @return a flow object
     */
    Flow(const string id, System *source, System *destiny);
    /**
     * @brief Comparison operator for flow
     *
     * @param
     * @return
     */
    virtual ~Flow();
    /**
     * @brief get user id
     *
     * @return id string
     */
    string getId() const;
    /**
     * @brief define id
     *
     * @param id string
     * @return
     */
    void setId(const string id);
    /**
     * @brief get source flow
     *
     * @param
     * @return pointer to system
     */
    System *getSource() const;
    /**
     * @brief define source flow
     *
     * @param source system
     * @return
     */
    void setSource(System *source);
    /**
     * @brief get destiny flow
     *
     * @param
     * @return pointer to system
     */
    System *getDestiny() const;
    /**
     * @brief define destiny flow
     *
     * @param destiny system
     * @return
     */
    void setDestiny(System *destiny);
    /**
     * @brief Comparison operator for flow
     *
     * @param obj a flow object
     * @return bool -> return bool according to the comparison
     */
    bool operator==(const Flow &object) const;
    /**
     * @brief Comparison operator for flow
     *
     * @param obj a flow object
     * @return bool -> return bool according to comparison
     */
    bool operator!=(const Flow &object) const;
    /**
     * @brief Comparison operator for flow
     *
     * @param obj a flow object
     * @return bool -> returns an assignment
     */
    Flow &operator=(const Flow &object);
    /**
     * @brief execute virtual
     *
     * @param
     * @return float number
     */
    virtual float execute() = 0;
};

#endif