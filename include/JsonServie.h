#pragma once
#include <iostream>
#include <string>
#include "/root/pr/profLab7/include/Service.h"
#include "/root/pr/profLab7/include/WeatherService.h"
using namespace std;

class JsonService :public Service{
public:
	virtual WeatherService getWeather(string s) override;
	virtual ~JsonService() {};
};