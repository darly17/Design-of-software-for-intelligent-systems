#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Calendar {
private:
	map < string, unsigned> calendar;
	map < string, unsigned> calendar_of_working_days;
public:
	Calendar() {
		calendar["january"] = 31;
		calendar["february"] = 28;
		calendar["march"] = 31;
		calendar["april"] = 30;
		calendar["may"] = 31;
		calendar["june"] = 30;
		calendar["july"] = 31;
		calendar["august"] = 31;
		calendar["september"] = 30;
		calendar["october"] = 31;
		calendar["november"] = 30;
		calendar["december"] = 31;


		calendar_of_working_days["january"] = 17;
		calendar_of_working_days["february"] = 20;
		calendar_of_working_days["march"] = 20;
		calendar_of_working_days["april"] = 21;
		calendar_of_working_days["may"] = 20;
		calendar_of_working_days["june"] = 19;
		calendar_of_working_days["july"] = 23;
		calendar_of_working_days["august"] = 22;
		calendar_of_working_days["september"] = 21;
		calendar_of_working_days["october"] = 23;
		calendar_of_working_days["november"] = 21;
		calendar_of_working_days["december"] = 21;

	}
	
	unsigned getDays_in_current_month(string&);
	unsigned getWorkingDays_in_current_month(string&);
	~Calendar() {}

};