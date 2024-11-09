#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>

#include "C:\Users\user\Desktop\1laba_ppois\Human.h"
#include "C:\Users\user\Desktop\1laba_ppois\Employee.h"
#include "C:\Users\user\Desktop\1laba_ppois\Pizzeria_database.h"
#include "C:\Users\user\Desktop\1laba_ppois\Director.h"
#include "C:\Users\user\Desktop\1laba_ppois\Director.cpp"


TEST(test_class_director, test_director) {
	Director director("sasha", 37, 3000, 5, 10);
	Pizzeria pizzeria("Vkysno");
	pizzeria.setProfit(150);
	
	EXPECT_EQ(director.getName(), "sasha");
	EXPECT_EQ(director.getAge(), 37);
	EXPECT_EQ(director.getRating(), 10);
	EXPECT_EQ(director.getSalary(), 3000);
	EXPECT_EQ(director.getWork_experience(), 5);
	EXPECT_EQ(director.isProfitGood(pizzeria), true);
	


}