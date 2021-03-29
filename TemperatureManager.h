//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
#include <vector>
#include "CommonStructs.h"
#include "Enclosure.h"

class TemperatureManager
{
private:
	int temperature;
	std::vector<Enclosure> enclosures;
	TempFault tempFault;
	uint32_t humidity;

public:
	TemperatureManager();
	int getTemperature(int enclosureId);
	void setTemperature(int enclosureId, int tempMinMax[][2]);
	void monitor();
	void setFault(int enclosureId, TempFault tempFault);
	void clearFault(int enclosureId);
	void reset(int enclosureId);
	int getHumidity(int enclosureId);
	void alertMaintenance();
};

