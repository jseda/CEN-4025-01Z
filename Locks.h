//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
class Locks
{
private:
	int id;
	bool IsLocked;

public:
	Locks();
	int getId();
	void setId(int id);
	bool getIsLocked();
	void setIsLocked(bool locked);
	void lock();
	void unlock();
};

