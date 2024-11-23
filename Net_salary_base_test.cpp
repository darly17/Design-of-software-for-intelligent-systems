#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include"C:\Users\user\Desktop\3laba_ppois\Employee.h"
#include"C:\Users\user\Desktop\3laba_ppois\Net_salary_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Net_salary_base.cpp"
using namespace std;

TEST(test_class_Net_salary_base, test_Net_salary_base) {

	Net_salary_base base;
	Employee pprof("Sasha", 27, "proffessor");
	string prof = pprof.getProfession();
	base.setNet_Salary(prof, 600);

	EXPECT_EQ(base.getNet_Salary(prof), 600);
}