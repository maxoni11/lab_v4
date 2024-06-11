#pragma once
#include <iostream>
#include <string>
using namespace std;

class WeatherService{
private:
    string city;
    double lon;
    double lat;
    double temperature;
    string weather; 
    double windSpeed; 
    int clouds; 
public:
    Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds);
    void printWeather();
};