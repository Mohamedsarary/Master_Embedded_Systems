/*
 * EX6_C_Program_to_Calculate_Sum_of_Natural_Numbers.c
 * 
 *      Created on: 10/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
 #include <stdio.h>
 
void main () 
{
	int u_input ; 
	int i ;
	int sum = 0 ; 
	
	printf("please enter the integer : ");
	fflush(stdout);
	scanf("%d",&u_input);
	
	
	for(i=0 ; i<=u_input ; i++ )
	{
		
		sum += i ;
		
	}

	printf("the sum = %d " , sum );
	
 }