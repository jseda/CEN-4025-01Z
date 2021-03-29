//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
#include <vector>
#include "Employee.h"

class EmployeeManager
{
private:
	std::vector<Employee> employees;
	TimeCard timeCard;

public:
	EmployeeManager();
	std::vector<Employee> getEmployees();
	void setEmployees(std::vector<Employee> employees);
	TimeCard getTimeCard();
	void setTimeCard(TimeCard timeCard);
	void updateTimeCard(Employee employee);
	bool addEmployee(Employee employee);
	bool removeEmployee(int id);
	bool updateEmployeeInfo(int id, Employee updatedInfo);

};

