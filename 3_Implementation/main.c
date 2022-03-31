#include "comp.h"
#include "vect.h"
#include "operations.h"
void standard_mode(void);
void complex_mode(void);
void vector_mode(void);
int main(){
    int mode;char c;
    printf("*******START******\n");
    do{
    printf("\n1. COMP\n2. CMPLX\n3. VECT\n");
    printf("******************");
    printf("\nEnter your choice: ");
    scanf("%d",&mode);
    if(mode==1)
        standard_mode();
    else if(mode==2)
        complex_mode();
    else if(mode==3)
        vector_mode();
    else
        printf("Enter a valid choice!!");
    printf("Do you want to continue (Y/N)? ");
    scanf("%c",&c);
    }while(c=='Y'||c=='y');
    return 0;
}
void standard_mode(){
    int choice;
    double num1=0,num2=0;
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n");
    printf("4. Division\n5. Modulus\n6. Factorial\n7. Square root\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter the two numbers: ");
            scanf("%lf %lf",&num1,&num2);
            printf("sum = %.1lf\n",add(num1,num2));
        break;
        case 2:
            printf("Enter the two numbers: ");
            scanf("%lf %lf",&num1,&num2);
            printf("difference = %.1lf\n",subtract(num1,num2));
        break;
        case 3:
            printf("Enter the two numbers: ");
            scanf("%lf %lf",&num1,&num2);
            printf("product = %.1lf\n",multiply(num1,num2));
        break;
        case 4:
            printf("Enter the two numbers: ");
            scanf("%lf %lf",&num1,&num2);
            if(num2==0){
                printf("Cannot divide by zero!!");
                break;
            }
            else    
                printf("Quotient = %.1lf\n",divide(num1,num2));
        break;
        case 5:
            printf("Enter the two numbers: ");
            scanf("%lf %lf",&num1,&num2);
            printf("remainder = %lf\n",modulus(num1,num2));
        break;
        case 6:
            printf("Enter the number: ");
            scanf("%lf",&num1);
            printf("factorial = %ld\n",factorial(num1));
        break;
        case 7:
            printf("Enter the number: ");
            scanf("%lf",&num1);
            printf("square root = %.3lf\n",root(num1));
        break;
        default:
            printf("Enter the valid choice!!");
    }
}
void complex_mode(){
    int choice;
    complex num1,num2;
    int re,img;
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n");
    printf("4. Magnitude\n5. Angle\n\nEnter your choice? ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("\nEnter the real and imaginary parts of the first number: ");
            scanf("%d %d",&re,&img);
            num1 = set_number(re,img);
            re=0;img=0;
            printf("\nEnter the real and imaginary parts of the second number: ");
            scanf("%d %d",&re,&img);
            num2 = set_number(re,img);
            re=0;img=0;
            complex sum = addition(num1,num2);
            printf("\nThe sum is : %lf+%lf i",sum.real,sum.imaginary);
        break;
        case 2:
            printf("\nEnter the real and imaginary parts of the first number: ");
            scanf("%d %d",&re,&img);
            num1 = set_number(re,img);
            re=0;img=0;
            printf("\nEnter the real and imaginary parts of the second number: ");
            scanf("%d %d",&re,&img);
            num2 = set_number(re,img);
            re=0;img=0;
            complex diff = subtraction(num1,num2);
            printf("\nThe difference is : %lf+%lf i",diff.real,diff.imaginary);
        break;
        case 3:
            printf("\nEnter the real and imaginary parts of the first number: ");
            scanf("%d %d",&re,&img);
            num1 = set_number(re,img);
            re=0;img=0;
            printf("\nEnter the real and imaginary parts of the second number: ");
            scanf("%d %d",&re,&img);
            num2 = set_number(re,img);
            re=0;img=0;
            complex prod = multiplication(num1,num2);
            printf("\nThe product is : %lf+%lf i",prod.real,prod.imaginary);
        break;
        case 4:
            printf("\nEnter the real and imaginary parts of the number: ");
            scanf("%d %d",&re,&img);
            num1 = set_number(re,img);
            re=0;img=0;
            double mag = absolute(num1);
            printf("\nThe magnitude is: %lf",mag);
        break;
        case 5:
            printf("\nEnter the real and imaginary parts of the number: ");
            scanf("%d %d",&re,&img);
            num1 = set_number(re,img);
            re=0;img=0;
            double ang = angle(num1);
            printf("\nThe angle is: %lf",ang);
        break;
        default:
            printf("Enter a valid choice!!");
        break;
    }
}