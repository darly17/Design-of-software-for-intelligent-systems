
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

Employee_bonus_database Company::Get_bonus_base() { return bonus_base; }
Gross_salary_base Company::Get_gross_salary_base() { return gross_salary_base; }
Net_salary_base Company::Get_net_salary_base() { return net_salary_base; }
Employee_tax_base  Company::Get_tax_base() { return tax_base; }

void Company::Set_bonus_base(Employee_bonus_database& base) { bonus_base = base; }
void Company::Set_gross_salary_base(Gross_salary_base& base) { gross_salary_base = base; }
void Company::Set_net_salary_base(Net_salary_base& base) { net_salary_base = base; }
void Company::Set_tax_base(Employee_tax_base& base) { tax_base = base; }
