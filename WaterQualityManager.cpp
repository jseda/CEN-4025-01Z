//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "WaterQualityManager.h"
#include <stdio.h>

WaterQualityManager::WaterQualityManager()
{
	printf("Setting up Water Quality Manager..\n");
}

void WaterQualityManager::monitorWaterQuality()
{
	printf("Monitoring Water Quality...\n");
}

void WaterQualityManager::sendWeeklyReport()
{
	printf("Sending Weekly Report...\n");
}

void WaterQualityManager::printWaterQualityReport()
{
	printf("Printing Water Quality Report...\n");
}

void WaterQualityManager::adjustWaterLevels()
{
	printf("Adjusting Water Levels...\n");
}

void WaterQualityManager::alertMaintenance()
{
	printf("Alerting Maintenance...\n");
}

void WaterQualityManager::MaintenanceRequiredAlert()
{
	alertMaintenance();
}

void WaterQualityManager::setStatus(Pond_Lake status[])
{
	printf("Updating the status of pond...\n");
}
