#include<gtest/gtest.h>
#include<multiply.hpp>

TEST(Multiply, Int) {
    EXPECT_EQ(mult(8, 8), 64);
}

TEST(Multiply, Float) {
    EXPECT_EQ(mult(8.0f, 8.0f), 64.0f);
}

TEST(Multiply, Double) {
    EXPECT_EQ(mult(8.0, 8.0), 64.0);
}
