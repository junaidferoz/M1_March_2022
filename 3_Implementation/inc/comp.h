/**
 * @file complex.h
 * @author Junaid (junaidferozkhan@gmail.com)
 * @brief Structure declaration for complex operations
 * @version 0.1
 * @date 2022-03-28
 * @copyright Copyright (c) 2022
 */
#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct complex{
    double real,imaginary;
}complex;
/**
 * @brief Set the number object
 * 
 * @param num1 real part
 * @param num2 imaginary part
 * @return complex 
 */
complex set_number(int num1,int num2);
/**
 * @brief adds two complex numbers
 * 
 * @param num1 complex number 1
 * @param num2 complex number 2
 * @return complex (sum of the two numbers)
 */
complex addition(complex num1,complex num2);
/**
 * @brief subtracts two complex numbers
 * @param num1 complex number 1
 * @param num2 complex number 2
 * @return complex (difference of the two numbers)
 */
complex subtraction(complex num1,complex num2);
/**
 * @brief mutiplies two complex numbers
 * @param num1 complex number 1
 * @param num2 complex number 2
 * @return complex (product of the two numbers)
 */
complex multiplication(complex num1,complex num2);
/**
 * @brief divides two complex numbers
 * @param num1 complex number 1
 * @param num2 complex number 2
 * @return complex (quotient of the two numbers)
 */
complex division(complex num1,complex num2);
/**
 * @brief magnitude of a complex number
 * @param num complex number 1
 * @return double (magnitude of the number)
 */
double absolute(complex num);
/**
 * @brief angle of a complex number
 * @param num the complex number
 * @return double return the phase angle of the number
 */
double angle(complex num);
#endif