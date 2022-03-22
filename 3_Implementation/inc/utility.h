/**
 * @file utility.h
 * its the header file which will be used for declaration of standard files in c and also user defined headers
 * in addition it is also used to get the patient details
 */

#ifndef _UTILITY_H_
#define _UTILITY_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "patient.h"
void get_patient_data(char* name);
void get_patient_details(pat* new_patient);

#endif