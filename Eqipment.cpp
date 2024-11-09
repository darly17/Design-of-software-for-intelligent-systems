#include "Eqipment.h"




Equipment::Equipment(string _name, double _price) {
	name = _name;
	price_for_repair = _price;

}
string  Equipment::getName() {
	return name;
}
double Equipment::getRepairFees() {
	return price_for_repair;
}
bool  Equipment::working() {
	if (0==0) return true;
	else return false;
}
Equipment::~Equipment() {}
