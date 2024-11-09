#include "Administrator.h"


double Administrator::getRating() {
	cout << "Administrator dosn`t need rating, he`s absolutely perfekt :)\n";
	return rating;
}
void Administrator::setRating(double mark) {
	cout << "Administrator dosn`t need rating, he`s absolutely perfekt :)\n";
}

string Administrator::check_waiter(Waiter waiter) {
	if (waiter.getRating() >= 7)
		return "Well done!";
	else
		return "Try harder!";
}


