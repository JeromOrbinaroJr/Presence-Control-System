#include "ControlSystem.h"

const std::shared_ptr<Employee>& ControlSystem::getEmployee() const { return m_employee; }
const std::shared_ptr<Registration>& ControlSystem::getRegistration() const { return m_registration; }

void ControlSystem::setEmployee(const Employee& employee) { m_employee = std::make_shared<Employee>(employee); }
void ControlSystem::setRegistration(const Registration & registration) { m_registration = std::make_shared<Registration>(registration); }

void ControlSystem::recordingInSystem(Employee employee, Registration registration) { 
	setEmployee(employee);
	setRegistration(registration);
}