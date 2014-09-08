#pragma once
#include "money.h"
class Dollar : public Money{
public:
	Dollar(int amount) : Money(amount, "USD"){
	};
	virtual ~Dollar() {};
	std::shared_ptr<Money> times(int multiplier) {
		return Money::dollar(amount_ * multiplier);
	}
};
