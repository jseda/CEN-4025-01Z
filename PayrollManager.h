//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
#include <vector>
#include "Employee.h"

class PayrollManager
{
private:
	std::vector<Employee> employees;
	double tax;
	double totalPay;

public:
	PayrollManager();
	double getTax();
	void setTax(double tax);
	double calculatePay(Employee employee);
	void processPaycheck();
	void RetrieveEmployeeHours(Employee employee);
};

