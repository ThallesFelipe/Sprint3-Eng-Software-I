#include "../../src/model.hpp"
#include "../../src/system.hpp"
#include "../../src/flow.hpp"
#include "flowExponential.hpp"
#include "flowLogistic.hpp"

#include <assert.h>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <cstring>

#ifndef FUNCTIONAL_TESTS
#define FUNCTIONAL_TESTS

/**
 * @brief This function performs the exponential functional test
 *
 * @param
 * @returns
 */
void exponentialFunctionalTest();
/**
 * @brief This function performs the logistic test
 * @param
 * @returns
 */
void logisticalFunctionalTest();
/**
 * @brief This function runs the "complex" test, which has multiple systems and flows
 *
 * @param
 * @returns
 */
void complexFunctionalTest();

#endif