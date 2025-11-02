#include <gtest/gtest.h>
#include "utils.h"
#include "sum.h"

// Tests for add()
TEST(AddTests, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(10, 20), 30);
}

TEST(AddTests, NegativeAndPositive) {
    EXPECT_EQ(add(-1, 1), 0);
    EXPECT_EQ(add(-5, 3), -2);
}

TEST(AddTests, Zero) {
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(0, 5), 5);
}

// Tests for sum1to100()
TEST(SumTests, Sum1To100) {
    EXPECT_EQ(sum1to100(), 5050);
}

// Edge-case style test (sanity)
TEST(AddTests, LargeValues) {
    EXPECT_EQ(add(1000000, 2000000), 3000000);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
