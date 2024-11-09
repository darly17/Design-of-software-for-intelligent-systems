
#include"Accountant.h"

double Accountant::getRating() {
	cout << "Accountant dosn`t need rating, he`s absolutely perfekt :)\n";
	return rating;
}
void Accountant::setRating(double mark) {
	cout << "Accountant dosn`t need rating, he`s absolutely perfekt :)\n";
}
void Accountant::countGrossProfit (double new_profit)
  {
		gross_profit += new_profit;
}
double Accountant::getGross_profit() {
	
	return gross_profit;
}
double Accountant::countExpenses(double overal_salary,double repair_expenses) {
	double expenses = 0;
	expenses += overal_salary + repair_expenses;
	return expenses;

}
double Accountant::countNetProfit (double overal_salary, double repair_expenses) {
	double net_profit = 0;
	net_profit = gross_profit-countExpenses(overal_salary,repair_expenses) ;
	return net_profit;

}


