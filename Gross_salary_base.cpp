#include <iostream>
#include <vector>
#include <string>
#include <map>
#include"Gross_salary_base.h"
using namespace std;

unsigned Gross_salary_base::find_profession_and_salary(string& prof) {
	if (gross_salary_base.count(prof))
		return gross_salary_base[prof];
	throw "This profession doesn`t exist in our list!";
}


unsigned Gross_salary_base::getGross_Salary(string& _profession) {
	try {
		return find_profession_and_salary(_profession);
	}
	catch (const char* error_message)
	{
		cout << error_message << endl;
	}
}
void Gross_salary_base::setGross_Salary(string& _profession, unsigned _gross_salary) {
	gross_salary_base[_profession] = _gross_salary;
}

