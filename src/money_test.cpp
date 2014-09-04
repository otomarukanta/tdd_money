#include <gtest/gtest.h>
#include "dollar.h"
#include "franc.h"

TEST(DollarTest, Multiplication) {
	Dollar five(5);
	ASSERT_EQ(Dollar(10), five.times(2));
	ASSERT_EQ(Dollar(15), five.times(3));
}
TEST(FrancTest, Multiplication) {
	Franc five(5);
	ASSERT_EQ(Franc(10), five.times(2));
	ASSERT_EQ(Franc(15), five.times(3));
}

TEST(DollarTest, Equality) {
	ASSERT_TRUE (Dollar(5) == Dollar(5));
	ASSERT_FALSE(Dollar(5) == Dollar(6));
}
