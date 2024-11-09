#include "Ingredient_supplier.h"
Ingredient_supplier::Ingredient_supplier(string _name, double _rating) {
	name = _name;
	rating = _rating;
}
double Ingredient_supplier::getRating() {
	return rating;
}
string Ingredient_supplier::getName() {
	return name;

}
Ingredient_supplier::~Ingredient_supplier() {}