#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include"Calendar.h"
#include"Employee.h"
#include"Gross_salary_base.h"
#include"Employee_bonus_database.h"
#include"Insurance_coefficient_base.h"
#include"Sick_day_coefficient_base.h"
#include"Social_security_fund_tax_base.h"
#include"Tax_base.h"
#include"Vacation_coefficient_base.h"
using namespace std;

class Calculation_system {

public:
	Calculation_system() {}

	unsigned calculate_NetSallary(Employee&, Calendar&,
		Gross_salary_base&, Employee_bonus_database&, Insurance_coefficient_base&, 
		Sick_day_coefficient_base&,
		Social_security_tax_base&, Employee_tax_base&,Vacation_coefficient_base&, string);
	

	~Calculation_system() {}

};