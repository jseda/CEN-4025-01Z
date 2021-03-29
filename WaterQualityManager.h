//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
#include "Pond_Lake.h"

class WaterQualityManager
{
private:
	Pond_Lake pond_lake[15];

public:
	WaterQualityManager();
	void monitorWaterQuality();
	void sendWeeklyReport();
	void printWaterQualityReport();
	void adjustWaterLevels();
	void alertMaintenance();
	void MaintenanceRequiredAlert();
	void setStatus(Pond_Lake status[]);
};

