#include "Pizza.h"


Pizza::Pizza(string _name, double _price) {
	name = _name;
	price = _price;

}
Pizza::Pizza() {};
string Pizza::getName() {
	return name;
}
double Pizza::getPrice() {
	return price;
}
Pizza::~Pizza() {}

