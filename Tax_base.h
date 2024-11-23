#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Employee.h"
using namespace std;

class Employee_tax_base {
private:
	map < string, unsigned> tax_base;
	

public:
	Employee_tax_base() {}
	unsigned find_profession_and_tax(string& prof);
	unsigned getTax(string&);
	void setTax(string&, unsigned);
	
	~Employee_tax_base() {}

};