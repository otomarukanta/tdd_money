#pragma once
class Money {
public:
	Money(int amount) : amount(amount) {
	}
	bool operator==(const Money rhs) const {
		return amount == rhs.amount;
	}  
protected:
	int amount;
};
