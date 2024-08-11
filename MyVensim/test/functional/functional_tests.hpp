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

void exponentialFunctionalTest();
void logisticalFunctionalTest();
void complexFunctionalTest();

#endif