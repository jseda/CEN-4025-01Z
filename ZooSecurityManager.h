//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
#include <vector>
#include <string>
#include "Enclosure.h"
#include "Camera.h"
#include "Locks.h"

class ZooSecurityManager
{
private:
	std::vector<Camera> cameras;
	std::vector<Locks> doorLocks;
	std::vector<Enclosure> enclosureLocks;
	std::string username;
	std::string password;

public:
	ZooSecurityManager();
	void turnCameraOn(int id, Camera camera, std::string username, std::string password);
	void unlockEnclosure(int id, Enclosure enclosure, std::string username, std::string password);
	void unlockDoor(int id, Locks door, std::string username, std::string password);
	void turnCameraOff(int id, Camera camera, std::string username, std::string password);
	void lockEnclosure(int id, Enclosure enclosure, std::string username, std::string password);
	void lockDoor(int id, Locks door, std::string username, std::string password);
	void activateAllCameras();
	void lockAllEnclosures();
	void lockAllDoors();
	void Authenticate(std::string username, std::string password);
};

