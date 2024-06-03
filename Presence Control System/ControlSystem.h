#pragma once
#include "Employee.h"
#include "RegistrationPassage.h"
#include "Schedule.h"
#include <map>
#include <vector>
#include <string>
#include <chrono>
#pragma warning(disable:4996)

class ControlSystem {
public:
    // Register a new employee
    void registerEmployee(const Employee& employee);

    // Add work period for an employee
    void addWorkPeriod(const std::string& employeeId, const std::chrono::system_clock::time_point& date, const WorkPeriod& period);

    // Register employee arrival
    void registerArrival(const std::string& employeeId);

    // Register employee departure
    void registerDeparture(const std::string& employeeId);

    std::map<std::string, Employee> getEmployees() const;

    // Check for schedule violations


private:
    std::map<std::string, Employee> m_employees; // Employee ID to Employee object
    Schedule m_schedule; // Schedule management
    std::map<std::string, std::vector<Registration>> m_registrations; // Employee ID to vector of Registrations
};
