#include "unity.h"
#include "operations.h"
#include "comp.h"
#include "vect.h"

#define PROJECT_NAME "Calculator"

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
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

    RUN_TEST(test_add);
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
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
    TEST_ASSERT_EQUAL(-20,subtract(20,40)); 
    TEST_ASSERT_EQUAL(0,subtract(20,30)); //fail case
}
void test_multiply(void){
    TEST_ASSERT_EQUAL(10,multiply(5,2));
    TEST_ASSERT_EQUAL(0,multiply(5,0)); 
    TEST_ASSERT_EQUAL(78,add(35,3)); //fail case
}
void test_divide(void){
    TEST_ASSERT_EQUAL(2,divide(10,5));
    TEST_ASSERT_EQUAL(-3,multiply(9,-3)); 
    TEST_ASSERT_EQUAL(7,add(35,3)); //fail case
}
void test_modulus(void){
    TEST_ASSERT_EQUAL(0,modulus(10,2));
    TEST_ASSERT_EQUAL(2,modulus(8,3));
    TEST_ASSERT_EQUAL(5,modulus(9,5));//fail case
}
void test_squareroot(void){
    TEST_ASSERT_EQUAL(4,root(16));
    TEST_ASSERT_EQUAL(2,root(4));
    TEST_ASSERT_EQUAL(3,root(5)); //fail case
}
void test_factorial(void){
    TEST_ASSERT_EQUAL(6,factorial(3));
    TEST_ASSERT_EQUAL(24,factorial(4));
    TEST_ASSERT_EQUAL(5098,factorial(7)); //fail case
}

void test_complex_add(void){
    
}
