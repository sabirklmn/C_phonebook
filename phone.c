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

void print_menu();
void remove_all();
void print_all();
void add_person();
void list_record();
void serach_person();
void remove_person();
void update_person();
void take_input(person *p);


int main ()
{
    start();
    return 0;
} 

void print_menu()
{
    system("clear");
    printf("\t\t\************************************\n");
    printf("*       Welcome to my phone book         *\n");
    printf("\t\t\************************************\n");
    printf("\t\t\t1) list record \n\n");
    printf("\t\t\t2) Add person \n\n");
    printf("\t\t\t3) Search person Details \n\n");
    printf("\t\t\t4) Remove person\n\n");
    printf("\t\t\t5) update person \n\n");
    printf("\t\t\t6) Delete all contacts \n\n");
    printf("\t\t\t7) exit phonebbok \n\n");

    printf("\t\t\t\t Enter your Choice : ");
}








