//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
#include <string>
#include "Address.h"

class Customer
{
private:
	std::string name;
	int age;
	Address address;
	int phone;
	std::string email;
	int id;

public:
	Customer();
	std::string getName();
	void setName(std::string name);
	int getAge();
	void setAge(int age);
	Address getAddress();
	void setAddress(Address address);
	int getPhone();
	void setPhone(int phone);
	std::string getEmail();
	void setEmail(std::string email);
	int getId();
	void setId(int id);
};

