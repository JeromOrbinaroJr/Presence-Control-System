#include "Employee.h"

//Constructor 
Employee::Employee() {}

Employee::Employee(const std::string& lastName, const std::string& fistName, const std::string& postEmployee, const std::string& idEmployee) :
	m_lastName(lastName), m_firstName(fistName), m_postEmployee(postEmployee), m_idEmployee(idEmployee) {}

//Destructor
Employee::~Employee() {}

//Getters
std::string Employee::getLastName() const { return m_lastName; }
std::string Employee::getFirstName() const { return m_firstName; }
std::string Employee::getPostEmployee() const { return m_postEmployee; }
std::string Employee::getIdEmployee() const { return m_idEmployee; }

//Setters
void Employee::setLastName(const std::string& lastName) { this->m_lastName = lastName; }
void Employee::setFirstName(const std::string& firstName) { this->m_firstName = firstName; }
void Employee::setPostEmployee(const std::string& postEmployee) { this->m_postEmployee = postEmployee; }
void Employee::setIdEmployee(const std::string& idEmployee) { this->m_idEmployee = idEmployee; }