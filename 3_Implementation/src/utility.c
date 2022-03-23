#include "utility.h"
#include  "patient.h"

void get_patient_data(char* name){
    int r=0,c,cc;
    char w,wch;
    while((cc = getchar()) != '\n' && cc != EOF) {}
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
    *(name+r) = '\0';
}
void get_patient_details(pat* patient){
    int c;
    printf("\nEnter name: ");
    while((c = getchar()) != '\n' && c != EOF) {}
    get_patient_data(patient->name);
    printf("\nWhat is the patient suffering from? ");
    while((c = getchar()) != '\n' && c != EOF) {}
    get_patient_data(patient->disease);
    printf("\nCan you please tell me his phone number? ");
    while((c = getchar()) != '\n' && c != EOF) {}
    get_patient_data(patient->phone_no);
    printf("\nHis age please? ");
    while((c = getchar()) != '\n' && c != EOF) {}
    get_patient_data(patient->age);
    printf("Cabin?? ");
    while((c = getchar()) != '\n' && c != EOF) {}
    get_patient_data(patient->cabin_no);
}
