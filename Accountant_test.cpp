#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>

#include "C:\Users\user\Desktop\1laba_ppois\Human.h"
#include "C:\Users\user\Desktop\1laba_ppois\Employee.h"
#include "C:\Users\user\Desktop\1laba_ppois\Accountant.h"
#include "C:\Users\user\Desktop\1laba_ppois\Accountant.cpp"




TEST(test_class_accountant, test_accountant) {
	Accountant accountant ("katya", 25, 1500, 1.5, 0);
	accountant.setAge(26);
	EXPECT_EQ(accountant.getName(), "katya");
	EXPECT_EQ(accountant.getAge(), 26);
	EXPECT_EQ(accountant.getRating(), 0);
	EXPECT_EQ(accountant.countExpenses(234.4,4.6), 239);
	accountant.countGrossProfit(500);
	EXPECT_EQ(accountant.countNetProfit (234.4,4.6), 261);
	EXPECT_EQ(accountant.getGross_profit(), 500);




	string expectedOutput = "Accountant dosn`t need rating, he`s absolutely perfekt :)\n";
	testing::internal::CaptureStdout();
	accountant.setRating(10);
	string output = testing::internal::GetCapturedStdout();

}