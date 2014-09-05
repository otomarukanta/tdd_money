#include "money.h"

bool Money::equals(const Money& money) {
	std::cout << typeid(money).name() << std::endl;
	return amount == money.amount && 
		typeid(*this) == typeid(money);
}
