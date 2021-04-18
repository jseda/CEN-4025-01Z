//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include <vector>
#include <string>
#include "Employee.h"
#include "Enclosure.h"
#include "Equipment.h"

class MaintenanceScheduleMonitor
{
private:
	std::vector<Enclosure> enclosures;
	std::vector<std::string> zoneList;
	std::vector<Equipment> equipmentList;
	std::vector<Employee> employees;

public:
	MaintenanceScheduleMonitor();
	Enclosure getEnclosure(int id);
	void setEnclosures(std::vector<Enclosure> enclosures);
	std::vector<std::string> getZoneList();
	void setZoneList(std::vector<std::string> zoneList);
	Equipment getEquipment(int id);
	void setEquipmentList(std::vector<Equipment> equipmentList);
	void setEmployees(std::vector<Employee> employees);
	std::vector<int> getEnclosuresDue();
	std::vector<int> getEquipmentDue();
	std::vector<std::string> getZonesDue();
	void generateWeeklySchedule();
	void assignJob();
	void generateMaintenanceReport();
};

