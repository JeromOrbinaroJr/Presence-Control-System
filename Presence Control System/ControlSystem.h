#pragma once
#include <memory>
#include "Employee.h"
#include "RegistrationPassage.h"

struct ControlSystem {
public:
    const std::shared_ptr<Employee>& getEmployee() const;
    const std::shared_ptr<Registration>& getRegistration() const;

    void setEmployee(const Employee& employee);
    void setRegistration(const Registration& registration);

    void recordingInSystem(Employee employee, Registration registretion);

private:
    std::shared_ptr<Employee> m_employee;
    std::shared_ptr<Registration> m_registration;
};
