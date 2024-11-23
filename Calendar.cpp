#include <iostream>
#include <vector>
#include <string>
#include <map>
#include"Calendar.h"
using namespace std;


unsigned Calendar::getDays_in_current_month(string& _month) {
	return calendar[_month];
}
unsigned Calendar::getWorkingDays_in_current_month(string& _month) {
	return calendar_of_working_days[_month];
}