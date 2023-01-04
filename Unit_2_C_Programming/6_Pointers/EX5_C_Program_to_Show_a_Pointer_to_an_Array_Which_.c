/*
 ============================================================================
 Name        : EX3_C_Program_to_Print_a_String_in_Reverse_Using_a_Pointer.c
 Author      : Mohamed Sarary
 Created on  : Dec 24, 2022
 Description : EX3 C Program to Print a String in Reverse Using a Pointer
 ============================================================================
 */
#include <stdio.h>

#include <stdio.h>

struct SEmployee
{
	char* name;
	int id;
};

int main()
{

	struct SEmployee emp1 = {"Mohamed",15}, emp2 = {"Hany",24}, emp3 = {"Fahmy",49};

	struct SEmployee *arr[]={&emp1,&emp2,&emp3};

	struct SEmployee*(*P_arr_emp)[3]= &arr;

	printf(" Employee Name : %s \n",(*(*P_arr_emp+1))->name);
	printf(" Employee ID :  %d \n",(*(*P_arr_emp+1))->id);

	return 0;
}
