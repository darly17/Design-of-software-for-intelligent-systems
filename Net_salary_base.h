#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Employee.h"
using namespace std;

class Net_salary_base {
protected:
	map <string, unsigned> net_salary_base;
	

public:
	Net_salary_base() {}
	unsigned find_profession_and_salary(string& );
	unsigned getNet_Salary(string&);
	void setNet_Salary(string&, unsigned);
	
	~Net_salary_base() {}

};