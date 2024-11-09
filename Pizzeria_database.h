#pragma once
#include <iostream>
#include <vector>
#include <string>



using namespace std;

//Database

class Pizzeria
{
private:
	string pizzeria_name;

	double repair_expenses;
	double overal_salary;
	double profit;

public:
	Pizzeria(string);
	Pizzeria(){};
	string getName();
	double getOveralSalary();
	void changeOveralSalary(double);
	double getRepairExpenses();
	void changeRepairExpenses(double);
	double getProfit();
	void setProfit(double);
	
	~Pizzeria();
};
