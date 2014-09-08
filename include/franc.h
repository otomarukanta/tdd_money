#pragma once
#include "money.h"
class Franc : public Money{
public:
	Franc(int amount) : Money(amount, "CHF") {
	}; 
	virtual ~Franc() {};
};
