#include "gtest/gtest.h"

// Assume these are your functions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiplication(int a, in b) {
    return a * b;
}

int division(int a, int b) {
   return a/b;
}

// Define test cases
TEST(MathTest, Addition) {
    EXPECT_EQ(add(1, 1), 2);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(MathTest, Subtraction) {
    EXPECT_EQ(subtract(1, 1), 0);
    EXPECT_EQ(subtract(-1, 1), -2);
}

TEST(MathTest1, Multiplication) {
    EXPECT_EQ(multiplication(1, 1), 1);
    EXPECT_EQ(add(2, 1), 0);
}

TEST(MathTest1, Division) {
    EXPECT_EQ(division(1, 1), 1);
}
