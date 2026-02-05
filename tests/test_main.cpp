// Dummy google tests

#include <gtest/gtest.h>
#include <test_dummy.hpp>

TEST(DummyTest, Dummy) {
    EXPECT_EQ(1, 1);
    EXPECT_EQ(return_forty_two(), 42);
    EXPECT_TRUE(return_true());
    EXPECT_FALSE(return_false());
}
