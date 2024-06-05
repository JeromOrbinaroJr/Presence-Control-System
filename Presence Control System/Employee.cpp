#include "Employee.h"

//Constructor 
Employee::Employee() {}

Employee::Employee(const int key, const std::string& lastName, const std::string& firstName, const std::string& postEmployee, const std::string& idEmployee) :
	m_key(key), m_lastName(lastName), m_firstName(firstName), m_postEmployee(postEmployee), m_idEmployee(idEmployee) {}

//Destructor
Employee::~Employee() {}

//Getters
int Employee::getKey() const { return m_key; }
const std::string& Employee::getLastName() const { return m_lastName; }
const std::string& Employee::getFirstName() const { return m_firstName; }
const std::string& Employee::getPostEmployee() const { return m_postEmployee; }
const std::string& Employee::getIdEmployee() const { return m_idEmployee; }

//Setters
void Employee::setKey(const int key) { m_key = key; }
void Employee::setLastName(const std::string& lastName) { m_lastName = lastName; }
void Employee::setFirstName(const std::string& firstName) { m_firstName = firstName; }
void Employee::setPostEmployee(const std::string& postEmployee) { m_postEmployee = postEmployee; }
void Employee::setIdEmployee(const std::string& idEmployee) { m_idEmployee = idEmployee; }