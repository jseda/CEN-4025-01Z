//Author: Joel Seda
//CEN-4025-01Z
//Homework 3 and 4
//04-18-2021

#include "Camera.h"
#include <stdio.h>

Camera::Camera()
{
	this->id = 0;
	this->IsActive = false;
}

int Camera::getId()
{
	return this->id;
}

void Camera::setId(int id)
{
	this->id = id;
}

bool Camera::getIsActive()
{
	return this->IsActive;
}

void Camera::setIsActive(bool active)
{
	this->IsActive = active;
}

void Camera::shutDown()
{
	printf("Shutting down Camera: %d...\n" , this->id);
}

void Camera::turnOn()
{
	printf("Turning on Camera: %d...\n", this->id);
}
