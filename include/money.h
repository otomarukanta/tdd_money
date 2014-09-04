class Dollar {
public:
	Dollar(int amount) : amount(amount){
	}
	const Dollar times(int multiplier) {
		return Dollar(amount * multiplier);
	}
	bool equals(const Dollar dollar) {
		return dollar.amount == amount;
	}
	int amount;
private:
};
