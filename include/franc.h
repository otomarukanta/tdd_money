class Franc {
public:
	Franc(int amount) : amount(amount){
	}
	const Franc times(int multiplier) {
		return Franc(amount * multiplier);
	}
	bool operator==(const Franc rhs) const {
		return amount == rhs.amount;
	}
private:
	int amount;
private:
};
