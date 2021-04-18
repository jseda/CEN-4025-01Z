//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

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
    WaterQualityManager waterManager;
    WeatherMonitor weatherMonitor;
    ZooSecurityManager securityManager;
    TemperatureManager tempManager;

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";

    //Only run one test case at a time by uncommenting and running and then commenting it back

    //CASE_ ZOO_IS _01
    /*tempManager.setTemperature(0, 75);
    tempManager.setTemperatureMinMax(0, 60, 78);
    tempManager.setTemperature(1, 72);
    tempManager.setTemperatureMinMax(1, 60, 78);
    tempManager.monitor();*/

    //CASE_ ZOO_IS _02
    /*tempManager.setTemperature(0, 79);
    tempManager.setTemperatureMinMax(0, 60, 78);
    tempManager.setTemperature(1, 72);
    tempManager.setTemperatureMinMax(1, 60, 78);
    tempManager.monitor();*/


    //CASE_ ZOO_IS _03
    /*tempManager.setTemperature(0, 75);
    tempManager.setTemperatureMinMax(0, 60, 78);
    tempManager.setTemperature(1, 59);
    tempManager.setTemperatureMinMax(1, 60, 78);
    tempManager.monitor();*/

    //CASE_ ZOO_IS _04
    /*tempManager.setTemperature(0, 75);
    tempManager.setTemperatureMinMax(0, 60, 78);
    tempManager.setTemperature(1, 59);
    tempManager.setTemperatureMinMax(1, 60, 78);
    tempManager.monitor();*/

    //CASE_ ZOO_IS _05
    /*tempManager.setTemperature(0, 75);
    tempManager.setTemperatureMinMax(0, 60, 78);
    tempManager.setTemperature(1, 59);
    tempManager.setTemperatureMinMax(1, 60, 78);
    tempManager.setEnclosureResetThreshold(1, 9);
    tempManager.monitor();*/

    //CASE_ ZOO_IS _06
    //guestManager.CreateNewCustomer("Joel", "123 USA", "Palm Bay", "FL", 32908, 36, 3215550000, "123@email.com");

    //CASE_ ZOO_IS _07
    /*guestManager.CreateNewCustomer("Joel", "123 USA", "Palm Bay", "FL", 32908, 36, 3215550000, "123@email.com");
    guestManager.CreateNewCustomer("John", "124 USA", "Palm Bay", "FL", 32908, 37, 4075550000, "124@email.com");*/

    //CASE_ ZOO_IS _08
    /*guestManager.CreateNewCustomer("Joel", "123 USA", "Palm Bay", "FL", 32908, 36, 3215550000, "123@email.com");
    guestManager.CreateNewCustomer("John", "124 USA", "Palm Bay", "FL", 32908, 37, 4075550000, "124@email.com");
    guestManager.deleteCustomer(1);
    guestManager.FindCustomer(1);*/

    //CASE_ ZOO_IS _09
   /* guestManager.CreateNewCustomer("Joel", "123 USA", "Palm Bay", "FL", 32908, 36, 3215550000, "123@email.com");
    guestManager.addMembership(1);*/

    //CASE_ ZOO_IS _10
    /*guestManager.CreateNewCustomer("Joel", "123 USA", "Palm Bay", "FL", 32908, 36, 3215550000, "123@email.com");
    guestManager.addMembership(1);
    guestManager.deleteMembership(1);
    guestManager.findMembership(1);*/

    //CASE_ ZOO_IS _11
    /*guestManager.CreateNewCustomer("Joel", "123 USA", "Palm Bay", "FL", 32908, 36, 3215550000, "123@email.com");
    guestManager.updateGuestInfo(1, "John", "124 USA", "Palm Bay", "FL", 32908, 37, 4075550000, "124@email.com");*/

    //CASE_ ZOO_IS _12
    /*guestManager.CreateNewCustomer("Joel", "123 USA", "Palm Bay", "FL", 32908, 36, 3215550000, "123@email.com");
    guestManager.addMembership(1);
    guestManager.printGuestInfo(1);*/


   //std::cout << ".\n.\n.\n";

   // std::cout << "..................................\n";
   // std::cout << "Security systems starting...\n";
   // std::cout << "..................................\n";
   // std::cout << "\n";
   // //Check Zoo security
   // securityManager.Authenticate("username", "password");
   // securityManager.activateAllCameras();
   // securityManager.lockAllEnclosures();

   // std::cout << "..................................\n";
   // std::cout << "Monitoring services starting...\n";
   // std::cout << "..................................\n";
   // std::cout << "\n";

   // //Start monitoring Animal health
   // animalHealthManager.monitorHealth();

   // //Start monitoring food
   // foodManager.monitorQuantity();
   // foodManager.monitorExpirationDates();
   // foodManager.monitorStoredFoodTemp();

   // //Start monitoring enclosure temperatures
   // tempManager.monitor();

   // //Start monitoring water quality
   // waterManager.monitorWaterQuality();
   // waterManager.printWaterQualityReport();

   // //Start monitoring the weather
   // weatherMonitor.monitorWeather();
   // weatherMonitor.printWeatherInfo();


   // std::cout << "..................................\n";
   // std::cout << "Adding new employee to the system...\n";
   // std::cout << "..................................\n";
   // std::cout << "\n";
   // //Sample code to add employee
   // Employee newEmployee;
   // newEmployee.setAddress(Address("123 USA", "Palm Bay", "FL", 32908));
   // newEmployee.setAge(36);
   // newEmployee.setGender("Male");
   // newEmployee.setName("Joel");
   // newEmployee.setId(0000001);
   // newEmployee.setPayRate(35);
   // newEmployee.setPhone(0000000);
   // 
   // employeeManager.addEmployee(newEmployee);

   // std::cout << "\n";

   // std::cout << "..................................\n";
   // std::cout << "Adding new customer to the system...\n";
   // std::cout << "..................................\n";
   // std::cout << "\n";
   // //Sample code to add customer
   // Customer newCustomer;
   // newCustomer.setAddress(Address("123 USA", "Palm Bay", "FL", 32908));
   // newCustomer.setAge(30);
   // newCustomer.setName("Lisa");
   // newCustomer.setAccountNum(0000001);
   // newCustomer.setPhone(0000000);
   // newCustomer.setEmail("123@email.com");

   // guestManager.addCustomer(newCustomer);
   // guestManager.addMembership(0000001);

   // std::cout << "\n";


   // std::cout << "..................................\n";
   // std::cout << "Process Payroll...\n";
   // std::cout << "..................................\n";
   // std::cout << "\n";
   // 
   // payManager.calculatePay(newEmployee);
   // payManager.RetrieveEmployeeHours(newEmployee);
   // payManager.processPaycheck();

   // std::cout << "\n";


   // std::cout << "..................................\n";
   // std::cout << "Generating accounting reports...\n";
   // std::cout << "..................................\n";
   // std::cout << "\n";

   // accountingManager.calculateWeeklyCashflow();
   // accountingManager.generateBudgetReport();
   // accountingManager.generateExpenseReport();
   // accountingManager.generateIncomeReport();
   // accountingManager.sendExpensePayments();

   // std::cout << "\n";

   // std::cout << "..................................\n";
   // std::cout << "Generating maintenance reports...\n";
   // std::cout << "..................................\n";
   // std::cout << "\n";

   // maintScheduleMonitor.generateMaintenanceReport();
   // maintScheduleMonitor.generateWeeklySchedule();
   // maintScheduleMonitor.getEnclosuresDue();
   // maintScheduleMonitor.getEquipmentDue();
   // maintScheduleMonitor.getZonesDue();


   // std::cout << "..................................\n";
   // std::cout << "Sample enclosure climate control failure sequence...\n";
   // std::cout << "..................................\n";
   // std::cout << "\n";

   // //Monitor temperature
   // tempManager.monitor();

   // //if enclosure temperature is above the threshold set fault
   // //Note in the real system this will happen inside of the monitor fucntion
   // tempManager.setFault(0, TempFault::ABOVE_THRESH);

   // //If fault detected reset climate control of enclosure
   // tempManager.reset(0);
   // tempManager.monitor();

   // //if temperature is back to normal clear fault
   // tempManager.clearFault(0);
   


}


void TestTempManager()
{

}