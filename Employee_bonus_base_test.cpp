#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include"C:\Users\user\Desktop\3laba_ppois\Employee.h"
#include"C:\Users\user\Desktop\3laba_ppois\Employee_bonus_database.h"
#include"C:\Users\user\Desktop\3laba_ppois\Employee_bonus_database.cpp"
using namespace std;

TEST(test_class_Employee_bonus_database, test_Employee_bonus_database) {

	Employee_bonus_database base;
	Employee pprof("Sasha",27,"proffessor");
	string prof = pprof.getProfession();
	base.setBonus(prof, 600);

	EXPECT_EQ(base.getBonus(prof), 600);
	


}