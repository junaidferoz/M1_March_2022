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

    RUN_TEST(test_comp_add);
    RUN_TEST(test_comp_subtract);
    RUN_TEST(test_comp_multiply);
    RUN_TEST(test_comp_absolute);
    RUN_TEST(test_comp_angle);
    
    RUN_TEST(test_add_vector);
    RUN_TEST(test_subtract_vector);
    RUN_TEST(test_multiplydot_vector);
    RUN_TEST(test_magnitude_vector);

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

void test_comp_absolute(void){
    complex comp = {4,3};
    TEST_ASSERT_EQUAL(5,absolute(comp));
    TEST_ASSERT_EQUAL(7,absolute(comp)); //fail case
}
void test_comp_add(void){
    complex num1 = {4,5};
    complex num2 = {6,7};
    complex sum = {10,12};
    TEST_ASSERT_EQUAL(10,addition(num1,num2).real);
    TEST_ASSERT_EQUAL(12,addition(num1,num2).imaginary);
}
void test_comp_subtract(void){
    complex num1 = {4,5};
    complex num2 = {6,7};
    complex difference = {-2,-2};
    TEST_ASSERT_EQUAL(-2,subtraction(num1,num2).real);
    TEST_ASSERT_EQUAL(-2,subtraction(num1,num2).imaginary);
}
void test_comp_multiply(void){
    complex num1 = {11,6};
    complex num2 = {6,10};
    complex product = multiplication(num1,num2);
    TEST_ASSERT_EQUAL(product.real,multiplication(num1,num2).real);
    TEST_ASSERT_EQUAL(-7,multiplication(num1,num2).imaginary); //fail case
    TEST_ASSERT_EQUAL(product.imaginary,multiplication(num1,num2).imaginary);
}
void test_comp_angle(void){
    complex num = {1,1};
    double ang = angle(num);
    TEST_ASSERT_EQUAL(ang,angle(num));
    TEST_ASSERT_EQUAL(7.00,angle(num)); //fail case
}
void test_add_vector(void){
    vector vect1 = {3,4,5};
    vector vect2 = {-1,2,-4};
    vector ans = sum(vect1,vect2);
    TEST_ASSERT_EQUAL(ans.x,vect1.x+vect2.x);
    TEST_ASSERT_EQUAL(ans.y,vect1.y+vect2.y);
    TEST_ASSERT_EQUAL(ans.z,vect1.z+vect2.z);
    TEST_ASSERT_EQUAL(5,sum(vect1,vect2).x); //fail case
}
void test_subtract_vector(void){
    vector vect1 = {3,4,5};
    vector vect2 = {-1,2,-4};
    vector diff = difference(vect1,vect2);
    TEST_ASSERT_EQUAL(diff.x,vect1.x-vect2.x);
    TEST_ASSERT_EQUAL(diff.y,vect1.y-vect2.y);
    TEST_ASSERT_EQUAL(diff.z,vect1.z-vect2.z);
    TEST_ASSERT_EQUAL(5,difference(vect1,vect2).x); //fail case
}
void test_multiplydot_vector(void){
    vector vect = {3,2,1};
    vector another_vect = {4,5,-2};
    int ans = dot(vect,another_vect);
    TEST_ASSERT_EQUAL(20,ans);
    TEST_ASSERT_EQUAL(10,ans); //fail case
}
void test_magnitude_vector(void){
    vector vect = {2,2,1};
    double ans = magnitude(vect);
    TEST_ASSERT_EQUAL(3.00,ans);
    TEST_ASSERT_EQUAL(2.00,ans); //fail case
}

