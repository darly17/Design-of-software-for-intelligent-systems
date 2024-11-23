#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Currency_translator
{
protected:
	string translator_name;

public:
	Currency_translator (string _name)
	{
		translator_name = _name;
	}

	string getTranslatorName();
	
	double  Conversion_euro_to_belarusian_rubles (double);
	double  Conversion_dollars_to_belarusian_rubles(double);
	double  Conversion_yuan_to_belarusian_rubles(double);
	double  Conversion_russian_rubles_to_belarusian_rubles(double);

	double  Conversion_belarusian_rubles_to_euro(double);
	double  Conversion_belarusian_rubles_to_dollars(double);
	double  Conversion_belarusian_rubles_to_yuan(double);
	double  Conversion_belarusian_rubles_to_russian_rubles(double);

	~Currency_translator() {}

};
