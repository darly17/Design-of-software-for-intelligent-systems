#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "C:\Users\user\Desktop\1laba_ppois\Eqipment.h"
#include "C:\Users\user\Desktop\1laba_ppois\Eqipment.cpp"



TEST(test_class_equipment, test_equipment) {
	Equipment equipment("equipment", 1200);

	EXPECT_EQ(equipment.getName(), "equipment");
	EXPECT_EQ(equipment.getRepairFees(), 1200);
	EXPECT_EQ(equipment.working(), true);
	



}