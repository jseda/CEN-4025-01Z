//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include "CommonStructs.h"
#include <ctime>

class Enclosure
{
private:
	int id;
	bool IsLocked;
	int tempMin;
	int tempMax;
	bool tempFault;
	TempFault faultType;
	int temp;
	int humidity;
	int resetThreshold;

public:
	Enclosure();
	int getId();
	void setid(int id);
	void lock();
	void unlock();
	bool getIsLocked();
	void setIsLocked(bool locked);
	int getTempMin();
	void setTempMin(int minTemp);
	int getTempMax();
	void setTempMax(int maxTemp);
	bool resetClimateControl();
	bool IsTempFault();
	void setTempFault(bool isFault);
	int getTemp();
	void setTemp(int temp);
	int getHumidity();
	void setHumidity(int humidity);
	void setFaultType(TempFault tempFault);
	TempFault getFaultType();
	void setThreshold(int threshold);
	int getThreshold();
};

