#include "unity.h"
#include "hospital.h"

void setUp(){}
void tearDown(){}

void test_add_patient(void){
    pat new_patient = {"suresh","Typhoid",46,47,9840265472};
    TEST_ASSERT_EQUAL(0, add_patient(&new_patient));
}

void test_discharge_patient(void){
    pat new_patient = {"suresh","Typhoid",46,47,9840265472};
    TEST_ASSERT_EQUAL(0, add_patient(&new_patient));
    TEST_ASSERT_EQUAL(0, discharge_patient(new_patient.name));
}

void test_edit_patient_details(void){
    pat new_patient = {"suresh","Typhoid",46,47,9840265472};
    pat new_patient1 = {"suresh","Dysentry",46,47,9840265472};
    TEST_ASSERT_EQUAL(0, add_patient(&new_patient));
    TEST_ASSERT_EQUAL(0, edit_patient_details(new_patient.name,&new_paitent1));
    TEST_ASSERT_EQUAL(0, discharge_patient(new_patient.name));
}

void test_find_patient(void){
    pat new_patient = {"suresh","Typhoid",46,47,9840265472};
    TEST_ASSERT_EQUAL(0, add_patient(&new_patient));
    TEST_ASSERT_EQUAL(0, find_patient(new_patient.name));
    TEST_ASSERT_EQUAL(0, discharge_patient(new_patient.name));
}

void test_display_patient(void){
    TEST_ASSERT_EQUAL(1,display_patient()>0);
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_add_patient);
    RUN_TEST(test_discharge_patient);
    RUN_TEST(test_edit_patient_details);
    RUN_TEST(test_find_patient);
    RUN_TEST(test_display_patient);

    return UNITY_END();
}