#include <iostream>
#include <vector>
#include <string>
#include <map>
#include"Sick_day_coefficient_base.h"
using namespace std;

unsigned Sick_day_coefficient_base::find_profession_and_coefficient(string& prof) {
	if (sick_day_coefficient_base.count(prof))
		return sick_day_coefficient_base[prof];
	throw "This profession doesn`t exist in our list!";
}


unsigned Sick_day_coefficient_base::getCoefficient(string& _profession) {
	try {
		return find_profession_and_coefficient(_profession);
	}
	catch (const char* error_message)
	{
		cout << error_message << endl;
	}
}
void Sick_day_coefficient_base::setCoefficient(string& _profession, unsigned _coefficient) {
	sick_day_coefficient_base[_profession] = _coefficient;
}

