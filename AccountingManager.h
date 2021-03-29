//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once

class AccountingManager
{
private:
	double foodExpense;
	double payrollExpense;
	double membershipIncome;
	double ticketIncome;
	double utilitiesExpense;
	double maintenanceExpense;

public:
	AccountingManager();
	void generateExpenseReport();
	void generateIncomeReport();
	void sendExpensePayments();
	void generateBudgetReport();
	void calculateWeeklyCashflow();
};

