//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "Address.h"

Address::Address()
{
	this->addressLine = "";
	this->city = "";
	this->state = "";
	this->zip = 0;
}

Address::Address(std::string addressLine, std::string city, std::string state, int zip)
{
	this->addressLine = addressLine;
	this->city = city;
	this->state = state;
	this->zip = zip;
}

std::string Address::getAddressLine()
{
	return this->addressLine;
}

void Address::setAddressLine(std::string addressLine)
{
	this->addressLine = addressLine;
}

std::string Address::getCity()
{
	return this->city;
}

void Address::setCity(std::string city)
{
	this->city = city;
}

std::string Address::getState()
{
	return this->state;
}

void Address::setState(std::string state)
{
	this->state = state;
}

int Address::getZip()
{
	return this->zip;
}

void Address::setZip(int zip)
{
	this->zip = zip;
}
