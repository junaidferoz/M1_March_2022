#include "operations.h"

double add(double num1,double num2) {return(num1+num2);}
double subtract(double num1,double num2) {return(num1-num2);}
double multiply(double num1,double num2) {return(num1*num2);}
double divide(double num1,double num2) {return(num1/num2);}
double modulus(double num1,double num2) {return(num1%num2);}
double power(double num1,double num2){
    double ans=1;
    for(int i=0;i<num2;i++)
        ans*=num1;
    return ans;
}
long factorial(double num){
    if num==0||num==1
        return 1;
    else
        return(num*factorial(num-1));
}
double root(double num){
    double ans=1;int i=0;
    while(1){
        i=i+1;
        ans = (num/ans + ans)/2;
        if(i==num+1)    break;
    }
    return ans;
}