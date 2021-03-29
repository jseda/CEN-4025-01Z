//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "Date.h"
#include <stdio.h>

Date::Date()
{
	this->day = 1;
	this->hours = 24;
	this->milliseconds = 1;
	this->minutes = 60;
	this->month = 12;
	this->seconds = 60;
	this->year = 2021;
}

int Date::getMonth()
{
	return this->month;
}

void Date::setMonth(int month)
{
	this->month = month;
}

int Date::getDay()
{
	return this->day;;
}

void Date::setDay(int day)
{
	this->day = day;
}

int Date::getYear()
{
	return this->year;
}

void Date::setYear(int year)
{
	this->year = year;
}

int Date::getHours()
{
	return this->hours;
}

void Date::setHours(int hours)
{
	this->hours = hours;
}

int Date::getMinutes()
{
	return this->minutes;
}

void Date::setMinutes(int minutes)
{
	this->minutes = minutes;
}

int Date::getSeconds()
{
	return this->seconds;
}

void Date::setSeconds(int seconds)
{
	this->seconds = seconds;
}

int Date::getMilliseconds()
{
	return this->milliseconds;
}

void Date::setMilliseconds(int milliseconds)
{
	this->milliseconds = milliseconds;
}

void Date::printDate()
{
	printf("Date: %d/%d/%d %d:%d:%d.%d\n", this->month, this->day, this->year, this->hours, this->minutes, this->seconds, this->milliseconds);
}
