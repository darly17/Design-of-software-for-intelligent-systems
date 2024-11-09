#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "Human.h"

#include "Employee.h"

#include "Pizza.h"

using namespace std;


class Pizza_maker :public Human, public Employee {

public:
	Pizza_maker(string _name, int _age, double _salary, double _experience, double _rating) : Human(_name, _age), Employee(_salary, _experience, _rating) {

	}
	Pizza make_pizza(Pizza pizza);
	~Pizza_maker();

};