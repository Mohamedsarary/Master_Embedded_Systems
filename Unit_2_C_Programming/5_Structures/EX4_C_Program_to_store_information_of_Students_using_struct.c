/*
============================================================================
 Name        : EX4_C_Program_to_store_information_of_Students_using_struct.c
 Author      : Mohamed Sarary
 Created on  : Nov 06, 2022
 Description : C Program to Store Information of Students Displaying it using Structure
 ============================================================================
 */
  
#include<stdio.h>
 
 /* struct defination */
struct Sstudent {
	
	char name[50];
	int r_num ;
	float marks ;
	
} ;

/* main function */

void main ()
{
	struct Sstudent s_student[10] ;
	
	int count1 , count2  ; 
	
	printf(" *******please enter the information of the students *******  \n");
	
	for (count1=0 ; count1 < 10 ; count1++ )
	{
	printf("please enter the name : ");
	fflush(stdout); fflush(stdin);
	gets(s_student[count1].name);
	
	printf("please enter the roll number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&s_student[count1].r_num);
	
	printf("please enter the Marks : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&s_student[count1].marks);
	
	
	
	}
	printf(" *******Displaying the information*******  \n");
	
	for(count2=0 ; count2 < 10 ; count2++)
	{
	
	printf(" Name : %s \n",s_student[count2].name);
	printf(" Roll number : %d \n",s_student[count2].r_num);
	printf(" Marks : %0.2f \n",s_student[count2].marks); 	
		
		
	}



}