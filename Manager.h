#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "Human.h"

#include "Ingredient_supplier.h"
#include "Employee.h"
#include "Eqipment.h"
#include "Pizzeria_database.h"


class Manager :public Human, public Employee {

public:
	Manager(string _name, int _age, double _salary, double _experience, double _rating) : Human(_name, _age), Employee(_salary, _experience, _rating) {
		rating = 0;
	}
	virtual  double getRating() override;
	virtual void setRating(double mark) override;
	bool is_supplier_good(Ingredient_supplier someone);
    bool equipment_repair(Equipment equipment);

	~Manager();

};