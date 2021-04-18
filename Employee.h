//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include <string>
#include "TimeCard.h"
#include "Address.h"

class Employee
{
private:
	int id;
	std::string name;
	int age;
	std::string gender;
	Address address;
	int phone;
	std::string title;
	double payRate;
	TimeCard timeCard;

public:
	Employee();
	int getId();
	void setId(int id);
	std::string getName();
	void setName(std::string name);
	int getAge();
	void setAge(int age);
	std::string getGender();
	void setGender(std::string gender);
	Address getAddress();
	void setAddress(Address address);
	int getPhone();
	void setPhone(int phone);
	double getPayRate();
	void setPayRate(double rate);
	TimeCard getTimeCard();
	void setTimeCard(TimeCard timecard);

};

