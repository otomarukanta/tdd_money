#pragma once
#include "money.h"
class Franc : public Money{
public:
	Franc(int amount) : Money(amount, "CHF") {
	}; 
	virtual ~Franc() {};
	std::shared_ptr<Money> times(int multiplier) {
		return Money::franc(amount_ * multiplier);
	}
};
