#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>

#include "C:\Users\user\Desktop\1laba_ppois\Human.h"
#include "C:\Users\user\Desktop\1laba_ppois\Employee.h"
#include "C:\Users\user\Desktop\1laba_ppois\Waiter.h"




TEST(test_class_waiter, test_waiter) {
	Waiter waiter("katya", 25, 1500, 1.5, 10);
	waiter.setAge(26);
	waiter.setSalary(1550);
	waiter.setRating(10);
	EXPECT_EQ(waiter.getName(), "katya");
	EXPECT_EQ(waiter.getAge(), 26);
	EXPECT_EQ(waiter.getSalary(), 1550);
	EXPECT_EQ(waiter.getWork_experience(), 1.5);
	EXPECT_EQ(waiter.getRating(), 10);



}