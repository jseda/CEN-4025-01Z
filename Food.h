//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include <vector>
#include <string>
#include "Date.h"
#include "CommonStructs.h"

class Food
{
private:
	std::string name;
	Date expDate;
	int quantity;
	FoodType foodType;
	int storedMaxTemp;
	int storedMinTemp;

public:
	Food();
	Food(std::string name, Date expDate, int quantity, FoodType foodType, int storedMaxTemp, int storedMinTemp);
	std::string getName();
	void setName(std::string name);
	Date getExpDate();
	void setExpDate(Date expDate);
	int getQuantity();
	void setQuantity(int quantity);
	FoodType getFoodType();
	void setFoodType(FoodType foodType);
	int getStoredMaxTemp();
	void setStoredMaxTemp(int storedMaxTemp);
	int getStoredMinTemp();
	void setStoredMinTemp(int storedMinTemp);
};

