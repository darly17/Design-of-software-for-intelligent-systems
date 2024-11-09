#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "Human.h"
#include "Waiter.h"
#include "Menu.h"
#include "Beverage.h"
#include "Pizza.h"
#include "Order.h"
#include "Manager.h"
#include "Pizzeria_database.h"

using namespace std;


class Client :public Human {
public:
	Client(string _name, int _age) : Human(_name, _age) {

	}
	Client(){}
	double makeOrder(Pizza&, Beverage&);
	double setWaiterrating(Waiter&, double&);
	void seeMenu(Menu);
	~Client();
};