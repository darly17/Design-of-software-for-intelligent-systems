#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Employee.h"
using namespace std;

class Sick_day_coefficient_base {
protected:
	map < string, unsigned> sick_day_coefficient_base;

public:
	Sick_day_coefficient_base() {}
	unsigned find_profession_and_coefficient(string& prof);
	unsigned getCoefficient(string&);
	void setCoefficient(string&, unsigned);



	~ Sick_day_coefficient_base() {}

};