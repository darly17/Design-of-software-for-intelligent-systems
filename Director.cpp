#include "Director.h"


bool Director::isProfitGood(Pizzeria pizzeria) {
	if (pizzeria.getProfit() > 100)
		return true;
	else return false;
}
