//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "Locks.h"
#include <stdio.h>

Locks::Locks()
{
	this->id = 0;
	this->IsLocked = false;
}

int Locks::getId()
{
	return this->id;
}

void Locks::setId(int id)
{
	this->id = id;
}

bool Locks::getIsLocked()
{
	return this->IsLocked;
}

void Locks::setIsLocked(bool locked)
{
	this->IsLocked = locked;
}

void Locks::lock()
{
	printf("Locking...\n");
}

void Locks::unlock()
{
	printf("Unlocking...\n");
}
