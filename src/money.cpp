#include "money.h"
#include "dollar.h"
#include "franc.h"

bool Money::equals(std::shared_ptr<Money> money) {
// 	std::cout << typeid(*money).name() << std::endl;
// 	std::cout << typeid(*this).name() << std::endl;
	return amount_ == money->amount_ && 
		(typeid(*this) == typeid(*money));
}
std::shared_ptr<Money> Money::dollar(const int amount) {
	return std::shared_ptr<Money>(new Dollar(amount));
}
std::shared_ptr<Money> Money::franc(const int amount) {
	return std::shared_ptr<Money>(new Franc(amount));
}