#pragma once
#include <iostream>
#include <vector>
#include <string>




using namespace std;

class Beverage {
private:
	string name;
	double price;

public:
	Beverage(string, double);
	Beverage() {};
	string getName();
	double getPrice();
	~Beverage();
};