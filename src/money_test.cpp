#include <gtest/gtest.h>
#include "money.h"
#include "franc.h"
#include "expression.h"
#include "bank.h"

TEST(DollarTest, Multiplication) {
	std::shared_ptr<Money> five = Money::dollar(5);
	ASSERT_TRUE(Money::dollar(10)->equals(*five->times(2)));
	ASSERT_TRUE(Money::dollar(15)->equals(*five->times(3)));
}
TEST(FrancTest, Multiplication) {
	std::shared_ptr<Money> five = Money::franc(5);
	ASSERT_TRUE(Money::franc(10)->equals(*five->times(2)));
	ASSERT_TRUE(Money::franc(15)->equals(*five->times(3)));
}
TEST(MoneyTest, Equality) {
	ASSERT_TRUE (Money::dollar(5)->equals(*Money::dollar(5)));
	ASSERT_FALSE(Money::dollar(5)->equals(*Money::dollar(6)));
	ASSERT_FALSE(Money::franc(5)->equals(*Money::dollar(5)));
} 

TEST(MoneyTest, Currency) {
	ASSERT_EQ("USD", Money::dollar(1)->currency());
	ASSERT_EQ("CHF", Money::franc(1)->currency());
}

TEST(DollarTest, SimpleAdd) {
	std::shared_ptr<Money> five = Money::dollar(5);
	std::shared_ptr<Expression> sum = five->plus(*five);
	std::shared_ptr<Bank> bank = std::shared_ptr<Bank>(new Bank());
	Money reduced = *bank->reduce(*sum, "USD");
	ASSERT_TRUE(Money::dollar(10)->equals(reduced));
}
