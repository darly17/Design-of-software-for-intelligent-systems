#include"Calculation_system.h"
unsigned Calculation_system::calculate_NetSallary(Employee& employee, Calendar& calendar_,
	Gross_salary_base& salary_base, Employee_bonus_database& bonus_base, Insurance_coefficient_base& insurance_base,
	Sick_day_coefficient_base& sick_day_base,
	Social_security_tax_base& social_tax_base, Employee_tax_base& tax_base, Vacation_coefficient_base& vacation_base,string month) {
	
    string profession = employee.getProfession();
	double net_salary = 0;
	double gross_salary = salary_base.getGross_Salary(profession);

	net_salary+= (gross_salary / calendar_.getWorkingDays_in_current_month(month)) * employee.getWorking_days()
		- (gross_salary * insurance_base.getCoefficient(profession))
		+ (gross_salary *sick_day_base.getCoefficient(profession)) * employee.getSick_days()
		+ (gross_salary * vacation_base.getCoefficient(profession)) * employee.getVacation_days()- (gross_salary * tax_base.getTax(profession))
		- (gross_salary * social_tax_base.getTax(profession));
	if (employee.getBonus()) net_salary += bonus_base.getBonus(profession);
	return net_salary;
}