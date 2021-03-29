//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "MaintenanceScheduleMonitor.h"
#include <stdio.h>

MaintenanceScheduleMonitor::MaintenanceScheduleMonitor()
{
	printf("Setting up Maintenance Schedule Monitor..\n");
}

Enclosure MaintenanceScheduleMonitor::getEnclosure(int id)
{
	for (int i = 0; i < this->enclosures.size(); i++)
	{
		if (this->enclosures[i].getId() == id)
		{
			printf("Found Enclosure!...\n");
			return this->enclosures[i];
		}
	}

	printf("Enclosure Not Found!...\n");
	return Enclosure();
}

void MaintenanceScheduleMonitor::setEnclosures(std::vector<Enclosure> enclosures)
{
	this->enclosures = enclosures;
}

std::vector<std::string> MaintenanceScheduleMonitor::getZoneList()
{
	return this->zoneList;
}

void MaintenanceScheduleMonitor::setZoneList(std::vector<std::string> zoneList)
{
	this->zoneList = zoneList;
}

Equipment MaintenanceScheduleMonitor::getEquipment(int id)
{
	for (int i = 0; i < this->equipmentList.size(); i++)
	{
		if (this->equipmentList[i].getEquipmentId() == id)
		{
			printf("Found Equipment!...\n");
			return this->equipmentList[i];
		}
	}

	printf("Equipment Not Found!...\n");
	return Equipment();
}

void MaintenanceScheduleMonitor::setEquipmentList(std::vector<Equipment> equipmentList)
{
	this->equipmentList = equipmentList;
}

void MaintenanceScheduleMonitor::setEmployees(std::vector<Employee> employees)
{
	this->employees = employees;
}

std::vector<int> MaintenanceScheduleMonitor::getEnclosuresDue()
{
	printf("Getting Enclosures Due for maintenance...\n");
	return std::vector<int>();
}

std::vector<int> MaintenanceScheduleMonitor::getEquipmentDue()
{
	printf("Getting Equipment Due for maintenance...\n");
	return std::vector<int>();
}

std::vector<std::string> MaintenanceScheduleMonitor::getZonesDue()
{
	printf("Getting Zones Due for maintenance...\n");
	return std::vector<std::string>();
}

void MaintenanceScheduleMonitor::generateWeeklySchedule()
{
	printf("Generating weekly maintenance schedule...\n");
}

void MaintenanceScheduleMonitor::assignJob()
{
	printf("Assigning Job...\n");
}

void MaintenanceScheduleMonitor::generateMaintenanceReport()
{
	printf("Generating maintenance report...\n");
}
