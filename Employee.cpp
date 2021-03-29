//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "Employee.h"
#include <stdio.h>

Employee::Employee()
{
	this->name = "John";
	this->age = 30;
	this->gender = "male";
	this->address = Address("123 USA", "Palm Bay", "FL", 32908);
	this->id = 0;
	this->phone = 1234567;
	this->payRate = 35;
	this->title = "Software Engineer";
	this->timeCard = TimeCard();

}

int Employee::getId()
{
	return this->id;
}

void Employee::setId(int id)
{
	this->id = id;
}

std::string Employee::getName()
{
	return this->name;
}

void Employee::setName(std::string name)
{
	this->name = name;
}

int Employee::getAge()
{
	return this->age;
}

void Employee::setAge(int age)
{
	this->age = age;
}

std::string Employee::getGender()
{
	return this->gender;
}

void Employee::setGender(std::string gender)
{
	this->gender = gender;
}

Address Employee::getAddress()
{
	return this->address;
}

void Employee::setAddress(Address address)
{
	this->address = address;
}

int Employee::getPhone()
{
	return this->phone;
}

void Employee::setPhone(int phone)
{
	this->phone = phone;
}

double Employee::getPayRate()
{
	return this->payRate;
}

void Employee::setPayRate(double rate)
{
	this->payRate = payRate;
}

TimeCard Employee::getTimeCard()
{
	return this->timeCard;
}

void Employee::setTimeCard(TimeCard timecard)
{
	this->timeCard = timeCard;
}
