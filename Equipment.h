//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
#include <string>

class Equipment
{
private:
	int equipmentId;
	std::string name;

public:
	Equipment();
	int getEquipmentId();
	void setEquipmentId(int equipmentId);
	std::string getName();
	void setName(std::string name);
};

