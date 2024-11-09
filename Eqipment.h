#pragma once
#include <iostream>
#include <vector>
#include <string>



using namespace std;

class Equipment
{
private:
	string name;
	double price_for_repair;
public:
	Equipment(string, double);
	string getName();
	double getRepairFees();
	bool working();
	~Equipment();

};
