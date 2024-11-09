#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "C:\Users\user\Desktop\1laba_ppois\Human.h"
#include "C:\Users\user\Desktop\1laba_ppois\Employee.h"
#include "C:\Users\user\Desktop\1laba_ppois\Manager.h"
#include "C:\Users\user\Desktop\1laba_ppois\Eqipment.h"
#include "C:\Users\user\Desktop\1laba_ppois\Ingredient_supplier.h"




TEST(test_class_manager, test_manager) {
	Manager manager("ann", 24, 2000, 1.2, 0);
	manager.setAge(24);
	manager.setSalary(2800);
	Ingredient_supplier someone("ff", 9);
	Equipment e("name", 1200);
	
	EXPECT_EQ(manager.getAge(), 24);
	EXPECT_EQ(manager.getName(), "ann");
	EXPECT_EQ(manager.getRating(), 0);
	EXPECT_EQ(manager.getWork_experience(), 1.2);
	EXPECT_EQ(manager.is_supplier_good(someone), true);
	EXPECT_EQ(manager.equipment_repair(e),true);
	string expectedOutput = "Meneger dosn`t need rating, he`s absolutely perfekt :)\n";
	testing::internal::CaptureStdout();
	manager.setRating(10);
	string output = testing::internal::GetCapturedStdout();
}