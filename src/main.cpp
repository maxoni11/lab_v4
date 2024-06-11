#include <iostream>
#include <vector>
#include "/root/pr/profLab7/include/JsonServie.h"
#include "/root/pr/profLab7/include/Service.h"
#include "/root/pr/profLab7/include/WeatherService.h"
#include "/root/pr/profLab7/lib/json.hpp"
using namespace std;

int main(){
    JsonService js;
    Weather w = js.getWeather("/root/pr/profLab7/src/weather.json");
    XmlService xs;
    Weather w = xs.getWeather("/root/pr/profLab7/src/weather.xml");
}
