
#include "Pizzeria_database.h"

Pizzeria::Pizzeria(string _name) {
	pizzeria_name = _name;
	repair_expenses = 0;
	overal_salary = 0;
	profit = 0;

}

Pizzeria::~Pizzeria(){}
string Pizzeria::getName() {
	return pizzeria_name;
}


double Pizzeria::getOveralSalary() {
	return overal_salary;
}
void Pizzeria::changeOveralSalary(double new_salary) {
	overal_salary += new_salary;
}
double Pizzeria::getRepairExpenses() {
	return repair_expenses;
}
void  Pizzeria::changeRepairExpenses(double new_expenses) {
	repair_expenses += new_expenses;
}
double  Pizzeria::getProfit() {
	return profit;
}
void  Pizzeria::setProfit(double _profit) {
	profit += _profit;
}

