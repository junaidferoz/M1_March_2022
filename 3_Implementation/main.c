#include "comp.h"
#include "vect.h"
#include "operations.h"
void standard_mode(void);
void complex_mode(void);
void vector_mode(void);
int main(){
    int mode;char c='y';
    printf("*******START******\n");
    for(;c=='Y'||c=='y';){
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
    }
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
            complex comp1 = set_number(re,img);
            re=0;img=0;
            printf("\nEnter the real and imaginary parts of the second number: ");
            scanf("%d %d",&re,&img);
            complex comp2 = set_number(re,img);
            re=0;img=0;
            complex sum = addition(comp1,comp2);
            printf("\nThe sum is : %lf+%lf i\n",sum.real,sum.imaginary);
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
            printf("\nThe difference is : %lf+%lf i\n",diff.real,diff.imaginary);
        break;
        case 3:
            printf("\nEnter the real and imaginary parts of the first number: ");
            scanf("%d %d",&re,&img);
            complex prod1 = set_number(re,img);
            re=0;img=0;
            printf("\nEnter the real and imaginary parts of the second number: ");
            scanf("%d %d",&re,&img);
            complex prod2 = set_number(re,img);
            re=0;img=0;
            complex prod = multiplication(prod1,prod2);
            printf("\nThe product is : %lf+%lf i\n",prod.real,prod.imaginary);
        break;
        case 4:
            printf("\nEnter the real and imaginary parts of the number: ");
            scanf("%d %d",&re,&img);
            num1 = set_number(re,img);
            re=0;img=0;
            double mag = absolute(num1);
            printf("\nThe magnitude is: %lf\n",mag);
        break;
        case 5:
            printf("\nEnter the real and imaginary parts of the number: ");
            scanf("%d %d",&re,&img);
            num1 = set_number(re,img);
            re=0;img=0;
            double ang = angle(num1);
            printf("\nThe angle is: %lf\n",ang);
        break;
        default:
            printf("Enter a valid choice!!");
        break;
    }
}
void vector_mode(void){
    int choice;
    int x,y,z;
    printf("\n1. Addition\n2. Subtraction\n3. Dot product\n");
    printf("4. Magnitude\n\nEnter your choice? ");
    scanf("%d",&choice);
    if(choice==1){
        printf("\nEnter the coefficients of first vector: ");
        scanf("%d %d %d",&x,&y,&z);
        vector vct1 = define_vector(x,y,z);
        x=0,y=0,z=0;
        printf("\nEnter the coefficients of second vector: ");
        scanf("%d %d %d",&x,&y,&z);
        vector vct2 = define_vector(x,y,z);
        vector ans = sum(vct1,vct2);
        printf("\nThe sum is : %di + %dj +%dk\n",ans.x,ans.y,ans.z);
    }
    else if(choice==2){
        printf("\nEnter the coefficients of first vector: ");
        scanf("%d %d %d",&x,&y,&z);
        vector vect1 = define_vector(x,y,z);
        x=0,y=0,z=0;
        printf("\nEnter the coefficients of second vector: ");
        scanf("%d %d %d",&x,&y,&z);
        vector vect2 = define_vector(x,y,z);
        vector ans = difference(vect1,vect2);
        printf("\nThe difference is : %di + %dj +%dk\n",ans.x,ans.y,ans.z);
    }
    else if(choice==3){
        printf("\nEnter the coefficients of first vector: ");
        scanf("%d %d %d",&x,&y,&z);
        vector vector1 = define_vector(x,y,z);
        x=0,y=0,z=0;
        printf("\nEnter the coefficients of second vector: ");
        scanf("%d %d %d",&x,&y,&z);
        vector vector2 = define_vector(x,y,z);
        int ans = dot(vector1,vector2);
        printf("\nThe product is : %d\n",ans);
    }
    else if(choice==4){
        printf("\nEnter the coefficients of first vector: ");
        scanf("%d %d %d",&x,&y,&z);
        vector vect = define_vector(x,y,z);
        float ans = magnitude(vect);
        printf("\nThe magnitude is : %.3f\n",ans);
    }
    else{
        printf("Enter a valid choice!!");
    }
}