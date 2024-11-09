#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>

#include "C:\Users\user\Desktop\1laba_ppois\Beverage.h"
#include "C:\Users\user\Desktop\1laba_ppois\Beverage.cpp"




TEST(test_class_beverage, test_beverage) {
	Beverage b("cola", 3.35);
	EXPECT_EQ(b.getName(), "cola");
	EXPECT_EQ(b.getPrice(), 3.35);
	
}