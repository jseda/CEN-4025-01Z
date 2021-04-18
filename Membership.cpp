//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#include "Membership.h"
#include <stdio.h>

Membership::Membership()
{
    this->accountNum = 0;
    this->customer = Customer();
    this->expDate = Date();
}

int Membership::getAccountNum()
{
    return this->accountNum;
}

void Membership::setAccountNum(int accountNum)
{
    this->accountNum = accountNum;
}

Customer Membership::getCustomer()
{
    return this->customer;
}

void Membership::setCustomer(Customer customer)
{
    this->customer = customer;
}

Date Membership::getExpDate()
{
    return this->expDate;
}

void Membership::setExpDate(Date expDate)
{
    this->expDate = expDate;
}
