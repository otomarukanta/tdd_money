#include <gtest/gtest.h>
#include "dollar.h"
#include "franc.h"

TEST(DollarTest, Multiplication) {
	Dollar five(5);
	ASSERT_TRUE(Dollar(10).equals(five.times(2)));
	ASSERT_TRUE(Dollar(15).equals(five.times(3)));
}
TEST(FrancTest, Multiplication) {
	Franc five(5);
	ASSERT_TRUE(Franc(10).equals(five.times(2)));
	ASSERT_TRUE(Franc(15).equals(five.times(3)));
}
TEST(DollarTest, Equality) {
	ASSERT_TRUE (Dollar(5).equals(Dollar(5)));
	ASSERT_FALSE(Dollar(5).equals(Dollar(6)));
} 
TEST(FrancTest, Equality) {
	ASSERT_TRUE (Franc(5).equals(Franc(5)));
	ASSERT_FALSE(Franc(5).equals(Franc(6)));
}
TEST(MoneyTest, Equality) {
	ASSERT_FALSE(Franc(5).equals(Dollar(5)));
}
