#include "RegistrationPassage.h"

//Constructor
Registration::Registration(const std::string& employeeId) :
    m_employeeId(employeeId), m_date(std::chrono::system_clock::now()) {}

//Destructor
Registration::~Registration() { }

//Getters 
std::string Registration::getEmployeeId() const {
    return m_employeeId;
}

std::chrono::system_clock::time_point Registration::getDate() const {
    return m_date;
}
std::chrono::system_clock::time_point Registration::getArrivalTime() const {
    return m_arrivalTime;
}

std::chrono::system_clock::time_point Registration::getDepartureTime() const {
    return m_departureTime;
}

//Setters
void Registration::setArrivalTime() {
    m_arrivalTime = std::chrono::system_clock::now();
}
void Registration::setDepartureTime() {
    m_departureTime = std::chrono::system_clock::now();
}

//Methods
std::string timeToString(const std::chrono::system_clock::time_point& tp) {
    std::time_t time = std::chrono::system_clock::to_time_t(tp);
    std::tm tm = *std::localtime(&time);
    std::ostringstream oss;
    oss << std::put_time(&tm, "%T");
    return oss.str();
}

//OperatorOverloading
std::ostream& operator<<(std::ostream& os, const Registration& reg) {
    std::time_t now_time = std::chrono::system_clock::to_time_t(reg.getDate());
    std::tm* time_info = std::localtime(&now_time);
    os << "Employee ID: " << reg.getEmployeeId() << std::endl;
    os << "Date: " << (time_info->tm_year + 1900) << "-" << std::setfill('0') << std::setw(2) << (time_info->tm_mon + 1) << "-" << std::setw(2) << time_info->tm_mday << std::endl;
    os << "Arrival time: " << timeToString(reg.getArrivalTime()) << std::endl;
    os << "Departure time: " << timeToString(reg.getDepartureTime()) << std::endl;
    return os;
}