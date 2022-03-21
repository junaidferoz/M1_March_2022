#include "utility.h"
#include  "patient.h"

void get_patient_data(char* name){
    int r=0,c;
    char w,wch;
    __fpurge(stdin);
    do{
        w=getchar();
        if(w!='\n'){
            *(name+r)=w;
            putchar(w);
            r++;
        }
        if(w==8){
            if(r>0)
                r--;
            for(c=0;c<r;c++){
                wch = *(name+c);
                putchar(wch);
            }
        }
    }while(w!='\n');
    *(name*r) = '\0';
}
void get_patient_details(pat* patient){
    printf("\nEnter name: ");
    __fpurge(stdin);
    get_patient_data(patinet->name);
    printf("\nWhat is the patient suffering from? ");
    __fpurge(stdin);
    get_patient_data(patient->disease);
    printf("\nCan you please tell me his phone number? ");
    __fpurge(stdin);
    get_patient_data(patient->phone_no);
    printf("\nHis age please? ");
    __fpurge(stdin);
    get_patient_data(patient->age);
    printf("Cabin?? ");
    __fpurge(stdin);
    get_patient_data(patient->data);
}
