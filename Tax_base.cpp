#include <iostream>
#include <vector>
#include <string>
#include <map>
#include"Tax_base.h"
using namespace std;

unsigned Employee_tax_base::find_profession_and_tax(string& prof) {
	if (tax_base.count(prof))
		return tax_base[prof];
	throw "This profession doesn`t exist in our list!";
}


unsigned Employee_tax_base::getTax(string& _profession) {
	try {
		return find_profession_and_tax(_profession);
	}
	catch (const char* error_message)
	{
		cout << error_message << endl;
	}
}
void Employee_tax_base::setTax(string& _profession, unsigned _tax) {
	tax_base[_profession] = _tax;
}
