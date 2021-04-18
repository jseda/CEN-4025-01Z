//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#include "Customer.h"
#include <stdio.h>

Customer::Customer()
{
	this->address = Address("123 USA", "Palm Bay", "FL", 32908);
	this->age = 0;
	this->email = "12345@email.com";
	this->name = "John";
	this->phone = 1234567;
	this->accountNum = 0;
}

Customer::Customer(std::string name, int age, Address address, uint32_t phone, std::string email, int id)
{
	this->address = address;
	this->age = age;
	this->email = email;
	this->name = name;
	this->phone = phone;
	this->accountNum = id;
}

std::string Customer::getName()
{
	return this->name;
}

void Customer::setName(std::string name)
{
	this->name = name;
}

int Customer::getAge()
{
	return this->age;
}

void Customer::setAge(int age)
{
	this->age = age;
}

Address Customer::getAddress()
{
	return this->address;
}

void Customer::setAddress(Address address)
{
	this->address = address;
}

uint32_t Customer::getPhone()
{
	return this->phone;
}

void Customer::setPhone(uint32_t phone)
{
	this->phone = phone;
}

std::string Customer::getEmail()
{
	return this->email;
}

void Customer::setEmail(std::string email)
{
	this->email = email;
}

int Customer::getAccountNum()
{
	return this->accountNum;
}

void Customer::setAccountNum(int id)
{
	this->accountNum = id;
}
