/*
 * EX1_C_Program_to_Check_a_Number_Is_Even.c
 * 
 *      Created on: 09/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
#include<stdio.h>
 
void main () 
{
	int u_num ; 

	printf("please enter the number : ");
	fflush(stdout);
	scanf("%d",&u_num);
	
	if(u_num%2==0)
	{
	   printf("the number is Even");
		
	}
	
	else printf("the number is odd");
	
	


}