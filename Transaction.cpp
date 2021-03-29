//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "Transaction.h"
#include <stdio.h>

Transaction::Transaction()
{
	this->price = 0;
	this->purchaseDate = Date();
	this->quantity = 1;
	this->taxAmount = 7;
	this->totalPrice = 0;
	this->transactionNum = 0;
}

int Transaction::getTransaction()
{
	return this->transactionNum;
}

void Transaction::setTransactionNum(int transactionNum)
{
	this->transactionNum = transactionNum;
}

double Transaction::getTaxAmount()
{
	return this->taxAmount;
}

void Transaction::setTaxAmount(double taxAmount)
{
	this->taxAmount = taxAmount;
}

double Transaction::getprice()
{
	return this->price;
}

void Transaction::setPrice(double price)
{
	this->price = price;
}

int Transaction::getQuantity()
{
	return this->quantity;
}

void Transaction::setQuantity(int quantity)
{
	this->quantity = quantity;
}

double Transaction::getTotalPrice()
{
	return this->totalPrice;
}

void Transaction::setTotalPrice(double totalPrice)
{
	this->totalPrice = totalPrice;
}

Date Transaction::getPurchaseDate()
{
	return this->purchaseDate;
}

void Transaction::setPurchaseDate(Date purchaseDate)
{
	this->purchaseDate = purchaseDate;
}
