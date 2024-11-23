#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>

#include"C:\Users\user\Desktop\3laba_ppois\Company.h"
#include"C:\Users\user\Desktop\3laba_ppois\Company.cpp"
#include"C:\Users\user\Desktop\3laba_ppois\Employee_bonus_database.h"
#include"C:\Users\user\Desktop\3laba_ppois\Net_salary_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Gross_salary_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Tax_base.h"
using namespace std;

TEST(test_class_company, test_company) {
	string prof="professor";
	Company company("ddd",80);
	company.setCompanyName("abcd");
	company.changeAmount_of_Employee(2);

	Employee_tax_base base1;
	base1.setTax(prof, 200);
	company.Set_tax_base(base1);
	EXPECT_EQ(company.Get_tax_base().getTax(prof), 200);

	Gross_salary_base base2;
	base2.setGross_Salary(prof, 200);
	company.Set_gross_salary_base(base2);
	EXPECT_EQ(company.Get_gross_salary_base().getGross_Salary(prof), 200);

	Net_salary_base base3;
	base3.setNet_Salary(prof, 200);
	company.Set_net_salary_base(base3);
	EXPECT_EQ(company.Get_net_salary_base().getNet_Salary(prof), 200);


	Employee_bonus_database base;
	base.setBonus(prof, 200);
	company.Set_bonus_base(base);
	EXPECT_EQ(company.Get_bonus_base().getBonus(prof), 200);



	EXPECT_EQ(company.getAmount_of_Employee(), 82);
	EXPECT_EQ(company.getCompanyName(), "abcd");


}