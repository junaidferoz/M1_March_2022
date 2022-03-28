/**
 * @file vect.h
 * @author Junaid (junaidferozkhan@gmail.com)
 * @brief header file containing declaration of vector
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _VECT_H_
#define _VECT_H_
#include<stdio.h>
#include<math.h>
typedef struct vect{
    int x;int y;int z;
}vector;
/**
 * @brief define vector
 *  defines the vector
 */
vector define_vector(int,int,int);
/**
 * @brief add two vectors
 * @param vct1 a vector
 * @param vct2 another vector
 * @return vector sum of two vectors
 */
vector sum(vector vct1,vector vct2);
/**
 * @brief subtract two vectors
 * @param vct1 a vector
 * @param vct2 another vector
 * @return vector difference of two vectors
 */
vector difference(vector vct1,vector vct2);
/**
 * @brief dot product two vectors
 * @param vct1 a vector
 * @param vct2 another vector
 * @return scalar product of two vectors
 */
int dot(vector vct1,vector vct2);
/**
 * @brief add two vectors
 * @param vct1 a vector
 * @return magnitude of a vectors
 */
float magnitude(vector vct);
#endif