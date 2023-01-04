/*
 ============================================================================
 Name        : EX2_C_Program_to_Print_All_Alphabets_Using_a_pointer.c
 Author      : Mohamed Sarary
 Created on  : Dec 24, 2022
 Description : C Program to Print All Alphabets Using_a pointer
 ============================================================================
 */
#include<stdio.h>

void main() {

	char Alph[27];
	char *ptr = Alph ;
	int i , j ;

	for ( i=0 ; i<26 ; i++ )
	{

		*ptr= i + 'A';
		ptr++ ;
	}

	ptr=Alph ;

	for ( j=0 ; j<26 ; j++ )
		{

			printf(" %c ",*(ptr));
			ptr++;
		}




}
