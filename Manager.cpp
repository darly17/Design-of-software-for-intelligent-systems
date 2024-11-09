#include "Manager.h"
double Manager::getRating() {
	cout << "Meneger dosn`t need rating, he`s absolutely perfekt :)";
	return rating;
}
void Manager::setRating(double  mark) {
	cout << "Meneger dosn`t need rating, he`s absolutely perfekt :)";
}

bool Manager::is_supplier_good(Ingredient_supplier supplier) {
	if (supplier.getRating() >= 7.8)
		return true;
	else {
		
		return false;
	}
}
bool Manager::equipment_repair(Equipment equipment) {
	if (!equipment.working()) {
		return false;
	}
	else return true;
}

Manager:: ~Manager() {}