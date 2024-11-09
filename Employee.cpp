
#include "Employee.h"

double Employee::getSalary() {
	return salary;
}
double Employee::getWork_experience() {
	return work_experience;
}
double Employee::getRating() {
	return rating;
}
void Employee::setRating(double mark) {
	rating = (rating + mark) / 2;
}
void Employee::setSalary(double new_salary) {
	salary = new_salary;
}
