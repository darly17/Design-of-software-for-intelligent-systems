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
private:
	string company_name;
	int amount_of_employee;
	vector<Employee> employee_list;
	Employee_bonus_database bonus_base;
	Gross_salary_base gross_salary_base;
	Net_salary_base net_salary_base;
	Employee_tax_base tax_base;


	

public:
	
	

	Company(string _name, int _amount)
	{
		company_name = _name;
		amount_of_employee = _amount;
	}
	string getCompanyName();
	void setCompanyName(string);

	int  getAmount_of_Employee();
	void  changeAmount_of_Employee(int);
	Employee_bonus_database Get_bonus_base();
	Gross_salary_base Get_gross_salary_base();
	Net_salary_base Get_net_salary_base();
	Employee_tax_base Get_tax_base();

	void Set_bonus_base(Employee_bonus_database&);
	void Set_gross_salary_base(Gross_salary_base&);
	void Set_net_salary_base(Net_salary_base&);
	void Set_tax_base(Employee_tax_base&);



	~Company() {}

};
