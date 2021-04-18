//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

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

