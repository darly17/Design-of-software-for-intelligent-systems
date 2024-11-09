#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "C:\Users\user\Desktop\1laba_ppois\Menu.h"
#include "C:\Users\user\Desktop\1laba_ppois\Beverage.h"
#include "C:\Users\user\Desktop\1laba_ppois\Pizza.h"





TEST(test_class_menu, test_menu) {
	Pizza margarita("margarita", 14.5);
	Beverage m("mirinda", 4.5);
	Menu menu;
	menu.addPizza(margarita);
	menu.addBeverage(m);

	string expectedOutput = "margarita 14.5\n";
	testing::internal::CaptureStdout();
	menu.getPizzalist();
	string output = testing::internal::GetCapturedStdout();

	string expectedOutput3 = "mirinda 4.5\n";
	testing::internal::CaptureStdout();
	menu.getPizzalist();
	string output1 = testing::internal::GetCapturedStdout();
}