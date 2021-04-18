//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include <string>

class Address
{
private:
	std::string addressLine;
	std::string city;
	std::string state;
	int zip;

public:
	Address();
	Address(std::string addressLine, std::string city, std::string state, int zip);
	std::string getAddressLine();
	void setAddressLine(std::string addressLine);
	std::string getCity();
	void setCity(std::string city);
	std::string getState();
	void setState(std::string state);
	int getZip();
	void setZip(int zip);
	std::string GetFullAddress();
};

