#include <iostream>
#include <chrono>
#include <thread>
#include "RegistrationPassage.h"
#include "Employee.h"
#include "ControlSystem.h"
#include "DataBase.h"

int main() {
	controlSystem.recordingInSystem(employee1, person1);
	person1.setArrivalTime();
	//std::chrono::seconds duration(2);
	//std::this_thread::sleep_for(duration);
	person1.setDepartureTime();
	std::cout << person1 << std::endl;

	return 0;
}