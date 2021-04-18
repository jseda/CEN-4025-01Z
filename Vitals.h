//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#pragma once
class Vitals
{
private:
	int temp;
	int pulse;
	int breathingRate;
	int bloodPressure;

public:
	Vitals();
	int getTemp();
	void setTemp(int temp);
	int getPulse();
	void setPulse(int pulse);
	int getBreathingRate();
	void setBreathingRate(int breathingRate);
	int getBloodPressure();
	void setBloodPressure(int bloodPressure);
};

