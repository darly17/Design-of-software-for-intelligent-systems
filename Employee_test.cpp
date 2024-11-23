#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
using namespace std;
#include <vector>
#include "C:\Users\user\Desktop\3laba_ppois\Human.h"
#include "C:\Users\user\Desktop\3laba_ppois\Employee.h"
#include "C:\Users\user\Desktop\3laba_ppois\Employee.cpp"




TEST(test_class_employee, test_employee) {
	Employee employee("Alesya", 29,"accountant");
	employee.setAge(30);
	employee.setBonus(true);
	employee.setGross_Salary(3000);
	employee.setSalary(2700);
	employee.setSick_days(2);
	employee.setVacation_days(3);
	employee.setWorking_days(17);
	
	EXPECT_EQ(employee.getName(), "Alesya");
	EXPECT_EQ(employee.getAge(), 30);
	EXPECT_EQ(employee.getProfession(), "accountant");
	EXPECT_EQ(employee.getGross_Salary(), 3000);
	EXPECT_EQ(employee.getSalary(), 2700);
	EXPECT_EQ(employee.getBonus(), true);
	EXPECT_EQ(employee.getSick_days(), 2);
	EXPECT_EQ(employee.getVacation_days(), 3);
	EXPECT_EQ(employee.getWorking_days(), 17);
	
}