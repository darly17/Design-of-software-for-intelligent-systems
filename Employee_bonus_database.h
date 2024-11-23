#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Employee.h"
using namespace std;

class Employee_bonus_database {
protected:
	map < string, unsigned> bonus_base;
public:
	Employee_bonus_database() {}
	unsigned find_profession_and_bonus(string& prof);
	unsigned getBonus(string&);
	void setBonus(string&, unsigned);

	~Employee_bonus_database() {}

};