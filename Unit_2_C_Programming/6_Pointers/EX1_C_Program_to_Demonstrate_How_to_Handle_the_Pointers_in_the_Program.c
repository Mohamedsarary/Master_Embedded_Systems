/*
 ============================================================================
 Name        : EX1_C_Program_to_Demonstrate_How_to_Handle_the_Pointers_in_the_Program.c
 Author      : Mohamed Sarary
 Created on  : Dec 24, 2022
 Description :C Program to Demonstrate How to Handle_the Pointers in the_Program.c
 ============================================================================
 */
#include<stdio.h>

void main() {

	int m = 29;
	int*ptr;
	printf(" Address of m is : 0x%p\n", &m);
	printf(" Value of m is : %d\n", m);

	ptr = &m;
	printf(" Address of pointer is : 0x%p\n", ptr);
	printf(" Value of pointer is : %d\n", *ptr);

	m = 34;
	printf(" Address of pointer is : 0x%p\n", ptr);
	printf(" Value of pointer is : %d\n", *ptr);

	*ptr = 7;
	printf(" Address of m is : 0x%p\n", &m);
	printf(" Value of m is : %d\n", m);

}
