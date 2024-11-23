#include <iostream>
#include <vector>
#include <string>
#include"Currency_translator.h"

using namespace std;




string Currency_translator::getTranslatorName() {
	return translator_name;
	}

double Currency_translator::Conversion_euro_to_belarusian_rubles(double euro) {
	return euro * 3.5;
	}
double Currency_translator::Conversion_dollars_to_belarusian_rubles(double dollars) {
	return dollars * 3.3;
	}
double Currency_translator::Conversion_yuan_to_belarusian_rubles(double yuan) {
	return yuan * 0.45;
	}
double Currency_translator::Conversion_russian_rubles_to_belarusian_rubles(double russian_rubles) {
	return russian_rubles * 0.034;
	}


double Currency_translator::Conversion_belarusian_rubles_to_euro(double bel_rubles) {
	return bel_rubles * 0.29;
	}
double Currency_translator::Conversion_belarusian_rubles_to_dollars(double bel_rubles) {
	return bel_rubles * 0.31;
	}
double Currency_translator::Conversion_belarusian_rubles_to_yuan(double bel_rubles) {
	return bel_rubles * 2.20;
	}
double Currency_translator::Conversion_belarusian_rubles_to_russian_rubles(double bel_rubles) {
	return bel_rubles * 29.34;
	}


