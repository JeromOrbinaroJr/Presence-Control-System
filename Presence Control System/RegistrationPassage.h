#pragma once
#include <chrono>
#include <iostream>
#include <iomanip>
#include <sstream>

class Registration {
public:
	Registration();

	void setArrivalTime();
	void setDepartureTime();
    std::chrono::system_clock::time_point getDate() const;
    std::chrono::time_point<std::chrono::system_clock> getArrivalTime() const;
	std::chrono::time_point<std::chrono::system_clock> getDepartureTime() const;
	friend std::ostream& operator<<(std::ostream& os, const Registration& reg);

private:
	std::chrono::time_point<std::chrono::system_clock> arrivalTime;
	std::chrono::time_point<std::chrono::system_clock> departureTime;
	std::chrono::system_clock::time_point date;
};