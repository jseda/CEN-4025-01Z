//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "TemperatureManager.h"
#include <stdio.h>

TemperatureManager::TemperatureManager()
{
	printf("Setting up Temperature Manager..\n");
}

int TemperatureManager::getTemperature(int enclosureId)
{
	printf("Enclosure: %d temperature is: %d\n", enclosureId, 72);
	return 0;
}

void TemperatureManager::setTemperature(int enclosureId, int tempMinMax[][2])
{
	printf("Setting Enclosure: %d temperature to Min(%d) and Max(%d)\n", enclosureId, tempMinMax[0][0], tempMinMax[0][1]);
}

void TemperatureManager::monitor()
{
	printf("Monitoring Enclosure Temperatures...\n");
}

void TemperatureManager::setFault(int enclosureId, TempFault tempFault)
{
	printf("Setting fault for enclosure: %d to Fault: %d\n", enclosureId, tempFault);
}

void TemperatureManager::clearFault(int enclosureId)
{
	printf("Clearing fault for enclosure: %d...\n", enclosureId);
}

void TemperatureManager::reset(int enclosureId)
{
	printf("Resetting climate control for enclosure: %d...\n", enclosureId);
}

int TemperatureManager::getHumidity(int enclosureId)
{
	printf("Enclosure: %d humidity is: %d", enclosureId, 40);
	return 40;
}

void TemperatureManager::alertMaintenance()
{
	printf("Alerting maintenance...\n");
}
