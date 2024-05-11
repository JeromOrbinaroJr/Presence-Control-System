#include "RegistrationPassage.h"
#pragma warning(disable:4996)

Registration::Registration() { date = std::chrono::system_clock::now(); }

void Registration::setArrivalTime() { arrivalTime = std::chrono::system_clock::now(); }
void Registration::setDepartureTime() { departureTime = std::chrono::system_clock::now(); }
std::chrono::system_clock::time_point Registration::getDate() const { return date; }
std::chrono::time_point<std::chrono::system_clock> Registration::getArrivalTime() const { return arrivalTime; }
std::chrono::time_point<std::chrono::system_clock> Registration::getDepartureTime() const { return departureTime; }

std::string timeToString(const std::chrono::system_clock::time_point& tp) {
    std::time_t time = std::chrono::system_clock::to_time_t(tp);
    std::tm tm = *std::localtime(&time);
    std::ostringstream oss;
    oss << std::put_time(&tm, "%T");
    return oss.str();
}

std::ostream& operator<<(std::ostream& os, const Registration& reg) {
    std::time_t now_time = std::chrono::system_clock::to_time_t(reg.getDate());
    std::tm* time_info = std::localtime(&now_time);
    os << "Date: " << (time_info->tm_year + 1900) << "-" << (time_info->tm_mon + 1) << "-" << time_info->tm_mday << std::endl;
    os << "Arrival time: " << timeToString(reg.getArrivalTime()) << std::endl;
    os << "Departure time: " << timeToString(reg.getDepartureTime()) << std::endl;
    return os;
}