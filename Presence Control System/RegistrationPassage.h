#pragma once
#include <chrono>
#include <iostream>
#include <iomanip>
#include <sstream>

class Registration {
public:
	Registration();

	~Registration();

	void setArrivalTime();
	void setDepartureTime();
    std::chrono::system_clock::time_point getDate() const;
    std::chrono::time_point<std::chrono::system_clock> getArrivalTime() const;
	std::chrono::time_point<std::chrono::system_clock> getDepartureTime() const;
	friend std::ostream& operator<<(std::ostream& os, const Registration& reg);

private:
	std::chrono::time_point<std::chrono::system_clock> m_arrivalTime;
	std::chrono::time_point<std::chrono::system_clock> m_departureTime;
	std::chrono::system_clock::time_point m_date;
};