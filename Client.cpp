#include "Client.h"
#include "Pizzeria_database.h"



double Client:: makeOrder(Pizza& pizza, Beverage& drink) {
	double bill;
	bill = pizza.getPrice() + drink.getPrice();
	Order order(pizza, drink, bill);
	return order.getPizza().getPrice();
}


double  Client::setWaiterrating(Waiter& waiter, double& _rating) {
	waiter.setRating(_rating);
	return _rating;
}
void Client::seeMenu(Menu menu) {
	menu.getPizzalist();
	menu.getBevaragelist();
}
Client:: ~Client() {}