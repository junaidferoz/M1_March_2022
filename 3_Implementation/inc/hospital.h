/**
 * @file hospital.h
 * a common header including all the declarations
 */

#ifndef _HOSPITAL_H_
#define _HOSPITAL_H_

#include "utility.h"
#include "patient.h"

int add_patient(pat* new_patient);
int discharge_patient(const char* name);
int edit_patient_details(char* name,pat* update_patient);
int find_patient(const char* name);
int display_patient(void);


#endif