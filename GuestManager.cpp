//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#include "GuestManager.h"
#include <stdio.h>

GuestManager::GuestManager()
{
	printf("Setting up Guest Manager..\n");
}

void GuestManager::addCustomer(Customer customer)
{
	printf("Adding customer to database...\n");
	this->customers.push_back(customer);
}

bool GuestManager::deleteCustomer(int id)
{
	int index = 0;
	bool found = false;

	for (int i = 0; i < this->customers.size(); i++)
	{
		if (this->customers[i].getAccountNum() == id)
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
	printf("Creating membership for customer account: %d\n", customerId);

	int number = memberships.size() + 1; //In the real world system this number would be incremented based on the current memberships
	Membership newMembership;
	newMembership.setAccountNum(stoi(std::to_string(customerId) + std::to_string(number)));

	int index = 0;
	bool found = false;

	for (int i = 0; i < this->customers.size(); i++)
	{
		if (this->customers[i].getAccountNum() == customerId)
		{
			newMembership.setCustomer(this->customers[i]);
		}
	}

	Date expDate;
	expDate.setDay(31);
	expDate.setMonth(12);
	expDate.setYear(2021);
	newMembership.setExpDate(expDate);	

	this->memberships.push_back(newMembership);

	printf("Membership %d created for customer account %d...\n", getMembership(customerId).getAccountNum(), getMembership(customerId).getCustomer().getAccountNum());
}

void GuestManager::deleteMembership(int customerId)
{
	int index = 0;
	bool found = false;
	int tempMemNum = 0;

	for (int i = 0; i < this->memberships.size(); i++)
	{
		if (this->memberships[i].getCustomer().getAccountNum() == customerId)
		{
			index = i;
			found = true;
		}
		break;
	}

	if (found)
	{
		tempMemNum = this->memberships[index].getAccountNum();
		this->memberships.erase(this->memberships.begin() + index);
		found = false;
		printf("Removed Membership: %d from customer account number: %d ...\n", tempMemNum, customerId);
	}
	else
	{
		printf("Membership not found for customer account number: %d...\n", customerId);
	}
}

Membership GuestManager::getMembership(int customerId)
{
	int index = 0;
	bool found = false;

	for (int i = 0; i < this->memberships.size(); i++)
	{
		if (this->memberships[i].getCustomer().getAccountNum() == customerId)
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
	int customerIndex = 0;
	int membershipIndex = 0;
	std::string membershipAccountNum = "None";
	std::string membershipExpDate = "None";

	customerIndex = FindCustomer(customerId);
	membershipIndex = findMembership(customerId);

	if (customerIndex >= 0)
	{
		if (membershipIndex >= 0)
		{
			membershipAccountNum = std::to_string(this->memberships[membershipIndex].getAccountNum());
			membershipExpDate = std::to_string(this->memberships[membershipIndex].getExpDate().getMonth()) + "/" +
				std::to_string(this->memberships[membershipIndex].getExpDate().getDay()) + "/" +
				std::to_string(this->memberships[membershipIndex].getExpDate().getYear());
		}

		printf("Printing Customer information for customer account number: %d:\n"
			"Name: %s\n"
			"Age: %d\n"
			"Address: %s\n"
			"Phone: %u\n"
			"Email: %s\n"
			"Account number: %d\n"
			"Membership number: %s\n"
			"Membership Exp. Date: %s\n",
			this->customers[customerIndex].getAccountNum(),
			this->customers[customerIndex].getName().c_str(),
			this->customers[customerIndex].getAge(),
			this->customers[customerIndex].getAddress().GetFullAddress().c_str(),
			this->customers[customerIndex].getPhone(), this->customers[customerIndex].getEmail().c_str(),
			this->customers[customerIndex].getAccountNum(),
			membershipAccountNum.c_str(),
			membershipExpDate.c_str());
	}
}

void GuestManager::updateGuestInfo(int customerId, std::string name, std::string address, std::string city, std::string state, int zip, int age, uint32_t phone, std::string email)
{
	printf("Updating Guest Information for account number: %d..\n", customerId);

	int index = 0;
	bool updated = false;

	for (int i = 0; i < this->customers.size(); i++)
	{
		if (this->customers[i].getAccountNum() == customerId)
		{
			index = i;
			updated = true;
			this->customers[i].setName(name);
			this->customers[i].setAddress(Address(address, city, state, zip));
			this->customers[i].setAge(age);
			this->customers[i].setPhone(phone);
			this->customers[i].setEmail(email);
		}
		break;
	}

	if (updated)
	{
		printf("The customer with account number %d was updated in the system with the following information:\n"
			"Name: %s\n"
			"Age: %d\n"
			"Address: %s\n"
			"Phone: %u\n"
			"Email: %s\n",
			this->customers[index].getAccountNum(),
			this->customers[index].getName().c_str(),
			this->customers[index].getAge(),
			this->customers[index].getAddress().GetFullAddress().c_str(),
			this->customers[index].getPhone(), this->customers[index].getEmail().c_str());
	}
}

void GuestManager::printMembershipCard(int customerId)
{
	for (int i = 0; i < this->memberships.size(); i++)
	{
		if (this->memberships[i].getCustomer().getAccountNum() == customerId)
		{
			printf("Printing Membership: %d  Info...\n", this->memberships[i].getAccountNum());
		}
	}
}

void GuestManager::CreateNewCustomer(std::string name, std::string address, std::string city, std::string state, int zip, int age, uint32_t phone, std::string email)
{
	int newId = customers.size() + 1;

	Customer newCustomer = Customer(name, age, Address(address, city, state, zip), phone, email, newId);

	addCustomer(newCustomer);

	for (Customer customer : customers)
	{
		if (customer.getAccountNum() == newId)
		{
			printf("The following customer was added to the system:\n"
					"Name: %s\n"
					"Age: %d\n"
					"Address: %s\n"
					"Phone: %u\n"
					"Email: %s\n"
					"Account number: %d\n", 
					customer.getName().c_str(), 
					customer.getAge(), 
					customer.getAddress().GetFullAddress().c_str(), 
					customer.getPhone(),customer.getEmail().c_str(), 
					customer.getAccountNum());
		}
	}
}

int GuestManager::FindCustomer(int customerId)
{
	int index = 0;
	bool found = false;

	for (int i = 0; i < this->customers.size(); i++)
	{
		if (this->customers[i].getAccountNum() == customerId)
		{
			index = i;
			found = true;
		}
		break;
	}

	if (found)
	{
		printf("Customer account %d has been found...\n", customerId);
		return index;
	}
	else
	{
		printf("Customer account %d was not found...\n", customerId);
		return -1;
	}
}

int GuestManager::findMembership(int customerId)
{
	int index = 0;
	bool found = false;

	for (int i = 0; i < this->memberships.size(); i++)
	{
		if (this->memberships[i].getCustomer().getAccountNum() == customerId)
		{
			printf("Membership %d found for customer account number %d!...\n", this->memberships[i].getAccountNum(), this->memberships[i].getCustomer().getAccountNum());
			found = true;
			index = i;
			return index;
		}
	}

	if (!found)
	{
		printf("Membership not found for customer with account number %d...\n", customerId);
		return -1;
	}
}
