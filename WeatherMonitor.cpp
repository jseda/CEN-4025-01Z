//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#include "WeatherMonitor.h"
#include <stdio.h>

WeatherMonitor::WeatherMonitor()
{
	printf("Setting up Weather Monitor..\n");
	this->humidity = 40;
	this->precipitation = 0;
	this->pressure = 0;
	this->sunrise = Date();
	this->sunset = Date();
	this->temperature = 75;
	this->uvIndex = 0;
	this->wind = 0;
	this->windGust = 0;
}

int WeatherMonitor::getTemperature()
{
	return this->temperature;
}

void WeatherMonitor::setTemperature(int temp)
{
	this->temperature = temp;
}

int WeatherMonitor::getHumidity()
{
	return this->humidity;
}

void WeatherMonitor::setHumidity(int hum)
{
	this->humidity = hum;
}

double WeatherMonitor::getPressure()
{
	return this->pressure;
}

void WeatherMonitor::setPressure(double pressure)
{
	this->pressure = pressure;
}

double WeatherMonitor::getPrecipitation()
{
	return this->precipitation;
}

void WeatherMonitor::setPrecipitation(double precipitation)
{
	this->precipitation = precipitation;
}

int WeatherMonitor::getWind()
{
	return this->wind;
}

void WeatherMonitor::setWind(int wind)
{
	this->wind = wind;
}

int WeatherMonitor::getWindGust()
{
	return this->windGust;
}

void WeatherMonitor::setWindGust(int gust)
{
	this->windGust = gust;
}

int WeatherMonitor::getUvIndex()
{
	return this->uvIndex;
}

void WeatherMonitor::setUvIndex(int uvIndex)
{
	this->uvIndex = uvIndex;
}

Date WeatherMonitor::getSunrise()
{
	return this->sunrise;
}

void WeatherMonitor::setSunrise(Date sunrise)
{
	this->sunrise = sunrise;
}

Date WeatherMonitor::getSunset()
{
	return this->sunset;
}

void WeatherMonitor::setSunset(Date sunset)
{
	this->sunset = sunset;
}

void WeatherMonitor::monitorWeather()
{
	printf("Monitoring weather...\n");
}

void WeatherMonitor::activateTornadoAlert()
{
	printf("Activating Tornado Alert!...\n");
}

void WeatherMonitor::logWeatherData()
{
	printf("Logging weather data...\n");
}

void WeatherMonitor::printWeatherInfo()
{
	printf("Printing Weather Info...\n");
}

void WeatherMonitor::activateWeatherAdvisoryAlert()
{
	printf("Activating Weather Advisory Alert!...\n");
}
