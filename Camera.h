//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
class Camera
{
private:
	int id;
	bool IsActive;

public:
	Camera();
	int getId();
	void setId(int id);
	bool getIsActive();
	void setIsActive(bool active);
	void shutDown();
	void turnOn();
};

