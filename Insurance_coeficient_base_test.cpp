#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include"C:\Users\user\Desktop\3laba_ppois\Employee.h"
#include"C:\Users\user\Desktop\3laba_ppois\Insurance_coefficient_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Insurance_coefficient_base.cpp"
using namespace std;

TEST(test_class_Insurance_coefficient_base, test_Insurance_coefficient_base) {

	Insurance_coefficient_base base;
	Employee pprof("Sasha", 27, "proffessor");
	string prof = pprof.getProfession();
	base.setCoefficient(prof, 600);

	EXPECT_EQ(base.getCoefficient(prof), 600);
}