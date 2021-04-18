//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#include "Animal.h"
#include <stdio.h>

Animal::Animal()
{
    this->species = "";
    this->name = "";
    this->age = 0;
    this->weight = 0;
    this->food = FoodClass::OMNIVORES;
    this->gender = "";
    this->fixed = false;
    this->id = 0;
    this->vitals = Vitals();
}

Animal::Animal(std::string species, std::string name, int age, int weight, FoodClass foodClass, std::string gender, bool fixed, int id, Vitals vitals)
{
    this->species = species;
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->food = foodClass;
    this->gender = gender;
    this->fixed = fixed;
    this->id = id;
    this->vitals = vitals;
}

void Animal::setSpecies(std::string species)
{
    this->species = species;
}

std::string Animal::getSpecies()
{
    return this->species;
}

void Animal::setName(std::string name)
{
    this->name = name;
}

std::string Animal::getName()
{
    return this->name;
}

void Animal::setAge(int age)
{
    this->age = age;
}

int Animal::getAge()
{
    return this->age;
}

void Animal::setWeight(int weight)
{
    this->weight = weight;
}

int Animal::getWeight()
{
    return this->weight;
}

void Animal::setFood(FoodClass food)
{
    this->food = food;
}

FoodClass Animal::getFood()
{
    return this->food;
}

void Animal::setGender(std::string gender)
{
    this->gender = gender;
}

std::string Animal::getGender()
{
    return this->gender;
}

void Animal::setFixed(bool fixed)
{
    this->fixed = fixed;
}

bool Animal::isFixed()
{
    return this->fixed;
}

int Animal::getId()
{
    return this->id;
}

void Animal::setId(int id)
{
    this->id = id;
}

Vitals Animal::getVitals()
{
    return this->vitals;
}

void Animal::setVitals(Vitals vitals)
{
    this->vitals = vitals;
}
