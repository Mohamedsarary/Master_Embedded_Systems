/*
 * EX3_C_Program_to_Find_The_Largest_Number.c
 * 
 *      Created on: 10/10/2022
 *      
 *      Author: Mohamed Sarary
 */

#include <stdio.h>

void main() {
	float f_num , s_num , t_num ;
	
	printf("please enter the first number : ");
	fflush(stdout);
	scanf("%f",&f_num);
	
	printf("please enter the Second number : ");
	fflush(stdout);
	scanf("%f",&s_num);
	
	printf("please enter the Third number : ");
	fflush(stdout);
	scanf("%f",&t_num);
	
	if(f_num > s_num && f_num > t_num)
	{
			printf("the Largest number = %.2f ", f_num);
	}
	else if (s_num > f_num && s_num > t_num)
	{
			printf("the Largest number = %.2f ", s_num);
	}
	else 	printf("the Largest number = %f ", t_num);
	
	
}