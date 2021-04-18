//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#pragma once
#include "Date.h"

class Transaction
{
private:
	int transactionNum;
	double taxAmount;
	double price;
	int quantity;
	double totalPrice;
	Date purchaseDate;

public:
	Transaction();
	int getTransaction();
	void setTransactionNum(int transactionNum);
	double getTaxAmount();
	void setTaxAmount(double taxAmount);
	double getprice();
	void setPrice(double price);
	int getQuantity();
	void setQuantity(int quantity);
	double getTotalPrice();
	void setTotalPrice(double totalPrice);
	Date getPurchaseDate();
	void setPurchaseDate(Date purchaseDate);

};

