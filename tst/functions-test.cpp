#include "gtest/gtest.h"
#include "../src/functions.h"

class AddTestTest: public ::testing::Test{
protected:
    AddTest *pointer;
public:
    virtual void SetUp() override{
        pointer = new AddTest;
        pointer->varD = 4.4;
        pointer->varS = "Hello ";
        pointer->varAr = {9,8,7,6};
    }
    virtual void TearDown() override{
        delete pointer;
    }
};

TEST_F(AddTestTest, CheckDoubleAddition) {
    //arrange
    //act
    //assert
    EXPECT_EQ(pointer->add(1.6),  5.0);
}

TEST_F(AddTestTest, CheckStringAddition) {
    //arrange
    //act
    //assert
    EXPECT_EQ(pointer->getVarS("World"), "Hello World");
}

TEST_F(AddTestTest, CheckArrayAddition) {
    //arrange
    //act
    //assert
    EXPECT_EQ (pointer->getVarAr({5,4,3}), std::vector<int>({9,8,7,6,5,4,3}));
}

TEST_F(AddTestTest, CheckArrayAddition2) {
    //arrange
    //act
    //assert
    EXPECT_EQ (pointer->getVarAr({3,4,5}), std::vector<int>({9,8,7,6,3,4,5}));
}
