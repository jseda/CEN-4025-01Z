//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "Food.h"
#include <stdio.h>

Food::Food()
{
	Date date;
	date.setDay(1);
	date.setMonth(12);
	date.setYear(2021);
	date.setHours(24);
	date.setMinutes(30);
	date.setSeconds(30);
	date.setMilliseconds(1);
	this->expDate = date;
	this->foodType = FoodType::NON_MEAT;
	this->name = "Carrots";
	this->quantity = 20;
	this->storedMaxTemp = 60;
	this->storedMinTemp = 35;
}

Food::Food(std::string name, Date expDate, int quantity, FoodType foodType, int storedMaxTemp, int storedMinTemp)
{
	this->expDate = expDate;
	this->foodType = foodType;
	this->name = name;
	this->quantity = quantity;
	this->storedMaxTemp = storedMaxTemp;
	this->storedMinTemp = storedMinTemp;
}

std::string Food::getName()
{
	return this->name;
}

void Food::setName(std::string name)
{
	this->name = name;
}

Date Food::getExpDate()
{
	return this->expDate;
}

void Food::setExpDate(Date expDate)
{
	this->expDate = expDate;
}

int Food::getQuantity()
{
	return this->quantity;
}

void Food::setQuantity(int quantity)
{
	this->quantity = quantity;
}

FoodType Food::getFoodType()
{
	return this->foodType;
}

void Food::setFoodType(FoodType foodType)
{
	this->foodType = foodType;
}

int Food::getStoredMaxTemp()
{
	return this->storedMaxTemp;
}

void Food::setStoredMaxTemp(int storedMaxTemp)
{
	this->storedMaxTemp = storedMaxTemp;
}

int Food::getStoredMinTemp()
{
	return this->storedMinTemp;
}

void Food::setStoredMinTemp(int storedMinTemp)
{
	this->storedMinTemp = storedMinTemp;
}
