/*
 * EX7_C_Program_to_Find_Factorial_of_a_Number.c
 * 
 *      Created on: 10/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
 #include <stdio.h>
 
void main () 
{
	int u_num ; 
	int res = 1 ;
	int i  ; 
	printf(" enter an integer : ");
	fflush(stdout);
	scanf("%d",&u_num);
	
	if(u_num >= 0 )
	{
		for( i=1 ; i<=u_num ;i++)
		{
			res = res * i ;
			
		}
		printf(" The Factorial = %d ",res);
		
		
	}
	
	else printf(" Error!!! Factorial of Negative numbers doesn't exist ");
	
 }