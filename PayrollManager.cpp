//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "PayrollManager.h"
#include <stdio.h>

PayrollManager::PayrollManager()
{
	printf("Setting up Payroll Manager..\n");
}

double PayrollManager::getTax()
{
	return this->tax;
}

void PayrollManager::setTax(double tax)
{
	this->tax = tax;
}

double PayrollManager::calculatePay(Employee employee)
{
	printf("Calculating employee pay...\n");
	return this->totalPay;
}

void PayrollManager::processPaycheck()
{
	printf("Processing Paychecks...\n");
}

void PayrollManager::RetrieveEmployeeHours(Employee employee)
{
	printf("Retrieving Employee: %d Hours...\n", employee.getId());
}
