#include <iostream>
#include <string>
#include "/root/pr/profLab7/include/WeatherService.h"
#include "/root/pr/profLab7/include/Service.h"
using namespace std;

WeatherService::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds){
    this->city = city;
    this->lon = lon;
    this->lat = lat;
    this->temperature = temperature;
    this->weather = weather;
    this->windSpeed = windSpeed;
    this->clouds = clouds;
}

void WeatherService::printWeather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds){
    cout << "City: " << city << endl;
    cout << "Longitude: " << lon << endl;
    cout << "Latitude: " << lat << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Weather: " << weather << endl;
    cout << "Wind Speed: " << windSpeed << endl;
    cout << "Clouds: " << clouds << endl;
    cout << endl;
}