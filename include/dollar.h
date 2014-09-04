#pragma once
#include "money.h"
class Dollar : public Money{
public:
	Dollar(int amount) : Money(amount){
	}
	const Dollar times(int multiplier) {
		return Dollar(amount * multiplier);
	}
};
