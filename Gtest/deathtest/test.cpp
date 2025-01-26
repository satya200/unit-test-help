#include <gtest/gtest.h>
#include <cstdlib>

void CheckNullAndAbort(int* ptr) {
    if (ptr == nullptr) {
        abort();
    }
}

TEST(NullCheckTest, NullPointer) {
    ASSERT_DEATH(CheckNullAndAbort(nullptr), "");
}

TEST(NullCheckTest, NonNullPointer) {
    int value = 5;
    ASSERT_NO_FATAL_FAILURE(CheckNullAndAbort(&value));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
