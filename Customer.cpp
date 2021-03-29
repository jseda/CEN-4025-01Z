//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "Customer.h"
#include <stdio.h>

Customer::Customer()
{
	this->address = Address("123 USA", "Palm Bay", "FL", 32908);
	this->age = 0;
	this->email = "12345@email.com";
	this->name = "John";
	this->phone = 1234567;
	this->id = 0;
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

int Customer::getPhone()
{
	return this->phone;
}

void Customer::setPhone(int phone)
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

int Customer::getId()
{
	return this->id;
}

void Customer::setId(int id)
{
	this->id = id;
}
