//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "ZooSecurityManager.h"
#include <stdio.h>

ZooSecurityManager::ZooSecurityManager()
{
	printf("Setting up Zoo Security Manager..\n");
}

void ZooSecurityManager::turnCameraOn(int id, Camera camera, std::string username, std::string password)
{
	printf("Turning camera: %d on...\n", camera.getId());
}

void ZooSecurityManager::unlockEnclosure(int id, Enclosure enclosure, std::string username, std::string password)
{
	printf("Unlocking enclosure: %d on...\n", enclosure.getId());
}

void ZooSecurityManager::unlockDoor(int id, Locks door, std::string username, std::string password)
{
	printf("Unlocking door: %d on...\n", door.getId());
}

void ZooSecurityManager::turnCameraOff(int id, Camera camera, std::string username, std::string password)
{
	printf("Turning camera: %d off...\n", camera.getId());
}

void ZooSecurityManager::lockEnclosure(int id, Enclosure enclosure, std::string username, std::string password)
{
	printf("Locking enclosure: %d on...\n", enclosure.getId());
}

void ZooSecurityManager::lockDoor(int id, Locks door, std::string username, std::string password)
{
	printf("Locking door: %d on...\n", door.getId());
}

void ZooSecurityManager::activateAllCameras()
{
	printf("Activating all cameras...\n");
}

void ZooSecurityManager::lockAllEnclosures()
{
	printf("Locking all enclosures...\n");
}

void ZooSecurityManager::lockAllDoors()
{
	printf("Locking all doors...\n");
}

void ZooSecurityManager::Authenticate(std::string username, std::string password)
{
	printf("User: %s authenticated!...\n", username.c_str());
}
