
#include <iostream>
#include <vector>
#include <string>
#include "Company.h"
using namespace std;

string Company::getCompanyName() {
	return company_name;
	}
void  Company::setCompanyName(string _new_name) {
	company_name = _new_name;
	}

int Company::getAmount_of_Employee() {
	return amount_of_employee;

	}
void Company::changeAmount_of_Employee(int new_employee) {
	amount_of_employee += new_employee;
	}
