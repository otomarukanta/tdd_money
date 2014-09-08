#pragma once
#include "money.h"
class Dollar : public Money{
public:
	Dollar(int amount) : Money(amount, "USD"){
	};
	virtual ~Dollar() {};
	
};
