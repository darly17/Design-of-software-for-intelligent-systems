#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>

#include "C:\Users\user\Desktop\1laba_ppois\Human.h"
#include "C:\Users\user\Desktop\1laba_ppois\Employee.h"
#include "C:\Users\user\Desktop\1laba_ppois\Pizza.h"
#include "C:\Users\user\Desktop\1laba_ppois\Pizza_maker.h"
#include "C:\Users\user\Desktop\1laba_ppois\Pizza_maker.cpp"




TEST(test_class_pizza_maker, test_pizza_maker) {
	Pizza_maker pizzer("katya", 25, 1500, 1.5, 10);
	pizzer.setAge(26);
	pizzer.setSalary(1550);
	pizzer.setRating(10);
	Pizza margarita("margarita", 14.5);
	EXPECT_EQ(pizzer.getName(), "katya");
	EXPECT_EQ(pizzer.getAge(), 26);
	EXPECT_EQ(pizzer.getSalary(), 1550);
	EXPECT_EQ(pizzer.getWork_experience(), 1.5);
	EXPECT_EQ(pizzer.make_pizza(margarita).getName(),"margarita");
	EXPECT_EQ(pizzer.getRating(), 10);

	

}