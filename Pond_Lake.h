//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
#include <string>

class Pond_Lake
{
private:
	int id;
	int waterTemp;
	double pH;
	double clarity;
	std::string color;
	double chloride;
	double alkalinity;
	double hardness;
	double phosphate;
	double nitrate;
	bool statusOk;

public:
	Pond_Lake();
	int getWaterTemp();
	void setWaterTemp(int waterTemp);
	double getPH();
	void setPH(double pH);
	double getClarity();
	void setClarity(double clarity);
	std::string getColor();
	void setColor(std::string color);
	double getChloride();
	void setChloride(double chloride);
	double getAlkalinity();
	void setAlkalinity(double alkalinity);
	double getHardness();
	void setHardness(double hardness);
	double getPhosphate();
	void setPhosphate(double phosphate);
	double getNitrate();
	void setNitrate(double nitrate);
	int getId();
	void setId(int id);
	bool getStatusOk();
	void setStatusOk(bool status);
};

