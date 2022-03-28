#include "unity.h"
#include "operations.h"
#include "comp.h"
#include "vect.h"

#define PROJECT_NAME "Calculator"

void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_modulus(void);
void test_power(void);
void test_factorial(void);
void test_squareroot(void);

void test_comp_add(void);
void test_comp_subtract(void);
void test_comp_multiply(void);
void test_comp_divide(void);
void test_comp_absolute(void);
void test_comp_angle(void);

void test_add_vector(void);
void test_subtract_vector(void);
void test_multiplydot_vector(void);
void test_magnitude_vector(void);

void setUp() {}
void tearDown() {}

int main(){

    UNITY_BEGIN();

    RUN_TEST(test_addition);
    RUN_TEST(test_subtraction);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_division);
    RUN_TEST(test_modulus);
    RUN_TEST(test_factorial);
    RUN_TEST(test_squareroot);

    return UNITY_END();
}
void test_add(void){
    TEST_ASSERT_EQUAL(50,add(30,20));
    TEST_ASSERT_EQUAL(70,add(20,30)); //fail case
}
void test_subtract(void){
    TEST_ASSERT_EQUAL(10,subtract(30,20));
    TEST_ASSERT_EQUAL(-20,add(20,40)); 
    TEST_ASSERT_EQUAL(0,add(20,30)); //fail case
}
void test_multiply(void){
    TEST_ASSERT_EQUAL(10,multiply(5,2));
    TEST_ASSERT_EQUAL(0,multiply(5,0)); 
    TEST_ASSERT_EQUAL(78,add(35,3)); //fail case
}
