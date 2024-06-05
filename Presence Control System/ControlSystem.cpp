//#include "ControlSystem.h"
//
//void ControlSystem::registerEmployee(const Employee& employee) {
//    m_employees[employee.getIdEmployee()] = employee;
//}
//
//void ControlSystem::addWorkPeriod(const std::string& employeeId, const std::chrono::system_clock::time_point& date, const WorkPeriod& period) {
//    m_schedule.addWorkPeriod(employeeId, date, period);
//}
//
//void ControlSystem::registerArrival(const std::string& employeeId) {
//    if (m_employees.find(employeeId) != m_employees.end()) {
//        Registration reg(employeeId);
//        reg.setArrivalTime  ();
//        m_registrations[employeeId].push_back(reg);
//    }
//}
//
//void ControlSystem::registerDeparture(const std::string& employeeId) {
//    if (m_employees.find(employeeId) != m_employees.end() && !m_registrations[employeeId].empty()) {
//        auto& reg = m_registrations[employeeId].back();
//        reg.setDepartureTime();
//    }
//}
//
//std::map<std::string, Employee> ControlSystem::getEmployees() const
//{
//    return std::map<std::string, Employee>();
//}