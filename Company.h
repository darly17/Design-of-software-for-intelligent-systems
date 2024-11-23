#pragma once
#include <iostream>
#include <vector>
#include"Employee.h"
#include"Employee_bonus_database.h"
#include"Gross_salary_base.h"
#include"Net_salary_base.h"
#include"Tax_base.h"
#include <string>



using namespace std;

class Company  
{
protected:
	string company_name;
	int amount_of_employee;
	vector<Employee> employee_list;
	


	

public:
	
	Employee_bonus_database bonus_base;
	Gross_salary_base gross_salary_base;
	Net_salary_base net_salary_base;
	Employee_tax_base tax_base;

	Company(string _name, int _amount)
	{
		company_name = _name;
		amount_of_employee = _amount;
	}
	string getCompanyName();
	void setCompanyName(string);

	int  getAmount_of_Employee();
	void  changeAmount_of_Employee(int);


	~Company() {}

};
