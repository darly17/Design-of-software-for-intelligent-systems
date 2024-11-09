#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "C:\Users\user\Desktop\1laba_ppois\Ingredient_supplier.h"




TEST(test_class_ingredient_supplier, test_ingredient_supplier) {
	Ingredient_supplier supplier ("Alesya5", 9);

	EXPECT_EQ(supplier.getName(), "Alesya5");
	EXPECT_EQ(supplier.getRating(), 9);
	
}