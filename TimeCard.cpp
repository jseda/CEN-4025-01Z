//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#include "TimeCard.h"
#include <stdio.h>

TimeCard::TimeCard()
{
	this->overtime = 0;
	this->paidSickTime = 0;
	this->regularHours = 40;
	this->vacation = 0;
}

double TimeCard::getRegularHours()
{
	return this->regularHours;
}

void TimeCard::setRegularHours(double regularHours)
{
	this->regularHours = regularHours;
}

double TimeCard::getOvertime()
{
	return this->overtime;
}

void TimeCard::setOvertime(double overtime)
{
	this->overtime = overtime;
}

double TimeCard::getPaidSickTime()
{
	return this->paidSickTime;
}

void TimeCard::setPaidSickTime(double paidSickTime)
{
	this->paidSickTime = paidSickTime;
}

double TimeCard::getVacation()
{
	return this->vacation;
}

void TimeCard::setVacation(double vacation)
{
	this->vacation = vacation;
}
