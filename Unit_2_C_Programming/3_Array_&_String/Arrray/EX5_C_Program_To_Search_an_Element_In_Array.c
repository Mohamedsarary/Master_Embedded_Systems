/*
 * EX5_C_Program_To_Search_an_Element_In_Array.c
 * 
 *      Created on: 15/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
#include<stdio.h> 

void main () 

{   int arr[10];
	int num_elements , num_ser ;
	int i = 0 ;
	
	/* Assign number of elements from user */
	printf("please enter the number of the elements : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num_elements);

	/* Assign the elements from user */
	for (i=0 ; i < num_elements ; i++ )
	{
		printf("Enter a%d element : ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);		
	}
	
	/* get the number to be searched from user */
	printf("please enter the number to be searched : ");
	fflush(stdout); fflush(stdin);	
	scanf("%d",&num_ser);	
	
	
	/* print the values which got from user */
	for(i=0 ; i<num_elements ; i++)
	{
		printf("%d ",arr[i]);

	}
	
	/* Search in the array and find the location of the number  */
	for (i = 0; i < num_elements; i++)
	{
		if(arr[i] == num_ser)
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
	}
}