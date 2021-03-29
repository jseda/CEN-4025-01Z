//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

// ZooInformationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AccountingManager.h"
#include "AnimalHealthManager.h"
#include "EmployeeManager.h"
#include "FoodManager.h"
#include "GuestManager.h"
#include "MaintenanceScheduleMonitor.h"
#include "PayrollManager.h"
#include "TemperatureManager.h"
#include "WaterQualityManager.h"
#include "WeatherMonitor.h"
#include "ZooSecurityManager.h"
#include <stdio.h>


//The following code in main has been written for testing purposes as most of these services would be managed through a GUI.
int main()
{
    std::cout << "..................................\n";
    std::cout << "Starting Zoo Information System...\n";
    std::cout << "..................................\n";
    std::cout << "\n";

    //Initializing the main manager classes
    AccountingManager accountingManager;
    AnimalHealthManager animalHealthManager;
    EmployeeManager employeeManager;
    FoodManager foodManager;
    GuestManager guestManager;
    MaintenanceScheduleMonitor maintScheduleMonitor;
    PayrollManager payManager;
    TemperatureManager tempManager;
    WaterQualityManager waterManager;
    WeatherMonitor weatherMonitor;
    ZooSecurityManager securityManager;

    std::cout << ".\n.\n.\n";

    std::cout << "..................................\n";
    std::cout << "Security systems starting...\n";
    std::cout << "..................................\n";
    std::cout << "\n";
    //Check Zoo security
    securityManager.Authenticate("username", "password");
    securityManager.activateAllCameras();
    securityManager.lockAllEnclosures();

    std::cout << "..................................\n";
    std::cout << "Monitoring services starting...\n";
    std::cout << "..................................\n";
    std::cout << "\n";

    //Start monitoring Animal health
    animalHealthManager.monitorHealth();

    //Start monitoring food
    foodManager.monitorQuantity();
    foodManager.monitorExpirationDates();
    foodManager.monitorStoredFoodTemp();

    //Start monitoring enclosure temperatures
    tempManager.monitor();

    //Start monitoring water quality
    waterManager.monitorWaterQuality();
    waterManager.printWaterQualityReport();

    //Start monitoring the weather
    weatherMonitor.monitorWeather();
    weatherMonitor.printWeatherInfo();


    std::cout << "..................................\n";
    std::cout << "Adding new employee to the system...\n";
    std::cout << "..................................\n";
    std::cout << "\n";
    //Sample code to add employee
    Employee newEmployee;
    newEmployee.setAddress(Address("123 USA", "Palm Bay", "FL", 32908));
    newEmployee.setAge(36);
    newEmployee.setGender("Male");
    newEmployee.setName("Joel");
    newEmployee.setId(0000001);
    newEmployee.setPayRate(35);
    newEmployee.setPhone(0000000);
    
    employeeManager.addEmployee(newEmployee);

    std::cout << "\n";

    std::cout << "..................................\n";
    std::cout << "Adding new customer to the system...\n";
    std::cout << "..................................\n";
    std::cout << "\n";
    //Sample code to add customer
    Customer newCustomer;
    newCustomer.setAddress(Address("123 USA", "Palm Bay", "FL", 32908));
    newCustomer.setAge(30);
    newCustomer.setName("Lisa");
    newCustomer.setId(0000001);
    newCustomer.setPhone(0000000);
    newCustomer.setEmail("123@email.com");

    guestManager.addCustomer(newCustomer);
    guestManager.addMembership(0000001);

    std::cout << "\n";


    std::cout << "..................................\n";
    std::cout << "Process Payroll...\n";
    std::cout << "..................................\n";
    std::cout << "\n";
    
    payManager.calculatePay(newEmployee);
    payManager.RetrieveEmployeeHours(newEmployee);
    payManager.processPaycheck();

    std::cout << "\n";


    std::cout << "..................................\n";
    std::cout << "Generating accounting reports...\n";
    std::cout << "..................................\n";
    std::cout << "\n";

    accountingManager.calculateWeeklyCashflow();
    accountingManager.generateBudgetReport();
    accountingManager.generateExpenseReport();
    accountingManager.generateIncomeReport();
    accountingManager.sendExpensePayments();

    std::cout << "\n";

    std::cout << "..................................\n";
    std::cout << "Generating maintenance reports...\n";
    std::cout << "..................................\n";
    std::cout << "\n";

    maintScheduleMonitor.generateMaintenanceReport();
    maintScheduleMonitor.generateWeeklySchedule();
    maintScheduleMonitor.getEnclosuresDue();
    maintScheduleMonitor.getEquipmentDue();
    maintScheduleMonitor.getZonesDue();


    std::cout << "..................................\n";
    std::cout << "Sample enclosure climate control failure sequence...\n";
    std::cout << "..................................\n";
    std::cout << "\n";

    //Monitor temperature
    tempManager.monitor();

    //if enclosure temperature is above the threshold set fault
    //Note in the real system this will happen inside of the monitor fucntion
    tempManager.setFault(0, TempFault::ABOVE_THRESH);

    //If fault detected reset climate control of enclosure
    tempManager.reset(0);
    tempManager.monitor();

    //if temperature is back to normal clear fault
    tempManager.clearFault(0);
   


}