#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Pizza {
private:
	string name;
	double price;

public:
	Pizza(string, double);
	Pizza();
	string getName();
	double getPrice();
	~Pizza();
};
