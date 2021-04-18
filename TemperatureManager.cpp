//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#include "TemperatureManager.h"
#include <stdio.h>

TemperatureManager::TemperatureManager()
{
	printf("Setting up Temperature Manager..\n");
	Enclosure enclosure;
	enclosure.setTemp(75);
	enclosure.setid(0);
	enclosure.setTempFault(false);
	enclosure.setTempMax(78);
	enclosure.setTempMin(60);

	enclosures.push_back(enclosure);

	enclosure.setTemp(72);
	enclosure.setid(1);
	enclosure.setTempFault(false);
	enclosure.setTempMax(78);
	enclosure.setTempMin(60);

	enclosures.push_back(enclosure);
}

TemperatureManager::TemperatureManager(std::vector<Enclosure> enclosures)
{
	this->enclosures = enclosures;
}

int TemperatureManager::getTemperature(int enclosureId)
{
	printf("Enclosure: %d temperature is: %d\n", enclosureId, 72);
	return 0;
}

void TemperatureManager::setTemperatureMinMax(int enclosureId, int tempMin, int tempMax)
{
	
	for (Enclosure &en : enclosures)
	{
		if (en.getId() == enclosureId)
		{
			en.setTempMin(tempMin);
			en.setTempMax(tempMax);
			printf("Setting Enclosure: %d temperature to Min(%d) and Max(%d)\n", en.getId(), en.getTempMin(), en.getTempMax());
		}
	}
}

void TemperatureManager::setTemperature(int enclosureId, int temp)
{
	for (Enclosure &en : enclosures)
	{
		if (en.getId() == enclosureId)
		{
			en.setTemp(temp);
			printf("Setting Enclosure: %d temperature to %d...\n", en.getId(), en.getTemp());
		}
	}
}

void TemperatureManager::monitor()
{
	printf("Monitoring Enclosure Temperatures...\n");
	bool tempsOk = true;

	for (Enclosure en : enclosures)
	{
		if (en.getTemp() > en.getTempMax())
		{
			printf("Enclosure %d temperature is above range at: %d degrees...\n", en.getId(), en.getTemp());
			setFault(en.getId(), TempFault::ABOVE_THRESH);
			tempsOk = false;
		}
		else if (en.getTemp() < en.getTempMin())
		{
			printf("Enclosure %d temperature is below range at: %d degrees...\n", en.getId(), en.getTemp());
			setFault(en.getId(), TempFault::BELOW_THRESH);
			tempsOk = false;
		}
		else
		{
			printf("Enclosure %d temperature is within range at: %d degrees...\n", en.getId(), en.getTemp());
		}

	}

	if (tempsOk)
	{
		printf("All enclosure temperatures within range...\n");

	}
	else
	{
		for (Enclosure en : enclosures)
		{
			if (en.IsTempFault())
			{
				getFault(en.getId());
				reset(en.getId());
			}
		}
	}
}

void TemperatureManager::setFault(int enclosureId, TempFault tempFault)
{

	for (Enclosure &en : enclosures)
	{
		if (en.getId() == enclosureId)
		{
			en.setTempFault(true);
			en.setFaultType(tempFault);

			printf("Setting fault for enclosure: %d to Fault: %d\n", en.getId(), en.getFaultType());
		}
	}
}

void TemperatureManager::getFault(int enclosureId)
{
	for (Enclosure& en : enclosures)
	{
		if (en.getId() == enclosureId)
		{
			printf("Enclosure: %d has a fault type: %d...\n", en.getId(), en.getFaultType());
		}
	}
}

void TemperatureManager::clearFault(int enclosureId)
{
	printf("Clearing fault for enclosure: %d...\n", enclosureId);
}

void TemperatureManager::reset(int enclosureId)
{
	printf("Resetting climate control for enclosure: %d...\n", enclosureId);

	for (Enclosure& en : enclosures)
	{
		if (en.getId() == enclosureId)
		{
			if (en.resetClimateControl())
			{
				printf("Climate control for enclosure: %d was successfully reset...\n", en.getId());
			}
			else
			{
				printf("Climate control reset for enclosure: %d was not successful...\n", en.getId());
				alertMaintenance();
			}
		}
	}
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

void TemperatureManager::setEnclosureResetThreshold(int enclosureId, int threshold)
{
	for (Enclosure& en : enclosures)
	{
		if (en.getId() == enclosureId)
		{
			en.setThreshold(threshold);
			printf("Setting enclosure %d reset threshold to %d seconds...\n", en.getId(), en.getThreshold());
		}
	}
}
