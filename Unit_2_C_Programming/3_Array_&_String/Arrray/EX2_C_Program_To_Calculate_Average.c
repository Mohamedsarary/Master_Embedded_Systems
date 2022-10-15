/*
 * EX2_C_Program_To_Calculate_Average.c
 * 
 *      Created on: 15/10/2022
 *      
 *      Author: Mohamed Sarary
 */

#include<stdio.h>

void main ()
{
	int num_data ;
	int j ;
	float num[100];
	float average = 0 ;

	printf("please enter the number of data : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num_data);

	for(j=0 ; j<num_data ; j++)
	{
		printf(" %d Enter the number : ",j+1);
		fflush(stdout); fflush(stdin);
		scanf("%f",&num[j]);
	}

	
	for(j=0 ; j < num_data ; j++)
	{
	
		average += num[j] ;
	
	}
	
	average /=num_data ;
	printf("%0.266-45.=2f",average);

}