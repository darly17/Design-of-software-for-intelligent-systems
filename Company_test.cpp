#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>

#include"C:\Users\user\Desktop\3laba_ppois\Company.h"
#include"C:\Users\user\Desktop\3laba_ppois\Company.cpp"
using namespace std;

TEST(test_class_company, test_company) {
	string prof="professor";
	Company company("ddd",80);
	company.setCompanyName("abcd");
	company.changeAmount_of_Employee(2);
	company.bonus_base.setBonus(prof, 300);

	EXPECT_EQ(company.getAmount_of_Employee(), 82);
	EXPECT_EQ(company.getCompanyName(), "abcd");


}