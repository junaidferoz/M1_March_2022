#include "comp.h"
#include "vect.h"
#include "operations.h"
char choice;
int main(){
    char mode;
    printf("*******START******\n");
    printf("\n1. COMP\n2. CMPLX\n3. VECT\n");
    printf("******************");
    printf("\nEnter your choice: ");
    scanf("%c",&mode);
    switch(mode){
        case 1:
            standard_mode();
        break;
        case 2:
            complex_mode();
        break;
        case 3:
            vector_mode();
        break;
        default:
            printf("Enter the valid choice!!");
            exit(0);
        break;
    }
    return 0;
}
void standard_mode(){
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n");
    printf("4. Division\n5. Modulus\n6. Factorial\n7. Square root\n");
    printf("\nEnter your choice: ");
    scanf("%c",&choice);
    double num1=0,num2=0;
    switch(choice){
        case 1:
            printf("Enter the two numbers: ");
            scanf("%lf %lf",&num1,&num2);
            printf("sum = %lf",add(num1,num2));
        break;
        case 2:
            printf("Enter the two numbers: ");
            scanf("%lf %lf",&num1,&num2);
            printf("sum = %lf",subtract(num1,num2));
        break;
        case 3:
            printf("Enter the two numbers: ");
            scanf("%lf %lf",&num1,&num2);
            printf("product = %lf",multiply(num1,num2));
        break;
        case 4:
            printf("Enter the two numbers: ");
            scanf("%lf %lf",&num1,&num2);
            if(num2==0){
                printf("Cannot divide by zero!!");
                break;
            }
            else    
                printf("Quotient = %lf",divide(num1,num2));
        break;
        case 5:
            printf("Enter the two numbers: ");
            scanf("%lf %lf",&num1,&num2);
            printf("remainder = %lf",modulus(num1,num2));
        break;
        case 6:
            printf("Enter the number: ");
            scanf("%lf",&num1);
            printf("factorial = %ld",factorial(num1));
        break;
        case 7:
            printf("Enter the number: ");
            scanf("%lf",&num1);
            printf("square root = %ld",root(num1));
        break;
        default:
            printf("Enter the valid choice!!");
        break;
    }
}