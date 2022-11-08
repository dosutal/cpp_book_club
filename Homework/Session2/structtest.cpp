#include <iostream>
#include "employeestruct.h"
#include <array>
#include <vector>

using namespace std;

int main()
{
	// Create and populate an employee.
	HR::Employee anEmployee;

	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	anEmployee.position = HR::Position::SeniorEngineer;

	// Output the values of an employee.
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;
	switch (anEmployee.position)
	{
	case HR::Position::Manager:
		cout << "Employee is a Manager." << endl;
		break;
	case HR::Position::SeniorEngineer:
		cout << "Employee is a Senior Engineer." << endl;
		break;
	case HR::Position::Engineer:
		cout << "Employee is a Engineer." << endl;
		break;
	default:
		break;
	}

	// Array
	array<HR::Employee, 3> employeeArray;
	employeeArray[0].firstInitial = 'D';
	employeeArray[0].lastInitial = 'S';
	employeeArray[0].employeeNumber = 11;
	employeeArray[0].salary = 1000;
	employeeArray[0].position = HR::Position::Engineer;
	employeeArray[1].firstInitial = 'K';
	employeeArray[1].lastInitial = 'S';
	employeeArray[1].employeeNumber = 12;
	employeeArray[1].salary = 1300;
	employeeArray[1].position = HR::Position::SeniorEngineer;
	employeeArray[2].firstInitial = 'M';
	employeeArray[2].lastInitial = 'S';
	employeeArray[2].employeeNumber = 13;
	employeeArray[2].salary = 1600;
	employeeArray[2].position = HR::Position::Manager;
	for (HR::Employee employee : employeeArray) {
		cout << "Employee: " << employee.firstInitial << employee.lastInitial << endl;
		cout << "Number: " << employee.employeeNumber << endl;
		cout << "Salary: $" << employee.salary << endl;
		switch (employee.position)
		{
		case HR::Position::Manager:
			cout << "Employee is a Manager." << endl;
			break;
		case HR::Position::SeniorEngineer:
			cout << "Employee is a Senior Engineer." << endl;
			break;
		case HR::Position::Engineer:
			cout << "Employee is a Engineer." << endl;
			break;
		default:
			break;
		}
	}

	// Vector
	vector<HR::Employee> employeeVector;
	HR::Employee firstEmployee;
	firstEmployee.firstInitial = 'L';
	firstEmployee.lastInitial = 'I';
	firstEmployee.employeeNumber = 21;
	firstEmployee.salary = 5000;
	firstEmployee.position = HR::Position::Engineer;
	employeeVector.push_back(firstEmployee);
	HR::Employee secondEmployee;
	secondEmployee.firstInitial = 'S';
	secondEmployee.lastInitial = 'I';
	secondEmployee.employeeNumber = 22;
	secondEmployee.salary = 5300;
	secondEmployee.position = HR::Position::Manager;
	employeeVector.push_back(secondEmployee);
	HR::Employee thirdEmployee;
	thirdEmployee.firstInitial = 'I';
	thirdEmployee.lastInitial = 'I';
	thirdEmployee.employeeNumber = 23;
	thirdEmployee.salary = 5600;
	thirdEmployee.position = HR::Position::SeniorEngineer;
	employeeVector.push_back(thirdEmployee);
	for (HR::Employee employee : employeeVector) {
		cout << "Employee: " << employee.firstInitial << employee.lastInitial << endl;
		cout << "Number: " << employee.employeeNumber << endl;
		cout << "Salary: $" << employee.salary << endl;
		switch (employee.position)
		{
		case HR::Position::Manager:
			cout << "Employee is a Manager." << endl;
			break;
		case HR::Position::SeniorEngineer:
			cout << "Employee is a Senior Engineer." << endl;
			break;
		case HR::Position::Engineer:
			cout << "Employee is a Engineer." << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}
