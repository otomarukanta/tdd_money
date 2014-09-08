#include <gtest/gtest.h>
#include "money.h"
#include "franc.h"

TEST(DollarTest, Multiplication) {
	std::shared_ptr<Money> five = Money::dollar(5);
	ASSERT_TRUE(Money::dollar(10)->equals(five->times(2)));
	ASSERT_TRUE(Money::dollar(15)->equals(five->times(3)));
}
TEST(FrancTest, Multiplication) {
	std::shared_ptr<Money> five = Money::franc(5);
	ASSERT_TRUE(Money::franc(10)->equals(five->times(2)));
	ASSERT_TRUE(Money::franc(15)->equals(five->times(3)));
}
TEST(DollarTest, Equality) {
	ASSERT_TRUE (Money::dollar(5)->equals(Money::dollar(5)));
	ASSERT_FALSE(Money::dollar(5)->equals(Money::dollar(6)));
} 
TEST(FrancTest, Equality) {
	ASSERT_TRUE (Money::franc(5)->equals(Money::franc(5)));
	ASSERT_FALSE(Money::franc(5)->equals(Money::franc(6)));
}
TEST(MoneyTest, Equality) {
	ASSERT_FALSE(Money::franc(5)->equals(Money::dollar(5)));
}

TEST(MoneyTest, Currency) {
	ASSERT_EQ("USD", Money::dollar(1)->currency());
	ASSERT_EQ("CHF", Money::franc(1)->currency());
}
