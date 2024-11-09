#pragma once

#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Ingredient_supplier {
protected:
	double rating;
	string name;
public:
	Ingredient_supplier(string, double);
	double getRating();
	string getName();
	~Ingredient_supplier();

};
