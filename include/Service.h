#pragma once
#include <iostream>
#include <string>
using namespace std;

class Service{
    virtual Service getWeather(std::string s) = 0;
    virtual ~Service();
};