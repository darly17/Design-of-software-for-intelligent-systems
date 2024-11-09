#pragma once


#include <iostream>
#include <vector>
#include <string>

#include "Beverage.h"
#include "Pizza.h"


using namespace std;

class Menu {
private:
	vector<Pizza> Pizzas;
	vector<Beverage> Beverages;
public:
	Menu() {};
	void getPizzalist();
	void getBevaragelist();
	void addPizza(Pizza);
	void addBeverage(Beverage);
	~Menu();
};

