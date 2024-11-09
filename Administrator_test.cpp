#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>

#include "C:\Users\user\Desktop\1laba_ppois\Human.h"
#include "C:\Users\user\Desktop\1laba_ppois\Human.cpp"
#include "C:\Users\user\Desktop\1laba_ppois\Employee.h"
#include "C:\Users\user\Desktop\1laba_ppois\Employee.cpp"
#include "C:\Users\user\Desktop\1laba_ppois\Waiter.h"
#include "C:\Users\user\Desktop\1laba_ppois\Administrator.h"
#include "C:\Users\user\Desktop\1laba_ppois\Administrator.cpp"




TEST(test_class_administrator, test_constructor) {
	Administrator admin("katya", 25, 1500, 1.5, 0);
	admin.setAge(26);
	admin.setSalary(1550);

	Waiter waiter("sasha", 20, 1000, 1, 8.6);
	EXPECT_EQ(admin.getName(),"katya");
	EXPECT_EQ(admin.getAge(), 26);
	EXPECT_EQ(admin.getSalary(), 1550);
	EXPECT_EQ(admin.getWork_experience(), 1.5);
	EXPECT_EQ(admin.check_waiter(waiter), "Well done!");
	EXPECT_EQ(admin.getRating(), 0);

	string expectedOutput = "Administrator dosn`t need rating, he`s absolutely perfekt :)\n";
	 testing::internal::CaptureStdout();
	 admin.setRating(10);
	string output = testing::internal::GetCapturedStdout();

}