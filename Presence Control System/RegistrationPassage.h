#pragma once
#include <chrono>
#include <iostream>
#include <iomanip>
#include <sstream>
#pragma warning(disable:4996)

class Registration {
public:
    // Constructor
    Registration(const std::string& employeeId);

    // Destructor
    ~Registration();

    // Getters
    std::string getEmployeeId() const;
    std::chrono::system_clock::time_point getDate() const;
    std::chrono::system_clock::time_point getArrivalTime() const;
    std::chrono::system_clock::time_point getDepartureTime() const;

    // Setters
    void setArrivalTime();
    void setDepartureTime();

    friend std::ostream& operator<<(std::ostream& os, const Registration& reg);

private:
    std::string m_employeeId;
    std::chrono::system_clock::time_point m_date;
    std::chrono::system_clock::time_point m_arrivalTime;
    std::chrono::system_clock::time_point m_departureTime;
};
