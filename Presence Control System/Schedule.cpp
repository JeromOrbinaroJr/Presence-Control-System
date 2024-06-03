#include "Schedule.h"

void Schedule::addWorkPeriod(const std::string& employeeId, const std::chrono::system_clock::time_point& date, const WorkPeriod& period) {
	std::string	dateStr = timePointToDateStr(date);
	m_schedules[employeeId][dateStr].push_back(period);
}

std::vector<WorkPeriod> Schedule::getWorkPeriods(const std::string& employeeId, const std::chrono::system_clock::time_point& date) const {
    std::string dateStr = timePointToDateStr(date);
    auto employeeIt = m_schedules.find(employeeId);
    if (employeeIt != m_schedules.end()) {
        auto dateIt = employeeIt->second.find(dateStr);
        if (dateIt != employeeIt->second.end()) {
            return dateIt->second;
        }
    }
    return {};
}

bool Schedule::isInSchedule(const std::string& employeeId, const std::chrono::system_clock::time_point& date, int entryTime, int exitTime) const {
    auto workPeriods = getWorkPeriods(employeeId, date);
    for (const auto& period : workPeriods) {
        int periodStart = period.m_startHour * 100 + period.m_startMinute;
        int periodEnd = period.m_endHour * 100 + period.m_endMinute;

        if (entryTime <= periodStart && exitTime >= periodEnd) {
            return true;
        }
    }
    return false;
}

std::string Schedule::timePointToDateStr(const std::chrono::system_clock::time_point& tp) const {
    std::time_t time = std::chrono::system_clock::to_time_t(tp);
    std::tm tm = *std::localtime(&time);
    std::ostringstream oss;
    oss << std::put_time(&tm, "%Y-%m-%d");
    return oss.str();
}