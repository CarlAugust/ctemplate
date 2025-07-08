#include "unity.h"
#include <stdio.h>

void setUp(void) {}
void tearDown(void) {}

void test_test(void)
{
    TEST_ASSERT(2 == 2);
}

int main(void)
{
    printf("Running tests\n");
    UNITY_BEGIN();
    RUN_TEST(test_test);
    return UNITY_END();
}