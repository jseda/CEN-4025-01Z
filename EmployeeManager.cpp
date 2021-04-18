//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#include "EmployeeManager.h"
#include <stdio.h>

EmployeeManager::EmployeeManager()
{
	printf("Setting up Employee Manager..\n");
}

std::vector<Employee> EmployeeManager::getEmployees()
{
	return this->employees;
}

void EmployeeManager::setEmployees(std::vector<Employee> employees)
{
	this->employees = employees;
}

TimeCard EmployeeManager::getTimeCard()
{
	return this->timeCard;
}

void EmployeeManager::setTimeCard(TimeCard timeCard)
{
	this->timeCard = timeCard;
}

void EmployeeManager::updateTimeCard(Employee employee)
{
	printf("Updating Employee Timecard...\n");
}

bool EmployeeManager::addEmployee(Employee employee)
{	
	printf("Adding Employee...\n");
	this->employees.push_back(employee);	
	return true;
}

bool EmployeeManager::removeEmployee(int id)
{
	int index = 0;
	bool found = false;

	for (int i = 0; i < this->employees.size(); i++)
	{
		if (this->employees[i].getId() == id)
		{
			index = i;
			found = true;
		}
		break;
	}

	if (found)
	{
		this->employees.erase(this->employees.begin() + index);
		found = false;
		return true;
		printf("Removed Employee: %d...\n", id);
	}

	printf("Employee not found...\n");
	return false;
}

bool EmployeeManager::updateEmployeeInfo(int id, Employee updatedInfo)
{
	printf("Updating Employee Information...\n");
	return true;
}
