#include "unity.h"
#include "ascii.h"
#include "sum.h"

void setUp()
{

}

void tearDown()
{
}

void test_add()
{  
    TEST_ASSERT_EQUAL(100, addition(50, 50));
}
int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  /* Close the Unity Test Framework */
  return UNITY_END();
}
