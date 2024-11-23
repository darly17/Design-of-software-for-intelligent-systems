#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Employee.h"
using namespace std;

class Insurance_coefficient_base {
protected:
	map < string, unsigned> insurance_coefficient_base;
	
public:
	Insurance_coefficient_base() {}
	unsigned find_profession_and_coefficient(string& prof);
	unsigned getCoefficient(string&);
	void setCoefficient(string&, unsigned);
	

	~Insurance_coefficient_base() {}

};