#include <gtest/gtest.h>
#include "myclass.h"

TEST(myTest, Test) {
  myclass m1;
  EXPECT_EQ(1, m1.getValueX())
      << "This test fails in order to demonstrate alternative failure messages";
}


int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
