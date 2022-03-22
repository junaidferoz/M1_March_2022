#include "hospital.h"
#include "utility.h"

int add_patient(pat* new_patient){

    FILE *file;
    if((file = fopen("patients.bin","ab+")) == NULL)
        return -1;
    fwrite(new_patient, sizeof(pat), file);
    __fpurge(stdin);
    fclose(file);

    return 0;
}
int discharge_patient(const char* pat_name){
    pat patient_del;
    FILE *file, *filetemp;
    int f,res;
    file = fopen("patients.bin","rb");
    if(file==NULL)
        return -2;
    else{
        filetemp = fopen("temp.bin","wb");
        if(filetemp == NULL)
            res = -3;
        else{
            while(fread(&patient_del, sizeof(pat),1,file) == 1){
                if(strcmp(patient_del.name,pat_name)!=0)
                    fwrite(&patient_del,sizeof(pat),1,filetemp);
                if(strcmp(patient_del.name,pat_name) == 0)
                    f = 1;
            }
            fclose(file);
            file = NULL;
            fclose(filetemp);
            if(f!=1){
                remove("temp.bin");
                res = -1;
            }
            else{
                remove("patients.bin");
                rename("temp.bin","patients.bin");
                res=0;
            }
        }
    }
    if(NULL!=file)
        fclose(file);
}
int display_patient(void){
    pat patient_;
    FILE *file;
    int c=0; //count
    if((file=fopen("patients.bin","rb"))==NULL)
        return -2;
    printf("\n*****Patient details*****");
    while(fread(&patient_,sizeof(pat),1,file) == 1){
        printf("Name: %s\nSuffering from: %s\nAge: %d\nCabin no: %d\nPhone number: %ld",patient_.name,patient_.disease,patient_.age,patient_.cabin_no,patient_.phone_no);
        c++;
    }
    printf("\n*****Patients List*****\n");
    fclose(file);
    return c;
}

