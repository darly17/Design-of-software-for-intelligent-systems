#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "C:\Users\user\Desktop\1laba_ppois\Pizza.h"





TEST(test_class_pizza, test_pizza) {
	Pizza margarita("margarita", 14.5);
	
	EXPECT_EQ(margarita.getName(), "margarita");
	EXPECT_EQ(margarita.getPrice(), 14.5);

}