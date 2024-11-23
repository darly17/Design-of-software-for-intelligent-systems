

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include"Net_salary_base.h"
using namespace std;

unsigned Net_salary_base::find_profession_and_salary(string &prof) {
	if (net_salary_base.count(prof))
		return net_salary_base[prof];
	throw "This profession doesn`t exist in our list!";
}


unsigned Net_salary_base::getNet_Salary(string& _profession) {
	try {
		return find_profession_and_salary(_profession);
	}
	catch (const char* error_message)
	{
		cout << error_message << endl;
	}
}
void Net_salary_base::setNet_Salary(string& _profession, unsigned _gross_salary) {
	net_salary_base[_profession] = _gross_salary;
}
