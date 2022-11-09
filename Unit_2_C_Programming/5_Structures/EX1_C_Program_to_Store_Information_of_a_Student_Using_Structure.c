/*
============================================================================
 Name        : EX1_C_Program_to_Store_Information_of_a_Student_Using_Structure.c
 Author      : Mohamed Sarary
 Created on  : Nov 06, 2022
 Description : C Program to Store Information of Studentand Displaying it using Structure
 ============================================================================
 */
  
#include<stdio.h>
 
 /* struct defination */
struct Sstudent {
	
	char name[50];
	int r_num ;
	float marks ;
	
} Sstudent ;

/* main function */

void main ()
{
	printf(" *******please enter the information*******  \n");
	printf("please enter the name : ");
	fflush(stdout); fflush(stdin);
	gets(Sstudent.name);
	
	printf("please enter the roll number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&Sstudent.r_num);
	
	printf("please enter the Marks : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&Sstudent.marks);
	
	printf(" *******Displaying the information*******  \n");
	printf(" Name : %s \n",Sstudent.name);
	printf(" Roll number : %d \n",Sstudent.r_num);
	printf(" Marks : %0.2f \n",Sstudent.marks);
}