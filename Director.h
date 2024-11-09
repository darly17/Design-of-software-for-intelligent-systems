#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "Human.h"
#include "Pizzeria_database.h"
#include "Employee.h"



using namespace std;

class Director :public Human, public Employee {

public:
	Director(string _name, int _age, double _salary, double _experience, double _rating) : Human(_name, _age), Employee(_salary, _experience, _rating) {
		rating = 10;
	}
	bool isProfitGood(Pizzeria pizzeria);
	~Director(){}

};