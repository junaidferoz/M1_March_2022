#include<windows.h>
#include<stdio.h>
int main(){
    read();
    int choice;
    while(choice!=6){
        printf("*******Welcome to JFK Hospitals*********\n");
        printf("1. enter information and add it\n");
        printf("2. See the information\n");
        printf("3. Find information\n");
        printf("4. Change any information\n");
        printf("5. Delete(remove) information\n");
        printf("6. Exit\n************************************\n What do you want to do?? ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                system("cls");
                enter_info();
            break;
            case 2:
                system("cls");
                display_info();
            break;
            case 3:
                system("cls");
                find_info();
            break;
            case 4:
                system("cls");
                edit_info();
            break;
            case 5:
                system("cls");
                del_info();
            break;
            case 6:
                write();
                return 0;
            break;
            default:
                system("cls");
                printf("\n\nThe choice you have entered is invalid\nPlease enter the correct choice.");
            break;
        }
        printf("\n");
    }
}