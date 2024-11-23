#include <iostream>
#include <vector>
#include <string>
#include <map>
#include"Employee_bonus_database.h"
using namespace std;

unsigned Employee_bonus_database:: find_profession_and_bonus(string& prof) {
	if (bonus_base.count(prof))
		return bonus_base[prof];
	throw "This profession doesn`t exist in our list!";
}


unsigned Employee_bonus_database::getBonus(string& _profession) {
	try {
		return find_profession_and_bonus(_profession);
	}
	catch (const char* error_message)
	{
		cout << error_message << endl;
	}
}
void Employee_bonus_database::setBonus(string& _profession, unsigned _bonus) {
	bonus_base[_profession] = _bonus;
}
