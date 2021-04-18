//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#include "Enclosure.h"
#include <stdio.h>
#include "CommonStructs.h"
#include <thread>

Enclosure::Enclosure()
{
	this->id = 0;
	this->IsLocked = false;
	this->tempFault = false;
	this->tempMax = 75;
	this->tempMin = 60;
	this->temp = 72;
	this->humidity = 40;
	this->resetThreshold = 11;
}

int Enclosure::getId()
{
	return this->id;
}

void Enclosure::setid(int id)
{
	this->id = id;
}

void Enclosure::lock()
{
	printf("Enclosure locked...\n");
}

void Enclosure::unlock()
{
	printf("Enclosure unlocked...\n");
}

bool Enclosure::getIsLocked()
{
	return this->IsLocked;
}

void Enclosure::setIsLocked(bool locked)
{
	this->IsLocked = locked;
}

int Enclosure::getTempMin()
{
	return this->tempMin;
}

void Enclosure::setTempMin(int minTemp)
{
	this->tempMin = minTemp;
}

int Enclosure::getTempMax()
{
	return this->tempMax;
}

void Enclosure::setTempMax(int maxTemp)
{
	this->tempMax = maxTemp;
}

bool Enclosure::resetClimateControl()
{	
	time_t startTime;
	time_t endTime;
	time(&startTime);
	
	std::chrono::seconds duration(10);
	std::this_thread::sleep_for(duration);

	time(&endTime);

	int elapsedTime = difftime(endTime, startTime);
	

	printf("Enclosure %d resetting climate control...\n", this->id);

	if (elapsedTime > resetThreshold)
	{
		return false;
	}
	else
	{
		this->tempFault = false;
		this->tempMax = 78;
		this->tempMin = 60;
		this->temp = 75;
		this->humidity = 40;

		return true;
	}
}

bool Enclosure::IsTempFault()
{
	return this->tempFault;
}

void Enclosure::setTempFault(bool isFault)
{
	this->tempFault = isFault;
}

int Enclosure::getTemp()
{
	return this->temp;
}

void Enclosure::setTemp(int temp)
{
	this->temp = temp;
}

int Enclosure::getHumidity()
{
	return this->humidity;
}

void Enclosure::setHumidity(int humidity)
{
	this->humidity = humidity;
}

void Enclosure::setFaultType(TempFault tempFault)
{
	this->faultType = tempFault;
}

TempFault Enclosure::getFaultType()
{
	return this->faultType;
}

void Enclosure::setThreshold(int threshold)
{
	this->resetThreshold = threshold;
}

int Enclosure::getThreshold()
{
	return this->resetThreshold;
}
