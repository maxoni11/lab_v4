#pragma once
#include <iostream>
#include <string>
#include "/root/pr/profLab7/include/Service.h"
#include "/root/pr/profLab7/include/WeatherService.h"
using namespace std;

class XmlService:public Service
{
public:
	virtual WeatherService getWeather(std::string s) override;
	virtual ~XmlService() {};
};
