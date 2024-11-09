
#include "Menu.h"




void  Menu::getPizzalist() {
	for (int i = 0; i < Pizzas.size(); i++) {
		cout << Pizzas[i].getName() << " " << Pizzas[i].getPrice() << "\n";
	}
}
void  Menu::getBevaragelist() {
	for (int i = 0; i < Beverages.size(); i++) {
		cout << Beverages[i].getName() << " " << Beverages[i].getPrice() << "\n";
	}
}
void  Menu::addPizza(Pizza new_pizza) {
	Pizzas.push_back(new_pizza);

}
void  Menu::addBeverage(Beverage new_drink) {
	Beverages.push_back(new_drink);
}
Menu:: ~Menu() {}


