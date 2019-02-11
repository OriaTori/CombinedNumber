#include <gtest/gtest.h>
#include "CombinedNumber.hpp"
#include <list>

struct CombinedNumberTests : public ::testing::Test
{
        CombinedNumber cn;
};

TEST_F(CombinedNumberTests, whenEmptyListGivenEmptyStringShouldBeReturned)
{
    auto result = cn.constructGreatestNumber({});
    ASSERT_EQ(result, "");
}
TEST_F(CombinedNumberTests, whenOneIsGivenString1IsReturn)
{
    auto result = cn.constructGreatestNumber({1});
    ASSERT_EQ(result, "1");
}
TEST_F(CombinedNumberTests, when2ArgsAreGivenTwoStringIsReturn)
{
    auto result = cn.constructGreatestNumber({1, 1});
    ASSERT_EQ(result, "11");
}
TEST_F(CombinedNumberTests, whenTwoIsGivenString2IsReturn)
{
    auto result = cn.constructGreatestNumber({2});
    ASSERT_EQ(result, "2");
}
TEST_F(CombinedNumberTests, when3ArgsIsGivenStringIsReturn)
{
    auto result = cn.constructGreatestNumber({1,2,3});
    ASSERT_EQ(result, "123");
}
