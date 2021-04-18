//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#include "Pond_Lake.h"
#include <stdio.h>

Pond_Lake::Pond_Lake()
{
	this->alkalinity = 0;
	this->chloride = 0;
	this->clarity = 0;
	this->color = "Blue";
	this->hardness = 0;
	this->id = 0;
	this->nitrate = 0;
	this->pH = 0;
	this->phosphate = 0;
	this->statusOk = true;
	this->waterTemp = 72;
}

int Pond_Lake::getWaterTemp()
{
	return this->waterTemp;
}

void Pond_Lake::setWaterTemp(int waterTemp)
{
	this->waterTemp = waterTemp;
}

double Pond_Lake::getPH()
{
	return this->pH;
}

void Pond_Lake::setPH(double pH)
{
	this->pH = pH;
}

double Pond_Lake::getClarity()
{
	return this->clarity;
}

void Pond_Lake::setClarity(double clarity)
{
	this->clarity = clarity;
}

std::string Pond_Lake::getColor()
{
	return this->color;
}

void Pond_Lake::setColor(std::string color)
{
	this->color = color;
}

double Pond_Lake::getChloride()
{
	return this->chloride;
}

void Pond_Lake::setChloride(double chloride)
{
	this->chloride = chloride;
}

double Pond_Lake::getAlkalinity()
{
	return this->alkalinity;
}

void Pond_Lake::setAlkalinity(double alkalinity)
{
	this->alkalinity = alkalinity;
}

double Pond_Lake::getHardness()
{
	return this->hardness;
}

void Pond_Lake::setHardness(double hardness)
{
	this->hardness = hardness;
}

double Pond_Lake::getPhosphate()
{
	return this->phosphate;
}

void Pond_Lake::setPhosphate(double phosphate)
{
	this->phosphate = phosphate;
}

double Pond_Lake::getNitrate()
{
	return this->nitrate;
}

void Pond_Lake::setNitrate(double nitrate)
{
	this->nitrate = nitrate;
}

int Pond_Lake::getId()
{
	return this->id;
}

void Pond_Lake::setId(int id)
{
	this->id = id;
}

bool Pond_Lake::getStatusOk()
{
	return this->statusOk;
}

void Pond_Lake::setStatusOk(bool status)
{
	this->statusOk = status;
}
