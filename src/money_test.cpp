#include <gtest/gtest.h>
#include "money.h"

TEST(MoneyTest,Multiplication) {
	Dollar five(5);
	ASSERT_EQ(Dollar(10), five.times(2));
	ASSERT_EQ(Dollar(15), five.times(3));
}

TEST(MoneyTest, Equality) {
	ASSERT_TRUE (Dollar(5) == Dollar(5));
	ASSERT_FALSE(Dollar(5) == Dollar(6));
}
