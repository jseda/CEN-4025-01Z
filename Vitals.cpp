//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "Vitals.h"
#include <stdio.h>

Vitals::Vitals()
{
	this->bloodPressure = 0;
	this->breathingRate = 0;
	this->pulse = 0;
	this->temp = 0;
}

int Vitals::getTemp()
{
	return this->temp;
}

void Vitals::setTemp(int temp)
{
	this->temp = temp;
}

int Vitals::getPulse()
{
	return this->pulse;
}

void Vitals::setPulse(int pulse)
{
	this->pulse = pulse;
}

int Vitals::getBreathingRate()
{
	return this->breathingRate;
}

void Vitals::setBreathingRate(int breathingRate)
{
	this->breathingRate = breathingRate;
}

int Vitals::getBloodPressure()
{
	return this->bloodPressure;
}

void Vitals::setBloodPressure(int bloodPressure)
{
	this->bloodPressure = bloodPressure;
}
