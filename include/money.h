class Dollar {
public:
	Dollar(int amount) : amount(amount){
	}
	const Dollar times(int multiplier) {
		return Dollar(amount * multiplier);
	}
	bool operator==(const Dollar rhs) const {
		return amount == rhs.amount;
	}
	int amount;
private:
};
