//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
class TimeCard
{
private:
	double regularHours;
	double overtime;
	double paidSickTime;
	double vacation;

public:
	TimeCard();
	double getRegularHours();
	void setRegularHours(double regularHours);
	double getOvertime();
	void setOvertime(double overtime);
	double getPaidSickTime();
	void setPaidSickTime(double paidSickTime);
	double getVacation();
	void setVacation(double vacation);

};

