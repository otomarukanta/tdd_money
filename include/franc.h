#pragma once
#include "money.h"
class Franc : public Money{
public:
	Franc(int amount) : Money(amount){
	};
	virtual ~Franc() {};
	std::shared_ptr<Money> times(int multiplier) {
		return std::shared_ptr<Money>(new Franc(amount * multiplier));
	}
};
