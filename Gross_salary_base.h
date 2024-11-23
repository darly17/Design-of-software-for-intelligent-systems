#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Employee.h"
using namespace std;

class Gross_salary_base {
protected:
	map <string, unsigned> gross_salary_base;
public:
	Gross_salary_base(){}
	unsigned find_profession_and_salary(string& prof);
	unsigned getGross_Salary(string&);
	void setGross_Salary(string&,unsigned);

	~Gross_salary_base(){}

};