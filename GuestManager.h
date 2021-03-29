//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
#include <vector>
#include "Customer.h"
#include "Membership.h"

class GuestManager
{
private:
	std::vector<Customer> customers;
	std::vector<Membership> memberships;

public:
	GuestManager();
	void addCustomer(Customer customer);
	bool deleteCustomer(int id);
	void addMembership(int customerId);
	void deleteMembership(int customerId);
	Membership getMembership(int customerId);
	void printGuestInfo(int customerId);
	void updateGuestInfo(Customer customer);
	void printMembershipCard(int customerId);

};

