//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include "Animal.h"
#include <vector>

class AnimalHealthManager
{
private:
	std::vector<Animal> animal;

public:
	AnimalHealthManager();
	void startVitalMonitor();
	void stopVitalMonitor();
	void activateEmergency();
	void sendDailyReport();
	void alertVet();
	void printHealthReport();
	void monitorHealth();

};

