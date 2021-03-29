//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "Enclosure.h"
#include <stdio.h>

Enclosure::Enclosure()
{
	this->id = 0;
	this->IsLocked = false;
	this->tempFault = false;
	this->tempMax = 75;
	this->tempMin = 60;
	this->temp = 72;
	this->humidity = 40;
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

void Enclosure::resetClimateControl()
{
	printf("Resetting Enclosure climate control...\n");
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
