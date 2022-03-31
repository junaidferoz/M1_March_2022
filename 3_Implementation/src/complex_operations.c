#include "comp.h"
complex set_number(int re,int img){
    complex c;
    c.real=re;
    c.imaginary=img;
    return c;
}
complex addition(complex c1,complex c2){
    complex ans;
    ans.real=c1.real+c2.real;
    ans.imaginary = c1.imaginary + c2.imaginary;
    return ans;
}
complex subtraction(complex comp1,complex comp2){
    complex ans;
    ans.real= comp1.real - comp2.real;
    ans.imaginary = comp1.imaginary - comp2.imaginary;
    return ans;
}
complex multiplication(complex a1,complex b1){
    complex product;
    product.real = (a1.real*b1.real) - (a1.imaginary*b1.imaginary);
    product.imaginary = (a1.imaginary*b1.real) + (a1.real*b1.imaginary);
    return product;
}
double absolute(complex comp){
    double ans=0;
    ans = sqrt(pow(comp.real,2)+pow(comp.imaginary,2));
    return ans;
}
double angle(complex num){
    double ans=0;
    ans = atan(abs((int)num.imaginary)/abs((int)num.real));
    return ans;
}
