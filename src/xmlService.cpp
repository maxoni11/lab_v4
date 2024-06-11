#include <iostream>
#include <string>
#include "/root/pr/profLab7/include/Service.h"
#include "/root/pr/profLab7/include/WeatherService.h"
#include "/root/pr/profLab7/lib/pugixml.hpp"
using namespace std;
using namespace pugi;

WeatherService XmlService::getWeather(string s){
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());
    if (!result)
        throw exception("error");
    xml_node node = doc.child("current");
    string city = node.child("city").attribute("name").as_string(); //  Киров
    double lon = node.child("city").child("coord").attribute("lon").as_int(); // 49.6601
    double lat = node.child("city").child("coord").attribute("lat").as_int(); // 58.5966
    double temperature = node.child("temperature").attribute("temperature").as_double(); // 5.69
    string weather = node.child("weather").attribute("weather").as_string(); // дождь
    double windSpeed = node.child("temperature").attribute("temperature").as_double(); // 4.27
    int clouds = node.child("clouds").attribute("clouds").as_int(); // 90
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}
