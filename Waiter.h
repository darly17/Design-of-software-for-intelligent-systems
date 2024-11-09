#pragma once
#include "Human.h"
#include "Employee.h"

using namespace std;


class Waiter :public Human, public Employee {

public:
	Waiter(string _name, int _age, double _salary, double _experience, double _rating) : Human(_name, _age), Employee(_salary, _experience, _rating) {
	}
	~Waiter(){}

};
