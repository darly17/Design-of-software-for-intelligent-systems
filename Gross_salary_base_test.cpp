#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include"C:\Users\user\Desktop\3laba_ppois\Employee.h"
#include"C:\Users\user\Desktop\3laba_ppois\Gross_salary_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Gross_salary_base.cpp"
using namespace std;

TEST(test_class_Gross_salary_base, test_Gross_salary_base) {

	Gross_salary_base base;
	
	Employee pprof("Sasha", 27, "proffessor");
	string prof = pprof.getProfession();
	base.setGross_Salary(prof, 600);

	EXPECT_EQ(base.getGross_Salary(prof), 600);
}