/*
 * EX4_C_Program_to_Check_a_Number_is_Positive_or_Negative_or_Zero.c
 * 
 *      Created on: 10/10/2022
 *      
 *      Author: Mohamed Sarary
 */

#include <stdio.h>

void main() {
	float input_num ; 
	
	printf("please enter the number : ");
	fflush(stdout);
	scanf("%f",&input_num);
	
	if(input_num > 0 )
	{
		
		 printf("the number is Positive");
		
	}
	else printf("the number is Negative");
	

}	