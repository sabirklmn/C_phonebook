#include<stdio.h>
#include <stdlib.h>
#include <string.h>


struct person{
    char name[30];
    char country_code[4];
    long int moble_no;
    char sex[8];
    char mail[100];
};


typedef struct person person;


void remove_all();
void print_all();
void add_person();
void list_record();
void serach_person();
void remove_person();
void update_person();
void take_input(person *p);
