/**
 * @file operations.h
 * @author Junaid Feroz Khan (junaidferozkhan@gmail.com)
 * @brief A header file that contains all the function declarations of the standard operations being done by the calculator
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _OPERATIONS_H_
#define _OPERATIONS_H_
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
 * @brief Add operation
 * Adds two numbers
 */
double add(double num1,double num2);
/**
 * @brief Subtract operation
 * Subtracts two numbers
 */
double subtract(double num1,double num2);
/**
 * @brief Multiplication
 * Multiples two numbers
 */
double multiply(double num1,double num2);
/**
 * @brief Division
 * Divides two numbers. Handles divide by zero operation
 */
double divide(double num1,double num2);
/**
 * @brief Modulus
 * gives the remainder of the division of the two numbers
 */
double modulus(double num1,double num2);
/**
 * @brief power operation
 * raises a number to a certain power
 */
double power(double num1,double num2);
/**
 * @brief Factorial
 * finds the factorial of the number
 */
long factorial(double num);
/**
 * @brief square root
 * finds the square root of the number
 */
double root(double num);
#endif