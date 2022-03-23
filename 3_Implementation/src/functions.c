#include "hospital.h"

int add_patient(pat* new_patient){

    FILE *file;
    int c;
    if((file = fopen("patients.bin","ab+")) == NULL)
        return -1;
    fwrite(new_patient, sizeof(pat),1, file);
    while((c = getchar()) != '\n' && c != EOF) {}
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

int find_patient(const char* name){
    pat new_patient;
    FILE *file;
    file = fopen("patients.bin", "rb");
    if(file == NULL)
        return -2;
    while(fread(&new_patient,sizeof(pat),1,file) == 1){
        if(strcmp(new_patient.name,name) == 0){
            printf("\nPatient details for %s: \n",name);
            printf("Name: %s\nPhone number: %ld\nReason for admission in hospital: %s\nAge: %d\nStaying in Cabin: %d\n",new_patient.name,new_patient.phone_no,new_patient.disease,new_patient.age,new_patient.cabin_no);
            fclose(file);
            return 0;
        }
    }
    fclose(file);
    return -1;
}
int edit_patient_details(char* name,pat *update_patient){
    int res=0,f=0;
    FILE *file;
    pat old_patient;
    file = fopen("patients.bin","rb+");
    if(file == NULL)
        return -2;
    else{
        while(fread(&old_patient,sizeof(pat),1,file) == 1){
            if(strcmp(name,old_patient.name) == 0){
                fseek(file, -sizeof(pat), SEEK_CUR);
                fwrite(update_patient,sizeof(pat),1,file);
                f=1;
                break;
            }
        }
        res=(f==1?0:-1);
        fclose(file);
    }
    return res;
}

