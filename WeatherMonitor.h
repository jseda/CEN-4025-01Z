//Author: Joel Seda
//CEN-4025-01Z
//Homework 3
//03-28-2021

#pragma once
#include "Date.h"

class WeatherMonitor
{

private:
	int temperature;
	int humidity;
	double pressure;
	double precipitation;
	int wind;
	int windGust;
	int uvIndex;
	Date sunrise;
	Date sunset;

public:
	WeatherMonitor();
	int getTemperature();
	void setTemperature(int temp);
	int getHumidity();
	void setHumidity(int hum);
	double getPressure();
	void setPressure(double pressure);
	double getPrecipitation();
	void setPrecipitation(double precipitation);
	int getWind();
	void setWind(int wind);
	int getWindGust();
	void setWindGust(int gust);
	int getUvIndex();
	void setUvIndex(int uvIndex);
	Date getSunrise();
	void setSunrise(Date sunrise);
	Date getSunset();
	void setSunset(Date sunset);
	void monitorWeather();
	void activateTornadoAlert();
	void logWeatherData();
	void printWeatherInfo();
	void activateWeatherAdvisoryAlert();
};

