//#include <gtest/gtest.h>

#include <gtest/gtest.h>
#include <ReturnCoucouBrocoli/CoucouBrocoliReturner.h>

TEST(returnCoucouBrocoliTest, myTest) {
    CoucouBrocoliReturner returner;
    auto str = returner.returnCoucouBrocoli();
    EXPECT_EQ(str, "Coucou turbo brocoli !");
}
