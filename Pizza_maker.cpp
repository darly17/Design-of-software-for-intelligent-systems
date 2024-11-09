#include "Pizza_maker.h"




Pizza Pizza_maker::make_pizza(Pizza pizza) {
	cout << "here is your pizza " << pizza.getName() << "\n";
	return pizza;
}


Pizza_maker:: ~Pizza_maker() {}