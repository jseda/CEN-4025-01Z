//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
class Date
{
private:
	int month;
	int day;
	int year;
	int hours;
	int minutes;
	int seconds;
	int milliseconds;

public:
	Date();
	int getMonth();
	void setMonth(int month);
	int getDay();
	void setDay(int day);
	int getYear();
	void setYear(int year);
	int getHours();
	void setHours(int hours);
	int getMinutes();
	void setMinutes(int minutes);
	int getSeconds();
	void setSeconds(int seconds);
	int getMilliseconds();
	void setMilliseconds(int milliseconds);
	void printDate();
};

