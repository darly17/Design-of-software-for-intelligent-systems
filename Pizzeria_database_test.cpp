#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "C:\Users\user\Desktop\1laba_ppois\Pizzeria_database.h"




TEST(test_class_pizzeria, test_pizzeria_database) {
	Pizzeria pizzeria("Alesya5");
	pizzeria.changeOveralSalary(20000);
	pizzeria.changeRepairExpenses(1000);
	pizzeria.setProfit(90000);
	EXPECT_EQ(pizzeria.getName(), "Alesya5");
	EXPECT_EQ(pizzeria.getOveralSalary(), 20000);
	EXPECT_EQ(pizzeria.getProfit(), 90000);
	EXPECT_EQ(pizzeria.getRepairExpenses(), 1000);
	

}