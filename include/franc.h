#pragma onece
#include "money.h"
class Franc : public Money{
public:
	Franc(int amount) : Money(amount){
	}
	const Franc times(int multiplier) {
		return Franc(amount * multiplier);
	}
};
