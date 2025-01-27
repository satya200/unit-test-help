#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "bank.h" // Assume this is where your Bank and IDatabase classes are defined

using namespace testing;
using ::testing::Return;
using ::testing::StrEq;

class MockDatabase : public IDatabase {
public:
    MOCK_METHOD(void, storeDB, (float balance), (override));
    MOCK_METHOD(float, readDB, (), (override));
};

TEST(BankTest, TestDeposit) {
    MockDatabase mockDB;
    Bank bank(&mockDB);

    //EXPECT_CALL(mockDB, readDB()).Times(1).WillOnce(Return(0.0));
    EXPECT_CALL(mockDB, readDB()).Times(1).WillOnce(Return(0.0));
    EXPECT_CALL(mockDB, storeDB(500.0)).Times(1);

    bank.initialize();
    bank.deposit(500.0);
}

TEST(BankTest, TestWithdraw) {
    MockDatabase mockDB;
    Bank bank(&mockDB);

    EXPECT_CALL(mockDB, readDB()).Times(1).WillOnce(Return(500.0));
    EXPECT_CALL(mockDB, storeDB(300.0)).Times(1);

    bank.initialize();
    bank.withdraw(200.0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
