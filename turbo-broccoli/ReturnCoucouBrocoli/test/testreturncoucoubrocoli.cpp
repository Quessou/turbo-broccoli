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

TEST(returnCoucouBrocoliTest, testDefaultCtor) {
    CoucouBrocoliReturner returner;
    EXPECT_EQ(returner.m_i, 0);
}


TEST(returnCoucouBrocoliTest, testIntCtor) {
    CoucouBrocoliReturner returner(2);
    EXPECT_EQ(returner.m_i, 2);
}

TEST(returnCoucouBrocoliTest, testCopyCtor) {
    CoucouBrocoliReturner returner;
    CoucouBrocoliReturner returner2(returner);
    EXPECT_EQ(returner2.m_i, 0);
}
