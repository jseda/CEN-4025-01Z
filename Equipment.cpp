//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "Equipment.h"
#include <stdio.h>

Equipment::Equipment()
{
	this->equipmentId = 0;
	this->name = "EquipmentName";
}

int Equipment::getEquipmentId()
{
	return this->equipmentId;
}

void Equipment::setEquipmentId(int equipmentId)
{
	this->equipmentId = equipmentId;
}

std::string Equipment::getName()
{
	return this->name;
}

void Equipment::setName(std::string name)
{
	this->name = name;
}
