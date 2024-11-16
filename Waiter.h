#pragma once
#include "Human.h"
#include "Employee.h"
#include "Order.h"
#include "Pizza.h"
#include "Beverage.h"

using namespace std;


class Waiter :public Human, public Employee {

public:
	Waiter(string _name, int _age, double _salary, double _experience, double _rating) : Human(_name, _age), Employee(_salary, _experience, _rating) {
	}
	Order take_order(Pizza& _pizza, Beverage& _beverage) {
		Order order(_pizza, _beverage, _pizza.getPrice() + _beverage.getPrice());
		return order;
	}
	~Waiter(){}

};
