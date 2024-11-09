#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Human.h"
#include "Employee.h"






using namespace std;
class Accountant : public Human, Employee {
protected:
	double gross_profit = 0;
public:
	Accountant(string _name, int _age, double _salary, double _experience, double _rating) : Human(_name, _age), Employee(_salary, _experience, _rating) {
		rating = 0;
	}
	virtual double getRating() override;
	virtual void setRating(double mark) override;
	void countGrossProfit(double);
	double getGross_profit();
	double countExpenses(double,double);
	double countNetProfit(double,double);
	~Accountant(){}

};