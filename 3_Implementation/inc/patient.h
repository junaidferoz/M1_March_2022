/**
 * @file info.h
 * 
 */
#ifndef _PATIENT_H_
#define _PATIENT_H_
enum limits{
    LIM_DISEASE = 32,
    LIM_NAME = 100
};
typedef struct patient{
    char name[LIM_NAME];
    char disease[LIM_DISEASE];
    int cabin_no,age;
    long phone_no;
}pat;

#endif