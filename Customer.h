//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include <string>
#include "Address.h"

class Customer
{
private:
	std::string name;
	int age;
	Address address;
	uint32_t phone;
	std::string email;
	int accountNum;

public:
	Customer();
	Customer(std::string name, int age, Address address, uint32_t phone, std::string email, int id);
	std::string getName();
	void setName(std::string name);
	int getAge();
	void setAge(int age);
	Address getAddress();
	void setAddress(Address address);
	uint32_t getPhone();
	void setPhone(uint32_t phone);
	std::string getEmail();
	void setEmail(std::string email);
	int getAccountNum();
	void setAccountNum(int id);
};

