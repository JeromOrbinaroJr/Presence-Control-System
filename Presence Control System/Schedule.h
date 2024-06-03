#pragma once
#include <map>
#include <vector>
#include <string>
#include <chrono>
#include <sstream>
#include <iomanip>
#pragma warning(disable:4996)

struct WorkPeriod
{
	int m_startHour;
	int m_startMinute;
	int m_endHour;
	int m_endMinute;

	WorkPeriod(int startHour, int startMinute, int endHour, int endMinute) :
		m_startHour(startHour), m_startMinute(startMinute), m_endHour(endHour), m_endMinute(endMinute) {}
};

class Schedule {
public:
	void addWorkPeriod(const std::string& employeeId, const std::chrono::system_clock::time_point& date, const WorkPeriod& period);

	std::vector<WorkPeriod> getWorkPeriods(const std::string& employeeId, const std::chrono::system_clock::time_point& date) const;

	bool isInSchedule(const std::string& employeeId, const std::chrono::system_clock::time_point& date, int entryTime, int exitTime) const;


private:
	std::string timePointToDateStr(const std::chrono::system_clock::time_point& tp) const;
	std::map<std::string, std::map<std::string, std::vector<WorkPeriod>>> m_schedules;
};