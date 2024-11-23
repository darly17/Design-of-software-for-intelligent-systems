#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>

#include <vector>
#include "C:\Users\user\Desktop\3laba_ppois\Employee.h"
#include"C:\Users\user\Desktop\3laba_ppois\Gross_salary_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Calendar.h"
#include"C:\Users\user\Desktop\3laba_ppois\Employee_bonus_database.h"
#include"C:\Users\user\Desktop\3laba_ppois\Insurance_coefficient_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Sick_day_coefficient_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Social_security_fund_tax_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Tax_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Vacation_coefficient_base.h"

#include"C:\Users\user\Desktop\3laba_ppois\Calculation_system.h"
#include"C:\Users\user\Desktop\3laba_ppois\Calculation_system.cpp"

using namespace std;



TEST (test_class_calculation_system, test_calculation_system) {
	Calculation_system cl;
	
	Employee employee("Alesya", 29, "accountant");
	string prof = employee.getProfession();
	employee.setBonus(true);
	employee.setSick_days(2);
	//employee.setVacation_days(3);
	employee.setWorking_days(17);

	

	Calendar calendar;

	Gross_salary_base salary_base;
	salary_base.setGross_Salary(prof, 3000);

	Employee_bonus_database bonus;
	bonus.setBonus(prof, 300);

	Insurance_coefficient_base insurance;
	insurance.setCoefficient(prof, 0.09);

	Sick_day_coefficient_base s_base;
	s_base.setCoefficient(prof, 0.04);

	Vacation_coefficient_base v_base;
	v_base.setCoefficient(prof, 0.045);

	Social_security_tax_base social_tax_base;
	social_tax_base.setTax(prof, 0.05);

	Employee_tax_base tax_base;
	tax_base.setTax(prof, 0.1);

	EXPECT_EQ(cl.calculate_NetSallary(employee, calendar, salary_base, bonus, insurance, s_base, social_tax_base, tax_base, v_base, "march"),2850 );


	
}