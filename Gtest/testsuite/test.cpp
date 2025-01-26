#include <gtest/gtest.h>

// Functions to be tested
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mydiv(int a, int b) {
    if(b == 0) {
        throw std::invalid_argument("Divide by zero error");
    }
    return a / b;
}

int mul(int a, int b) {
    return a * b;
}

// Define the tests
TEST(MathTest, Add) {
    EXPECT_EQ(add(5, 7), 12);
}

TEST(MathTest, Subtract) {
    EXPECT_EQ(sub(5, 7), -2);
}

TEST(MathTest, Divide) {
    EXPECT_EQ(mydiv(10, 0), 5);
    EXPECT_THROW(mydiv(10, 0), std::invalid_argument);
}

TEST(MathTest, Multiply) {
    EXPECT_EQ(mul(5, 7), 35);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
