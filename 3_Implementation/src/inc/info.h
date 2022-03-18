/**
 * @file info.h
 * 
 */
#ifndef _INFO_H_
#define _INFO_H_
enum limits{
    LIM_NAME = 32,
    LIM_DISEASE = 32
};
typedef struct patient{
    char name[LIM_NAME];
    char disease[LIM_DISEASE];
}patient;

#endif