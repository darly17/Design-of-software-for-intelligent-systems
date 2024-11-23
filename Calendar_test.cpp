#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>

#include"C:\Users\user\Desktop\3laba_ppois\Calendar.h"
#include"C:\Users\user\Desktop\3laba_ppois\Calendar.cpp"
using namespace std;

TEST(test_class_calendar, test_calendar) {
	
	Calendar calendar;
	string month1 = "may", month2 = "august";

	EXPECT_EQ(calendar.getDays_in_current_month(month1), 31);
	EXPECT_EQ(calendar.getWorkingDays_in_current_month(month2), 22);
	

}