#pragma once
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Employee.h"

class EmployeeDatabase {
public:
	void saveEmployeeToBase(const Employee& employee);
};