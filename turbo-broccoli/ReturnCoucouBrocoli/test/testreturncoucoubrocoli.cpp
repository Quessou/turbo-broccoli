#include <gtest/gtest.h>
#include <ReturnCoucouBrocoli/CoucouBrocoliReturner.h>

TEST(returnCoucouBrocoliTest, testEquals) {
    CoucouBrocoliReturner returner;
    auto str = returner.returnCoucouBrocoli();
    EXPECT_EQ(str, "Coucou turbo brocoli !");
}

TEST(returnCoucouBrocoliTest, testNotEquals) {
    CoucouBrocoliReturner returner;
    auto str = returner.returnCoucouBrocoli();
    EXPECT_NE(str, "Coucou turboo brocola !");
}
