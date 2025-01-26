#include <gtest/gtest.h>

// Function to be tested
int add(int a, int b) {
    return a + b;
}

// Define the test fixture class Addtest inherit from Test
class AddTest : public ::testing::Test {
protected:
    int result;

    void SetUp() override {
	std::cout << "Own SetUp Method" << '\n';
        result = add(5, 7);
    }
};

// Define the tests
TEST_F(AddTest, ResultIsCorrect) {
    EXPECT_EQ(result, 12);
}

TEST_F(AddTest, ResultIsNotIncorrect) {
    EXPECT_NE(result, 13);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
