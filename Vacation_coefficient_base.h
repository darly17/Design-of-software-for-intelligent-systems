#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Employee.h"
using namespace std;

class Vacation_coefficient_base {
protected:
	map < string, unsigned> vacation_coefficient_base;
	

public:
	Vacation_coefficient_base() {}
	unsigned find_profession_and_coefficient(string& prof);
	unsigned getCoefficient(string&);
	void setCoefficient(string&, unsigned);
	

	~Vacation_coefficient_base() {}

};