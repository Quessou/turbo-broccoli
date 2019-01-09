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


TEST(returnCoucouBrocoliTest, testReturnCoucouBrocolo) {
    CoucouBrocoliReturner returner;
    EXPECT_EQ(returner.returnCoucouBrocolo(), "Coucou turbo brocolo !");
    EXPECT_NE(returner.returnCoucouBrocolo(),"Coucou turbo brocola !");
}


TEST(returnCoucouBrocoliTest, testReturnCoucouBrocoliBranches) {
    CoucouBrocoliReturner returner;
    EXPECT_EQ(returner.returnCoucouBrocoli(false), "Coucou turbo brocoli !");
    EXPECT_EQ(returner.returnCoucouBrocoli(true), "Coucou turbo brocolo !");
    EXPECT_NE(returner.returnCoucouBrocoli(true), "Coucou turbo brocola !");
    EXPECT_NE(returner.returnCoucouBrocoli(false), "Coucou turbo brocola !");
}
