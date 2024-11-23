#include "Employee.h"

double Employee::getSalary() {
	return salary;
}
void Employee:: setSalary(double _salary){
	salary = _salary;
}

double  Employee:: getGross_Salary(){
	return gross_salary;
}
void Employee:: setGross_Salary(double _grs_slry){
	gross_salary = _grs_slry;
}

string Employee::getProfession() {
	return profession;
}

bool Employee::getBonus() {
	return bonus_traker;
}
void Employee:: setBonus(bool value){
	bonus_traker = value;
}

int Employee::getWorking_days() {
	return working_days;
}
void Employee::setWorking_days(int workd) {
	working_days = workd;
}

int Employee::getSick_days() {
	return sick_days;
}
void Employee:: setSick_days(int _sick_days){
	sick_days = _sick_days;
}

int Employee::getVacation_days() { return vacation_days; }
void Employee::setVacation_days(int _vacation_days) { vacation_days = _vacation_days; }

