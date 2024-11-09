#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>


#include "C:\Users\user\Desktop\1laba_ppois\Client.h"
#include "C:\Users\user\Desktop\1laba_ppois\Client.cpp"
#include "C:\Users\user\Desktop\1laba_ppois\Human.h"
#include "C:\Users\user\Desktop\1laba_ppois\Waiter.h"
#include "C:\Users\user\Desktop\1laba_ppois\Beverage.h"
#include"C:\Users\user\Desktop\1laba_ppois\Order.h"
#include"C:\Users\user\Desktop\1laba_ppois\Order.cpp"
#include "C:\Users\user\Desktop\1laba_ppois\Pizza.h"
#include "C:\Users\user\Desktop\1laba_ppois\Pizza.cpp"
#include "C:\Users\user\Desktop\1laba_ppois\Manager.h"
#include "C:\Users\user\Desktop\1laba_ppois\Manager.cpp"
#include "C:\Users\user\Desktop\1laba_ppois\Eqipment.h"
#include "C:\Users\user\Desktop\1laba_ppois\Ingredient_supplier.h"
#include "C:\Users\user\Desktop\1laba_ppois\Ingredient_supplier.cpp"
#include "C:\Users\user\Desktop\1laba_ppois\Pizzeria_database.h"
#include "C:\Users\user\Desktop\1laba_ppois\Pizzeria_database.cpp"
#include "C:\Users\user\Desktop\1laba_ppois\Menu.h"
#include "C:\Users\user\Desktop\1laba_ppois\Menu.cpp"



TEST(test_class_client, test_client) {
	Client cl("ann", 16);
	Pizza margarita("margarita", 14.5);
	Beverage m("mirinda", 4.5);
	Waiter w("katya", 25, 1500, 1.5, 0);
	Menu menu;
	menu.addPizza(margarita);
	menu.addBeverage(m);

	
	double rating = 8;
	EXPECT_EQ (cl.getName(), "ann");
	EXPECT_EQ (cl.getAge(), 16);
	EXPECT_EQ  (cl.makeOrder(margarita,m), 14.5);
	EXPECT_EQ (cl.setWaiterrating(w,rating), 8);
	string expectedOutput = "margarita  14.5\nmirinda  4.5\n";
	testing::internal::CaptureStdout();
	cl.seeMenu(menu);
	string output = testing::internal::GetCapturedStdout();



}