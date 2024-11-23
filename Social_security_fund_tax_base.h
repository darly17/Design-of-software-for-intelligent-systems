#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Employee.h"
using namespace std;

class Social_security_tax_base {
private:
	map < string, unsigned> tax_base;
	

public:
	Social_security_tax_base() {}
	unsigned find_profession_and_tax(string& prof);
	unsigned getTax(string&);
	void setTax(string&, unsigned);


	~Social_security_tax_base() {}

};