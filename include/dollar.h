#pragma once
#include "money.h"
class Dollar : public Money{
public:
	Dollar(int amount) : Money(amount){
	};
	virtual ~Dollar() {};
	std::shared_ptr<Money> times(int multiplier) {
		return std::shared_ptr<Money>(new Dollar(amount * multiplier));
	}
};
