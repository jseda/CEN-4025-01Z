//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
class Enclosure
{
private:
	int id;
	bool IsLocked;
	int tempMin;
	int tempMax;
	bool tempFault;
	int temp;
	int humidity;

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
	void resetClimateControl();
	bool IsTempFault();
	void setTempFault(bool isFault);
	int getTemp();
	void setTemp(int temp);
	int getHumidity();
	void setHumidity(int humidity);
};

