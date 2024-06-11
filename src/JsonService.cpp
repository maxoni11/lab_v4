#include <iostream>
#include <string>
#include "/root/pr/profLab7/lib/json.hpp"
#include "/root/pr/profLab7/include/JsonServie.h"
#include "/root/pr/profLab7/include/WeatherService.h"
using namespace std;
using nlohmann::json;

JsonService::getWeather(string s){
    ifstream fin(s);
    if (!fin)
        throw exception("error");

    json j;
    j = json::parse(fin);
    string city = j["name"]; //  Киров
    double lon = j["coord"]["lon"]; // 49.6601
    double lat = j["coord"]["lat"]; // 58.5966  
    double temperature = j["temperature"]; // 5.69
    string weather = j["weather"]; // дождь
    double windSpeed = j["windSpeed"];  // 4.27
    int clouds = j["clouds"]["all"]; // 100
    return weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}