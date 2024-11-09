#include "Beverage.h"


Beverage::Beverage(string _name, double _price) {
	name = _name;
	price = _price;

}

string Beverage::getName() {
	return name;
}
double Beverage::getPrice() {
	return price;
}
Beverage::~Beverage() {}

