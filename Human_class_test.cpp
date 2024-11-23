#include <gtest/gtest.h>
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "C:\Users\user\Desktop\3laba_ppois\Human.h"
#include "C:\Users\user\Desktop\3laba_ppois\Human.cpp"




TEST(test_class_human, test_human) {
	Human human("Alesya", 29);

	EXPECT_EQ(human.getName(), "Alesya");
	EXPECT_EQ(human.getAge(), 29);
	human.setAge(30);
	EXPECT_EQ(human.getAge(), 30);
}