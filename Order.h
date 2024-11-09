#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Beverage.h"
#include "Pizza.h"


using namespace std;

class Order {
private:
	double bill;
	Pizza pizza;
	Beverage beverage;
public:
	Order(Pizza _pizza, Beverage _drink, double _bill) {
		pizza = _pizza;
		beverage = _drink;
		bill = _bill;
	}
	Order() {};
	double getBill();
	Pizza getPizza();
	Beverage getBeverage();
	~Order() {};
};