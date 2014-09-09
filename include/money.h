#pragma once
#include <iostream>
#include "expression.h"
class Money : public Expression{
public:
	Money(int amount, std::string currency) : amount_(amount), currency_(currency) {};
	virtual ~Money() {};
	bool equals(const Money& money) const{
		return amount_ == money.amount_ && 
			this->currency_ == money.currency_;
	} 
	std::shared_ptr<Expression> plus(Money add) {
		return std::shared_ptr<Money>(new Money(amount_ + add.amount_, currency_));
	}
	static std::shared_ptr<Money> dollar(const int amount) {
		return std::shared_ptr<Money>(new Money(amount, "USD"));
	} 
	static std::shared_ptr<Money> franc(const int amount) {
		return std::shared_ptr<Money>(new Money(amount, "CHF"));
	} 
	std::string currency() {
		return currency_;
	}
	std::shared_ptr<Money> times(int multiplier) {
		return std::shared_ptr<Money>(new Money(amount_ * multiplier, currency_));
	} 
protected:
	int amount_;
	std::string currency_;
};
