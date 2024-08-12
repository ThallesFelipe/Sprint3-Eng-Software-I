#ifndef FLOWEXPONENTIAL_HPP
#define FLOWEXPONENTIAL_HPP

#include "../../src/flow.hpp"

class FlowExponential : public Flow
{
public:
    /**
     * @brief default constructor
     *
     * @param
     * @return
     */
    FlowExponential();
    /**
     * @brief Comparison operator for flowExponential
     *
     * @param object a flow object
     * @return bool -> return bool according to the comparison
     */
    FlowExponential(Flow &object);
    /**
     * @brief Comparison operator for flow
     *
     * @param id a flow object
     * @param source a flow object
     * @param destiny a flow object
     * @return a flowExponential object
     */
    FlowExponential(const string id, System *source, System *destiny);
    /**
     * @brief Comparison operator for flow
     *
     * @param
     * @return
     */
    virtual ~FlowExponential();
    /**
     * @brief execute virtual
     *
     * @param
     * @return float number
     */
    virtual float execute();
};

#endif