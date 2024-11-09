#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "C:\Users\user\Desktop\1laba_ppois\Order.h"
#include "C:\Users\user\Desktop\1laba_ppois\Beverage.h"
#include "C:\Users\user\Desktop\1laba_ppois\Pizza.h"





TEST(test_class_order, test_order) {
	Pizza margarita("margarita", 14.5);
	Beverage m("mirinda", 4.5);
	Order order(margarita, m, 19);
	EXPECT_EQ(order.getPizza().getName(), "margarita");
	EXPECT_EQ(order.getBeverage().getName(), "mirinda");
	EXPECT_EQ(order.getBill(), 19);

}