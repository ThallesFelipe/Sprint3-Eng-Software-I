#include "functional_tests.hpp"

int main()
{
    exponentialFunctionalTest();
    logisticalFunctionalTest();
    complexFunctionalTest();
    cout << "\nSuccessfully passed functional tests." << endl;
    return 0;
};