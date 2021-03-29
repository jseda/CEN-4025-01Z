//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "GuestManager.h"
#include <stdio.h>

GuestManager::GuestManager()
{
	printf("Setting up Guest Manager..\n");
}

void GuestManager::addCustomer(Customer customer)
{
	this->customers.push_back(customer);
	printf("Guest added to database...\n");
}

bool GuestManager::deleteCustomer(int id)
{
	int index = 0;
	bool found = false;

	for (int i = 0; i < this->customers.size(); i++)
	{
		if (this->customers[i].getId() == id)
		{
			index = i;
			found = true;
		}
		break;
	}

	if (found)
	{
		this->customers.erase(this->customers.begin() + index);
		found = false;
		printf("Removed Guest: %d...\n", id);
		return true;
	}
	else
	{
		printf("Guest not found...\n");
		return false;
	}
}

void GuestManager::addMembership(int customerId)
{
	int number = 123; //In the real world system this number would be incremented based on the current memberships
	Membership newMembership;
	newMembership.setAccountNum(customerId + number);

	int index = 0;
	bool found = false;

	for (int i = 0; i < this->customers.size(); i++)
	{
		if (this->customers[i].getId() == customerId)
		{
			newMembership.setCustomer(this->customers[i]);
			printf("Guest added to membership...\n");
		}
	}

	Date expDate;
	expDate.setDay(31);
	expDate.setMonth(12);
	expDate.setYear(2021);
	newMembership.setExpDate(expDate);	

	this->memberships.push_back(newMembership);

	printf("Membership: %d created...\n", newMembership.getAccountNum());
}

void GuestManager::deleteMembership(int customerId)
{
	int index = 0;
	bool found = false;

	for (int i = 0; i < this->memberships.size(); i++)
	{
		if (this->memberships[i].getCustomer().getId() == customerId)
		{
			index = i;
			found = true;
		}
		break;
	}

	if (found)
	{
		this->memberships.erase(this->memberships.begin() + index);
		found = false;
		printf("Removed Membership: %d...\n", customerId);
	}
	else
	{
		printf("Membership not found...\n");
	}
}

Membership GuestManager::getMembership(int customerId)
{
	int index = 0;
	bool found = false;

	for (int i = 0; i < this->memberships.size(); i++)
	{
		if (this->memberships[i].getCustomer().getId() == customerId)
		{
			return this->memberships[i];
			printf("Membership found!...\n");
		}
	}

	printf("Membership not found...\n");
	return Membership();
}

void GuestManager::printGuestInfo(int customerId)
{
	for (int i = 0; i < this->memberships.size(); i++)
	{
		if (this->memberships[i].getCustomer().getId() == customerId)
		{
			printf("Printing Customer: %d  Info...\n", this->memberships[i].getCustomer().getId());
		}
	}
}

void GuestManager::updateGuestInfo(Customer customer)
{
	printf("Updating Guest Info!..");
}

void GuestManager::printMembershipCard(int customerId)
{
	for (int i = 0; i < this->memberships.size(); i++)
	{
		if (this->memberships[i].getCustomer().getId() == customerId)
		{
			printf("Printing Membership: %d  Info...\n", this->memberships[i].getAccountNum());
		}
	}
}
