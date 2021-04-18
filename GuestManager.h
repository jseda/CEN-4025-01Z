//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4 and 4
//04-18-2021

#pragma once
#include <vector>
#include "Customer.h"
#include "Membership.h"
#include <string>

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
	void updateGuestInfo(int customerId, std::string name, std::string address, std::string city, std::string state, int zip, int age, uint32_t phone, std::string email);
	void printMembershipCard(int customerId);
	void CreateNewCustomer(std::string name, std::string address, std::string city, std::string state, int zip, int age, uint32_t phone, std::string email);
	int FindCustomer(int customerId);
	int findMembership(int customerId);

};

