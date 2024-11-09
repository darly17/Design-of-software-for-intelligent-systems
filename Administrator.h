#pragma once



#include <iostream>
#include <vector>
#include <string>
#include "Human.h"

#include "Employee.h"
#include "Waiter.h"




using namespace std;
class Administrator :public Human, public Employee {

public:
	Administrator(string _name, int _age, double _salary, double _experience, double _rating) : Human(_name, _age), Employee(_salary, _experience, _rating) {
		rating = 0;
	}
	virtual double getRating() override;
	virtual void setRating(double mark) override;
	
	string check_waiter(Waiter waiter);
	~Administrator(){}

};