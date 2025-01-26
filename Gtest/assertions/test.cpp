#include <gtest/gtest.h>

int add(int a, int b);

TEST(TestSuite, EqualityAssertion) {
    int val1 = 5;
    int val2 = 5;
    ASSERT_EQ(val1, val2);
}

TEST(TestSuite, AddEqualityAssertion) {
    int val1 = 5;
    int val2 = 5;
    int res;
    res = add(val1, val2);
    ASSERT_EQ(res, 1);
}

TEST(TestSuite, InequalityAssertion) {
    int val1 = 5;
    int val2 = 6;
    ASSERT_NE(val1, val2);
}

TEST(TestSuite1, GreaterThanAssertion) {
    int val1 = 10;
    int val2 = 5;
    ASSERT_GT(val1, val2);
}

TEST(TestSuite2, LessThanAssertion) {
    int val1 = 5;
    int val2 = 10;
    ASSERT_LT(val1, val2);
}

int main(int argc, char **argv) {
    /*This is a call to the InitGoogleTest function in the testing namespace. This function initializes Google Test. It takes the command-line arguments and may change them. The reason it takes the command-line arguments is that Google Test supports its own set of command-line flags for controlling its behavior. */
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

