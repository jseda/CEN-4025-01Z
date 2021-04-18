//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include <vector>
#include "Animal.h"
#include "Transaction.h"
#include "Food.h"

class FoodManager
{
private:
	std::vector<Animal> animals;
	std::vector<Food> food;
	Transaction orderTransaction;

public:
	FoodManager();
	void monitorExpirationDates();
	void scheduleFeeding();
	void placeFoodOrder();
	void monitorQuantity();
	void monitorStoredFoodTemp();
};

