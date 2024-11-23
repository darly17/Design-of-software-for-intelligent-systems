#pragma once
#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Human {

private:
	int age;
	string name;

public:
	Human(string _name, int _age) {
		name = _name;
		age = _age;
	}
	Human() {}
	string getName();
	int getAge();
	void setAge(int new_age);
	~Human() {
		cout << "Object human was deleted";
	}

};
