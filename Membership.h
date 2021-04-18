//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include "Date.h"
#include "Customer.h"

class Membership
{
private:
	int accountNum;
	Customer customer;
	Date expDate;

public:
	Membership();
	int getAccountNum();
	void setAccountNum(int accountNum);
	Customer getCustomer();
	void setCustomer(Customer customer);
	Date getExpDate();
	void setExpDate(Date expDate);
};

