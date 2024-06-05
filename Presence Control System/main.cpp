#include "Employee.h"
#include "DataBaseEmployees.h"
#include "RegistrationPassage.h"
#include <iostream>

int main() {
    Employee employee(1, "Doe", "John", "Manager", "123456");

    EmployeeDatabase database;
    database.saveEmployeeToBase(employee);

    Registration registration("123456");

    registration.setArrivalTime();
    registration.setDepartureTime();

    std::cout << registration << std::endl;

    return 0;
}
