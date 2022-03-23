#include "hospital.h"
#include "utility.h"
#include "patient.h"
typedef enum options{
    NONE,
    ADMIT_PATIENT,
    MODIFY_DETAIL,
    DISCHARGE_PATIENT,
    FIND_PATIENT,
    EXIT
}ops;
int main(){
    int ch = NONE; //choice
    int c;
    printf("*********WELCOME TO JFK HOSPITAL*********");
    while(1){
        printf("\nSelect your option: \n");
        printf("1.Admit patient\n2.Edit patient details\n3.Discharge patient\4.Find patient details\n5.Exit\n");
        printf("*****************************************\n");
        printf("\nEnter your choice: ");
        while((c = getchar()) != '\n' && c != EOF) {}
        scanf("%d",&ch);
        int count_patient = display_patient();
        switch(ch){
            case ADMIT_PATIENT:
                pat *new_patient = (pat *)calloc(1,sizeof(pat));
                get_patient_details(new_patient);
                if(add_patient(new_patient)==0)
                    printf("\n\t Patient admitted successfully");
                else
                    printf("\nSorry! Cannot admit patient");
                free(new_patient);
            break;
            case DISCHARGE_PATIENT:
                //int count_patient = display_patient();
                if(count_patient > 0){
                    char pat_name[LIM_NAME] = "";
                    printf("Enter patient's name from the list above: ");
                    get_patient_data(pat_name);
                    int f = discharge_patient(pat_name);
                    if(f == -1)
                        printf("\n***There is no patient with this name***\n");
                    else if(f == -2)
                        printf("\n***No patient found***");
                    else if(f == 0)
                        printf("\n***Patient discharged successfully!***\n***Take care!!***\n");
                    else    
                        printf("\n***Due to some issues, we cannot discharge the patient***\n");
                }
                else if(count_patient == 0)
                    printf("\n***There are no patients to be found***\n");
            break;
            case MODIFY_DETAIL:
                /*int count_patient;
                count_patient = display_patient();*/
                if(count_patient > 0){
                    char pat_name[LIM_NAME] = "";
                    pat *new_patient = (pat *)calloc(1,sizeof(pat));
                    printf("Enter patient's name from the list above: ");
                    get_patient_data(pat_name);
                    get_patient_details(new_patient);
                    int f = edit_patient_details(pat_name,new_patient);
                    if(f == -1)
                        printf("\n***There is no patient with this name***\n");
                    else if(f == -2)
                        printf("\n***No patient found***");
                    else if(f == 0)
                        printf("\n***Patient discharged successfully!***\n***Take care!!***\n");
                    else    
                        printf("\n***Error in editing patient details***\n");
                    free(new_patient);
                }
                else if(count_patient == 0)
                    printf("\n***There are no patients to be found***\n");
            break;
            case FIND_PATIENT:
                //int count_patient = display_patient();
                if(count_patient > 0){
                    char pat_name[LIM_NAME] = "";
                    printf("\nWho do you want to find here? ");
                    while((c = getchar()) != '\n' && c != EOF) {}
                    get_patient_data(pat_name);
                    switch(find_patient(pat_name)){
                        case -1:
                            printf("\n***No patient with the given name is here***");
                        break;
                        case -2:
                            printf("\n***There are no patients to be found here***\n");
                        break;
                        case 0:
                            printf("\n***the patient you are searching is here!!***\n");
                        break;
                        default:
                            printf("\n***There is an error in finding the patient. Sorry for the inconvenience***\n");
                        break;
                    }
                }
                else if(count_patient == 0)
                    printf("\n***There are no patients here now!!***\n");
            break;
            case EXIT:
                printf("\n***\tGoodbye...\t***\n");
                exit(0);
            break;
            default:
                printf("\nSelected option is not available.\n");
            break;
        }
    }
}