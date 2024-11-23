
#pragma once
#include <iostream>
#include <vector>
#include <string>
#include"Human.h"



using namespace std;

class Employee : public Human {
protected:
	double gross_salary;
	double salary;
	string profession;
	bool bonus_traker;
	int working_days; 
	int sick_days;
	int vacation_days;

public:
	Employee(string _name,int _age,string _profession): Human(_name,_age)
	{
		profession = _profession;
		bonus_traker = false;
	
	}

	double getSalary();
	void setSalary(double);

	double getGross_Salary();
	void setGross_Salary(double);

	string getProfession();

	bool  getBonus();
	void  setBonus(bool);

	int  getWorking_days();
	void setWorking_days(int);

	int  getSick_days();
	void setSick_days(int);

	int  getVacation_days();
	void  setVacation_days(int);
	
	
	
	~Employee() {}

};