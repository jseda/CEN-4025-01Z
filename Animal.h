//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include <string>
#include "CommonStructs.h"
#include "Vitals.h"

class Animal
{
private:
	std::string species;
	std::string name;
	int age;
	int weight;
	FoodClass food;
	std::string gender;
	bool fixed;
	int id;
	Vitals vitals;

public:
	Animal();
	Animal(std::string species, std::string name, int age, int weight, FoodClass foodClass, std::string gender, bool fixed, int id, Vitals vitals); //Overloaded Constructor is missing parameters
	void setSpecies(std::string species);
	std::string getSpecies();
	void setName(std::string name);
	std::string getName();
	void setAge(int age);
	int getAge();
	void setWeight(int weight);
	int getWeight();
	void setFood(FoodClass food);
	FoodClass getFood();
	void setGender(std::string gender);
	std::string getGender();
	void setFixed(bool fixed);
	bool isFixed();
	int getId();
	void setId(int id);
	Vitals getVitals();
	void setVitals(Vitals vitals);
};

