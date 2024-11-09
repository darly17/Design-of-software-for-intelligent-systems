#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>




#include "C:\Users\user\Desktop\1laba_ppois\Employee.h"




TEST(test_class_employee, test_employee) {
	Employee employee(1000,2,10);
	employee.setRating(10);
	employee.setSalary(1100);
	EXPECT_EQ(employee.getSalary(), 1100);
	EXPECT_EQ(employee.getWork_experience(), 2);
	EXPECT_EQ(employee.getRating(), 10);
}