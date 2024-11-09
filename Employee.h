#pragma once
#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Employee {
protected:
	double salary;
	double work_experience;
	double rating;
public:
	Employee(double _salary, double _experience, double _rating)
	{
		salary = _salary;
		work_experience = _experience;
		rating = _rating;

	}

	double getSalary();
	double getWork_experience();
	virtual double getRating();
	virtual void setRating(double);
	void setSalary(double);
	~Employee(){}

};
