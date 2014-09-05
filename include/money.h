#pragma once
#include <iostream>
class Money {
public:
	virtual void m(){};
	Money(int amount) : amount(amount) {
	}
	bool equals(const Money& money);
protected:
	int amount;
};
