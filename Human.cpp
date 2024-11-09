#include "Human.h"

string Human::getName() {
	return name;
}
int Human::getAge() {
	return age;
}
void Human::setAge(int new_age) {
	age = new_age;
}

Human::~Human() {}