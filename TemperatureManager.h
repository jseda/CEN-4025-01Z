//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

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
	TemperatureManager(std::vector<Enclosure> enclosures);
	int getTemperature(int enclosureId);
	void setTemperatureMinMax(int enclosureId, int tempMin, int tempMax);
	void setTemperature(int enclosureId, int temp);
	void monitor();
	void setFault(int enclosureId, TempFault tempFault);
	void getFault(int enclosureId);
	void clearFault(int enclosureId);
	void reset(int enclosureId);
	int getHumidity(int enclosureId);
	void alertMaintenance();
	void setEnclosureResetThreshold(int enclosureId, int threshold);
};

