#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>

#include"C:\Users\user\Desktop\3laba_ppois\Currency_translator.h"
#include"C:\Users\user\Desktop\3laba_ppois\Currency_translator.cpp"
using namespace std;

TEST(test_class_currency_translator, test_currency_translator) {

	Currency_translator translator("name");


	EXPECT_EQ(translator.getTranslatorName(), "name");
	EXPECT_EQ(translator.Conversion_belarusian_rubles_to_dollars(2000),620);
	EXPECT_EQ(translator.Conversion_belarusian_rubles_to_euro(2000), 580);
	EXPECT_EQ(translator.Conversion_belarusian_rubles_to_russian_rubles(2000), 58680);
	EXPECT_EQ(translator.Conversion_belarusian_rubles_to_yuan(2000),4400 );

	EXPECT_EQ(translator.Conversion_dollars_to_belarusian_rubles(2000), 6600);
	EXPECT_EQ(translator.Conversion_euro_to_belarusian_rubles(2000),7000);
	EXPECT_EQ(translator.Conversion_russian_rubles_to_belarusian_rubles(2000), 68);
	EXPECT_EQ(translator.Conversion_yuan_to_belarusian_rubles(2000), 900);



}