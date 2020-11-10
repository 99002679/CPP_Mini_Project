#include "pch.h"
#include <gtest/gtest.h>
#include <string.h>
 using namespace std; 
 

	TEST(SuperMarket, DefaultConstructor)
	{
		SuperMarket t;
		EXPECT_EQ(0, t.getCustomerid(0));
		EXPECT_EQ(0, t.getCustomer_phone_number(0));
		EXPECT_STREQ("", t.getCustomer_name("").c_str());
		EXPECT_STREQ("", t.getCustomer_address("").c_str());
	}
	TEST(SuperMarket, ParameterConstructor)
	{
		SuperMarket t1("a", 1, "b", 2);
		EXPECT_EQ(1, t1.getCustomerid(1));
		EXPECT_EQ(2, t1.getCustomer_phone_number(2));
		EXPECT_STREQ("a", t1.getCustomer_name("a").c_str());
		EXPECT_STREQ("b", t1.getCustomer_address("b").c_str());

	}

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    } // namespace
    
    