#include "gtest/gtest.h"
#include "../src/functions.h"

AddTest a{4.4,"Hello ",{9,8,7,6}};

class AddTestTest: public ::testing::Test{
public:
    virtual void SetUp() override{

    }
    virtual void TearDown() override{

    }
};

TEST(AddTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ(a.add(1.6),  6.0);
}

TEST(AddTest, test2) {
    //arrange
    //act
    //assert
    EXPECT_EQ (a.getVarS("World"), "Hello World");
}

TEST(AddTest, test3) {
    //arrange
    //act
    //assert
    EXPECT_EQ (a.getVarAr({5,4,3}), std::vector<int>({9,8,7,6,5,4,3}));
}

