#include "DataBaseEmployees.h"

void EmployeeDatabase::saveEmployeeToBase(const Employee& employee) {
    std::string baseFile = "DataBaseEmplyee.txt";
    std::ofstream outFile(baseFile, std::ios::out | std::ios::app);

    if (!outFile.is_open()) { throw std::runtime_error(baseFile + " is not opdoes not exist or cannot be opened."); }

    outFile << "Key: " << employee.getKey() << std::endl;
    outFile << "Last Name: " << employee.getLastName() << std::endl;
    outFile << "First Name: " << employee.getFirstName() << std::endl;
    outFile << "Post: " << employee.getPostEmployee() << std::endl;
    outFile << "ID: " << employee.getIdEmployee() << std::endl;
    outFile << "------------------------" << std::endl;

    outFile.close();
}