#include "CppUTest/TestHarness.h"

extern "C" {
    #include "temperature.h"
}

TEST_GROUP(temperature_test_group)
{
    void setup()
    {
        //Initialize before each test
    }
    void teardown()
    {
        //Deinitialize after each test
    }
};

TEST(temperature_test_group, simple_test)
{
    float input = 20.00;
    float output = fahrenheight_to_celsius(input);
    CHECK_EQUAL(output, 68.00);
    
}
// TEST(temperature_test_group, null_test)
// {
//     float input = -1;
//     float output = fahrenheight_to_celsius(input);
//     CHECK_EQUAL(output, 68.00); 
// }