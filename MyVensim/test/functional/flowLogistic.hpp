#ifndef FLOWLOGISTIC_HPP
#define FLOWLOGISTIC_HPP

#include "../../src/flow.hpp"

class FlowLogistic : public Flow
{
public:
    /**
     * @brief default constructor
     *
     * @param
     * @return
     */
    FlowLogistic();
    /**
     * @brief Comparison operator for flowExponential
     *
     * @param object a flow object
     * @return bool -> return bool according to the comparison
     */
    FlowLogistic(Flow &object);
    /**
     * @brief Comparison operator for flow
     *
     * @param id a flow object
     * @param source a flow object
     * @param destiny a flow object
     * @return a flowExponential object
     */
    FlowLogistic(const string id, System *source, System *destiny);
    /**
     * @brief Comparison operator for flow
     *
     * @param
     * @return
     */
    virtual ~FlowLogistic();
    /**
     * @brief execute virtual
     *
     * @param
     * @return float number
     */
    virtual float execute();
};

#endif