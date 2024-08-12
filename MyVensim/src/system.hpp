#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include <ostream>
#include <string>

using namespace std;

class System
{
    string id;
    double value;

public:
    /**
     * @brief default constructor
     *
     * @param
     * @return
     */
    System();
    /**
     * @brief construct a new system id
     *
     * @param name
     * @return
     */
    System(const string id);
    /**
     * @brief construct a new system value
     *
     * @param value
     * @return
     */
    System(double value);
    /**
     * @brief construct a new system object
     *
     * @param value
     * @return
     */
    System(System &object);
    /**
     * @brief Construct a new System object
     *
     * @param id
     * @param value
     * @return
     */
    System(const string id, double value);
    /**
     * @brief This destructor is a virtual destructor of the Class
     *
     * @param
     * @return a string containing the name is returned
     */
    virtual ~System();
    /**
     * @brief this methor returns the id system
     *
     * @param
     * @return a string containing the name is returned
     */
    string getId() const;
    /**
     * @brief This method assigns the id to a string
     *
     * @param
     * @return A string must be passed to the method
     */
    void setId(const string id);
    /**
     * @brief This method returns the value of a system.
     *
     * @param
     * @return A float containing the value is returned.
     */
    double getValue() const;
    /**
     * @brief This method assigns the value to a string
     *
     * @param
     * @return A float must be passed to the method
     */
    void setValue(double value);
    /**
     * @brief This method is overloading the '==' operator comparing a system
     *
     * @param The system to be compared with the system that called the method is passed
     * @return System& obj
     */
    System &operator=(const System &object);
};

#endif