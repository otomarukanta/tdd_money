#pragma once
#include <iostream>
class Money {
public:
	virtual void m(){};
	Money(int amount) : amount(amount) {};
// 	virtual ~Money() {};
	bool equals(std::shared_ptr<Money> money);      
	virtual std::shared_ptr<Money> times(int multiplier) = 0;
	static std::shared_ptr<Money> dollar(const int amount);
	static std::shared_ptr<Money> franc(const int amount);
protected:
	int amount;
};
